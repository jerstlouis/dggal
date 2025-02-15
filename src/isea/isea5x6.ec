public import IMPORT_STATIC "ecere"

private:

import "isea"

/*
   Icosahedron Snyder equal-area (ISEA) projection
   plane space translated to place the leftmost icosahedron vertex at 0, 0,
   rotated 60 degrees clockwise,
   sheared with a 1.0 / sqrt(3) factor horizontally,
   and scaled by 1.0 / 7674457.9483758880087 m, 1.0 / 6646275.5435688359285 m,
   resulting in a 0..5 x 0..6 space with 10 square tiles where
   int(y) == int(x) || int(y) == int(x) + 1 corresponding to the diamonds
   made up of 2 faces of the icosahedron joined at their base
*/

ISEA5x6Projection isea5x6PJ { };

class ISEA5x6Projection : ISEAPlanarProjection
{
public:
   bool geoToCartesian(const GeoPoint position, Vector3D result)
   {
      Vector3D v;
      bool r = ISEAPlanarProjection::geoToCartesian(position, v);
      if(r)
         r = fromISEAPlanar(v, result);
      return r;
   }

   bool ::fromISEAPlanar(const Vector3D v, Vector3D result)
   {
      result =
      {
         x = (v.x + v.y * invSqrt3) * invTriWidth,
         y = (v.x - v.y * invSqrt3) * invTriWidth,
         z = v.z // Faced stored in z for now
      };
      return true;
   }

   bool ::toISEAPlanar(const Vector3D position, Vector3D result)
   {
      bool r = false;
      static const double epsilon = 1E-11; //1E-9; // 1E-11 fixes /dggs/ISEA3H/zones/Q0-0-D
      double x = position.x, y = position.y;
           if(x < 0 || (y > x && x < 5 - epsilon)) x += epsilon;
      else if(x > 5 || (y < x && x > 0 + epsilon)) x -= epsilon;
           if(y < 0 || (x > y && y < 6 - epsilon)) y += epsilon;
      else if(y > 6 || (x < y && y > 0 + epsilon)) y -= epsilon;

      if(x >= 0 && x <= 5 && y >= 0 && y <= 6)
         r = true;
      {
         int ix = Max(0, Min(4, (int)floor(x)));
         int iy = Max(0, Min(5, (int)floor(y)));
         if(!(iy == ix || iy == ix + 1))
            r = false;
         {
            int rhombus = ix + iy;
            bool top = x - ix > y - iy;
            int face = -1;

            switch(rhombus)
            {
               case 0: face = top ? 0 : 5; break;
               case 2: face = top ? 1 : 6; break;
               case 4: face = top ? 2 : 7; break;
               case 6: face = top ? 3 : 8; break;
               case 8: face = top ? 4 : 9; break;

               case 1: face = top ? 10 : 15; break;
               case 3: face = top ? 11 : 16; break;
               case 5: face = top ? 12 : 17; break;
               case 7: face = top ? 13 : 18; break;
               case 9: face = top ? 14 : 19; break;
            }

            // if(face != -1)
            {
               result =
               {
                  triWidthOver2 *         (x + y),
                  triWidthOver2 * sqrt3 * (x - y),
                  face + 1
               };
               //r = true;
               if(face == -1)
                  r = false;
            }
         }
      }
      return r;
   }

   bool cartesianToGeo(const Vector3D position, GeoPoint result)
   {
      Vector3D v;
      bool r = toISEAPlanar(position, v);
      if(r)
         r = ISEAPlanarProjection::cartesianToGeo(v, result);
      return r;
   }

   bool crsExtentFromWGS84(const GeoExtent wgs84Extent, Pointd topLeft, Pointd bottomRight)
   {
      if((Radians)wgs84Extent.ll.lat < -Pi/2 + 0.0001 &&
         (Radians)wgs84Extent.ll.lon < -Pi   + 0.0001 &&
         (Radians)wgs84Extent.ur.lat >  Pi/2 - 0.0001 &&
         (Radians)wgs84Extent.ur.lon >  Pi   - 0.0001)
      {
         topLeft = { 0, 0 };
         bottomRight = { 5, 6 };
         return true;
      }
      else
         return ISEAPlanarProjection::crsExtentFromWGS84(wgs84Extent, topLeft, bottomRight);
   }

   void wgs84ExtentFromCRS(const Pointd topLeft, const Pointd bottomRight, GeoExtent wgs84Extent)
   {
      if(topLeft.x < 0.0001 &&
         topLeft.y < 0.0001 &&
         bottomRight.x > 5 - 0.0001 &&
         bottomRight.y > 6 - 0.0001)
         wgs84Extent = wholeWorld;
      else
      {
         double x, y;
         Radians minY = Min((Radians)topLeft.y, (Radians)bottomRight.y);
         Radians maxY = Max((Radians)topLeft.y, (Radians)bottomRight.y);
         double dx = bottomRight.x - topLeft.x;
         double dy = maxY - minY;
         double xi, yi;
         int numAnchors;
         bool addedTop = false, addedBottom = false;
         if(dx < 1E-7 && dy < 1E-7) // REVIEW:
            numAnchors = 1;
         else
            numAnchors = ISEA_ANCHORS;

         xi = dx / numAnchors, yi = dy / numAnchors;

         wgs84Extent.ll = { MAXDOUBLE, MAXDOUBLE };
         wgs84Extent.ur = { -MAXDOUBLE, -MAXDOUBLE };

         // Avoid infinite loop due to huge coordinates too close together
         if((yi && maxY && fabs(yi / maxY) < 1E-11) || (xi && bottomRight.x && fabs(xi / bottomRight.x) < 1E-11)) return;

         for(y = minY; y <= maxY + yi * 0.1; y += yi)
         {
            for(x = topLeft.x; x <= bottomRight.x + xi * 0.1; x += xi)
            {
               Vector3D p { x, y };
               GeoPoint geo;

               if(cartesianToGeo(p, geo))
               {
                  if(geo.lat < wgs84Extent.ll.lat) wgs84Extent.ll.lat = geo.lat;
                  if(geo.lon < wgs84Extent.ll.lon) wgs84Extent.ll.lon = geo.lon;
                  if(geo.lat > wgs84Extent.ur.lat) wgs84Extent.ur.lat = geo.lat;
                  if(geo.lon > wgs84Extent.ur.lon) wgs84Extent.ur.lon = geo.lon;
               }
               else if(!addedTop && x - y > 1 - yi)
               {
                  // Ensure inclusion of top vertex
                  cartesianToGeo({ 1, 0 }, geo);
                  if(geo.lat < wgs84Extent.ll.lat) wgs84Extent.ll.lat = geo.lat;
                  if(geo.lon < wgs84Extent.ll.lon) wgs84Extent.ll.lon = geo.lon;
                  if(geo.lat > wgs84Extent.ur.lat) wgs84Extent.ur.lat = geo.lat;
                  if(geo.lon > wgs84Extent.ur.lon) wgs84Extent.ur.lon = geo.lon;
                  addedTop = true;
               }
               else if(!addedBottom && y - x > 1 - yi)
               {
                  // Ensure inclusion of bottom vertex
                  cartesianToGeo({ 0, 2 }, geo);
                  if(geo.lat < wgs84Extent.ll.lat) wgs84Extent.ll.lat = geo.lat;
                  if(geo.lon < wgs84Extent.ll.lon) wgs84Extent.ll.lon = geo.lon;
                  if(geo.lat > wgs84Extent.ur.lat) wgs84Extent.ur.lat = geo.lat;
                  if(geo.lon > wgs84Extent.ur.lon) wgs84Extent.ur.lon = geo.lon;
                  addedBottom = true;
               }
               if(!xi)
                  break;
            }
            if(!yi)
               break;
         }
      }
   }
}

/*static */bool isea5x6ToGeo(const Pointd vertex, GeoPoint geo)
{
   Pointd v = vertex;

   if(v.y < 0 && v.x <= 1)
   {
      Pointd vv
      {
         x = 5 + v.y;
         y = 5 - (v.x - 0) - v.x + v.y;
      };
      v = vv;
   }
   else if(v.x < 0 && v.y <= 1)
   {
      Pointd vv
      {
         x = 5 + v.x;
         y = 5 + v.y;
      };
      v = vv;
   }

   return isea5x6PJ.cartesianToGeo({ v.x, v.y }, geo);
}

static bool intersectsInterruption(const Pointd a0, const Pointd a1, const Pointd b0, const Pointd b1, Pointd i, double * distance)
{
   static const double e = 1E-12; //1E-13;
   double s1y = a1.y - a0.y, s1x = a1.x - a0.x;
   double s2y = b1.y - b0.y, s2x = b1.x - b0.x;
   double dy = a0.y - b0.y, dx = a0.x - b0.x;
   double d = (s1x * s2y - s2x * s1y);

   if(fabs(d) > 1E-13) // Return false for parallel segments
   {
      double factor = 1.0 / d;
      double s = (s1x * dy - s1y * dx) * factor;
      if(s - e >= 0 && s + e <= 1)
      {
         double t = (s2x * dy - s2y * dx) * factor;
         if(t - e >= 0 && t + e <= 1)
         {
            i = { a0.x + t * s1x, a0.y + t * s1y };
            {
               // double dx = i.x - a0.x, dy = i.y - a0.y;
               *distance = t; //dx * dx + dy * dy;
            }
            return true;
         }
      }
   }
   return false;
}

// #define TEST_CROSSING

#ifdef TEST_CROSSING
static struct CrossingTest
{
   Pointd src, dst;
   bool south, left;
};

static void crossISEAInterruptionTest()
{
   CrossingTest testCases[] =
   {
      { { 1, 0.3 }, { 1.7, 1 }, false, false },
      { { 2, 1.3 }, { 2.7, 2 }, false, false },
      { { 3, 2.3 }, { 3.7, 3 }, false, false },
      { { 4, 3.3 }, { 4.7, 4 }, false, false },

      { { 1.7, 1 }, { 1, 0.3 }, false, true },
      { { 2.7, 2 }, { 2, 1.3 }, false, true },
      { { 3.7, 3 }, { 3, 2.3 }, false, true },
      { { 4.7, 4 }, { 4, 3.3 }, false, true },

      { { 0.3, 2 }, { 1, 2.7 }, true, false },
      { { 1.3, 3 }, { 2, 3.7 }, true, false },
      { { 2.3, 4 }, { 3, 4.7 }, true, false },
      { { 3.3, 5 }, { 4, 5.7 }, true, false },

      { { 1, 2.7 }, { 0.3, 2 }, true, true },
      { { 2, 3.7 }, { 1.3, 3 }, true, true },
      { { 3, 4.7 }, { 2.3, 4 }, true, true },
      { { 4, 5.7 }, { 3.3, 5 }, true, true },

      { { 1, 0 }, { 2, 1 }, false, false },
      { { 2, 1 }, { 3, 2 }, false, false },
      { { 3, 2 }, { 4, 3 }, false, false },
      { { 4, 3 }, { 5, 4 }, false, false },

      { { 1, 1 }, { 1, 1 }, false, false },
      { { 2, 2 }, { 2, 2 }, false, false },
      { { 3, 3 }, { 3, 3 }, false, false },
      { { 4, 4 }, { 4, 4 }, false, false },

      { { 2, 1 }, { 1, 0 }, false, true },
      { { 3, 2 }, { 2, 1 }, false, true },
      { { 4, 3 }, { 3, 2 }, false, true },
      { { 5, 4 }, { 4, 3 }, false, true },

      { { 1, 1 }, { 1, 1 }, false, true },
      { { 2, 2 }, { 2, 2 }, false, true },
      { { 3, 3 }, { 3, 3 }, false, true },
      { { 4, 4 }, { 4, 4 }, false, true },

      { { 0, 2 }, { 1, 3 }, true, false },
      { { 1, 3 }, { 2, 4 }, true, false },
      { { 2, 4 }, { 3, 5 }, true, false },
      { { 3, 5 }, { 4, 6 }, true, false },

      { { 1, 2 }, { 1, 2 }, true, false },
      { { 2, 3 }, { 2, 3 }, true, false },
      { { 3, 4 }, { 3, 4 }, true, false },
      { { 4, 5 }, { 4, 5 }, true, false },

      { { 1, 3 }, { 0, 2 }, true, true },
      { { 2, 4 }, { 1, 3 }, true, true },
      { { 3, 5 }, { 2, 4 }, true, true },
      { { 4, 6 }, { 3, 5 }, true, true },

      { { 1, 2 }, { 1, 2 }, true, true },
      { { 2, 3 }, { 2, 3 }, true, true },
      { { 3, 4 }, { 3, 4 }, true, true },
      { { 4, 5 }, { 4, 5 }, true, true }
   };
   int count = sizeof(testCases) / sizeof(testCases[0]), i;

   for(i = 0; i < count; i++)
   {
      const CrossingTest * t = &testCases[i];
      Pointd dst;
      crossISEAInterruption(t->src, dst, t->south, t->left);
      if(fabs(dst.x - t->dst.x) > 1E-8 ||
         fabs(dst.y - t->dst.y) > 1E-8)
      {
         PrintLn("[!FAILED!] failed test for ", t->src, ", south: ", t->south, ", left: ", t->left, ": ", dst, " returned instead of ", t->dst);
         crossISEAInterruption(t->src, dst, t->south, t->left);
      }
   }
}
#endif

private /*static */void crossISEAInterruption(const Pointd iSrc, Pointd iDst, bool south, bool left)
{
#ifdef TEST_CROSSING
   static bool crossTested;
   if(!crossTested)
   {
      crossTested = true;
      crossISEAInterruptionTest();
   }
#endif

   switch(south)
   {
      case false: // Crossing North hemisphere
         switch(left)
         {
            case true: // Crossing left
            {
               int ix = (int)(iSrc.y + 1E-11);
               iDst = { iSrc.y, ix - (iSrc.x - ix) };
               break;
            }
            case false: // Crossing right
            {
               int iy = (int)(iSrc.x - 1 + 1E-11);
               iDst = { iy + 2 - (iSrc.y - iy), iSrc.x };
               break;
            }
         }
         break;
      case true: // Crossing South hemisphere
         switch(left)
         {
            case true: // Crossing left
            {
               int iy = (int)(iSrc.x + 1 + 1E-11);
               iDst = { iy - 1 - (iSrc.y - iy), iSrc.x + 1 };
               break;
            }
            case false: // Crossing right
            {
               int ix = (int)(iSrc.y - 2 + 1E-11);
               iDst = { iSrc.y - 1, ix + 3 - (iSrc.x - ix) };
               break;
            }
         }
         break;
   }
   if(iDst.x > 5 - 1E-11 && iDst.y > 5 - 1E-11)
      iDst.x -= 5, iDst.y -= 5;
   else if(iDst.x < 1E-11 && iDst.y < 1 - 1E-11)
      iDst.x += 5, iDst.y += 5;
}

#if !defined(__EMSCRIPTEN__)
__attribute__ ((optimize("-fno-unsafe-math-optimizations")))
#endif
bool crossesISEAInterruption(const Pointd cIn, double dx, double dy, Pointd iSrc, Pointd iDst, bool * north)
{
   bool result = false;
   static Pointd interruptions[2 /* hemisphere */][5 /* root rhombus */][2 /* left, right */][2 /* points*/] =
   {
      {  // North interruptions
         { { { 0, 0 }, { 1, 0 } }, { { 1, 0 }, { 1, 1 } } },
         { { { 1, 1 }, { 2, 1 } }, { { 2, 1 }, { 2, 2 } } },
         { { { 2, 2 }, { 3, 2 } }, { { 3, 2 }, { 3, 3 } } },
         { { { 3, 3 }, { 4, 3 } }, { { 4, 3 }, { 4, 4 } } },
         { { { 4, 4 }, { 5, 4 } }, { { 5, 4 }, { 5, 5 } } }
      },
      {  // South interruptions
         { { { 0, 1 }, { 0, 2 } }, { { 0, 2 }, { 1, 2 } } },
         { { { 1, 2 }, { 1, 3 } }, { { 1, 3 }, { 2, 3 } } },
         { { { 2, 3 }, { 2, 4 } }, { { 2, 4 }, { 3, 4 } } },
         { { { 3, 4 }, { 3, 5 } }, { { 3, 5 }, { 4, 5 } } },
         { { { 4, 5 }, { 4, 6 } }, { { 4, 6 }, { 5, 6 } } }
      }
   };
   int h, r, s;
   int crossH, crossS;
   double minD = MAXDOUBLE;
   Pointd c = cIn;
        if(fabs(c.x - 0) < 1E-12) c.x = 0;
   else if(fabs(c.x - 1) < 1E-12) c.x = 1;
   else if(fabs(c.x - 2) < 1E-12) c.x = 2;
   else if(fabs(c.x - 3) < 1E-12) c.x = 3;
   else if(fabs(c.x - 4) < 1E-12) c.x = 4;
   else if(fabs(c.x - 5) < 1E-12) c.x = 5;
        if(fabs(c.y - 0) < 1E-12) c.y = 0;
   else if(fabs(c.y - 1) < 1E-12) c.y = 1;
   else if(fabs(c.y - 2) < 1E-12) c.y = 2;
   else if(fabs(c.y - 3) < 1E-12) c.y = 3;
   else if(fabs(c.y - 4) < 1E-12) c.y = 4;
   else if(fabs(c.y - 5) < 1E-12) c.y = 5;
   else if(fabs(c.y - 6) < 1E-12) c.y = 6;

   for(h = 0; h < 2; h++)
   {
      for(r = 0; r < 5; r++)
      {
         for(s = 0; s < 2; s++)
         {
            Pointd iCur;
            double d;

            if(intersectsInterruption(
               c, { c.x + dx, c.y + dy },
               interruptions[h][r][s][0], interruptions[h][r][s][1],
               iCur, &d) && d < minD)
            {
               iSrc = iCur;
               minD = d;
               crossH = h, crossS = s;
               result = true;
            }
         }
      }
   }
   if(result)
   {
      crossISEAInterruption(iSrc, iDst, crossH == 1, crossS == 0);
      *north = crossH == 0;
   }
   return result;
}

// Jumping over ISEA interruptions in the 5x6 space is still tricky, and subject to optimization.
// These 3 functions are three attempts to do the correct thing in various scenarios.
// Currently, one works better than the others for particular scenarios.
// The end goal is to have a single function which works better than all of them,
// and which could even potentially support jumping over multiple interruptions
// such as for iterating polar scanlines.

#if !defined(__EMSCRIPTEN__)
__attribute__ ((optimize("-fno-unsafe-math-optimizations")))
#endif
void moveISEAVertex(Pointd v, const Pointd c, double dx, double dy)
{
   int cx = (int)(c.x + 1E-11), cy = (int)(c.y + 1E-11);
   int vx, vy;

   v = { c.x + dx, c.y + dy };
   vx = (int)floor(c.x + dx - Sgn(dx) * 1E-11);
   vy = (int)floor(c.y + dy - Sgn(dy) * 1E-11);

   if(((vx != cx && fabs(v.y - vy) > 1E-11) || (vy != cy && fabs(v.x - vx) > 1E-11)) &&
      (vy - vx > 1 || vy < vx))
   {
      if(vx < cx)
      {
         // Stepping over bottom dent to the left
         v.x = cx - (c.y - cy) + dx - dy;
         v.y = cy + dx;
      }
      else if(vx > cx)
      {
         // Stepping over top dent to the right
         v.x = cx - (c.y - cy) + dx - dy;
         v.y = cy + dx;
      }
      else if(vy < cy)
      {
         // Stepping over top dent to the left
         v.x = cx + dy;
         v.y = cy - (c.x - cx) - dx + dy;
      }
      else if(vy > cy)
      {
         // Stepping over bottom dent to the right
         v.x = cx + dy;
         v.y = cy - (c.x - cx) - dx + dy;
      }
   }
#if 0 // _DEBUG   // TODO: Clarify where the behavior of moveISEAVertex2() differ
   {
      Pointd v2;
      moveISEAVertex2(v2, c, dx, dy, false);
      if(fabs(v2.x - v.x) > 1E-11 ||
         fabs(v2.y - v.y) > 1E-11)
         moveISEAVertex2(v2, c, dx, dy, false);
   }
#endif
}

// NOTE: This does not have safe optimizations disabled, which might potentially
//       expalin issues using it after crossISEAInterruption()
void moveISEAVertex3(Pointd v, const Pointd c, double dx, double dy)
{
   bool north;
   Pointd i1, i2;
   if(crossesISEAInterruption(c, dx, dy, i1, i2, &north))
   {
      // Assuming crossing right for now
      if(north)
      {
         v.x = i2.x - 2 * (dy - (i1.y - c.y));
         v.y = i2.y + dx - (i1.x - c.x);
      }
      else
      {
         v.x = i2.x + dy - (i1.y - c.y);
         v.y = i2.y + 2 * (dx - (i1.x - c.x));
      }
   }
   else
      v = { c.x + dx, c.y + dy };

   if(v.x > 5 && v.y > 5)
      v.x -= 5, v.y -= 5;
   else if(v.x < 0 && v.y < 1)
      v.x += 5, v.y += 5;
}


// REVIEW: This function may potentially replace the previous attempt above
#if !defined(__EMSCRIPTEN__)
__attribute__ ((optimize("-fno-unsafe-math-optimizations")))
#endif
void moveISEAVertex2(Pointd v, const Pointd srcC, double dx, double dy, bool crossEarly)
{
   double e = 1E-11;
   Pointd c = srcC;
   int cx = (int)floor(c.x+e), cy = (int)floor(c.y+e);
   int cx2 = (int)floor(c.x-e), cy2 = (int)floor(c.y-e);
   Pointd n { c.x + dx, c.y + dy };
   bool atTopDentCrossingRight, atTopDentCrossingLeft, atBottomDentCrossingLeft, atBottomDentCrossingRight;
   bool nTopRightOfP, nTopLeftOfP, nBottomRightOfP, nBottomLeftOfP;
   int vx, vy;

   if(n.x < 0) n.x += 5; else if(n.x > 5) n.x -= 5;
   if(n.y < 0) n.y += 5; else if(n.y > 5) n.y -= 5;

   nTopRightOfP = (n.x > c.x + e && n.x - c.x < 3) || c.x - n.x > 3;
   nTopLeftOfP = (n.x < c.x - e && c.x - n.x < 3) || n.x - c.x > 3;
   nBottomRightOfP = (n.y > c.y && n.y - c.y < 3) || c.y - n.y > 3;
   nBottomLeftOfP = (n.y < c.y - e && c.y - n.y < 3) || n.y - c.y > 3;
   atTopDentCrossingRight    = cx2 != cx && c.x > c.y && nTopRightOfP;
   atTopDentCrossingLeft     = cy2 != cy && c.x > c.y && nTopLeftOfP;
   atBottomDentCrossingLeft  = cx2 != cx && c.y > c.x + 1 && nBottomLeftOfP;
   atBottomDentCrossingRight = cy2 != cy && c.y > c.x + 1 && nBottomRightOfP;

   // Cross already for cases where crossing does not happen mid-edge
   if(crossEarly)
   {
      if(atTopDentCrossingRight)
         c = { cx + 1.0 - (c.y - cy), cy + 1 };
      else if(atTopDentCrossingLeft)
         c = { cx, cy - (c.x - cx) };
      else if(atBottomDentCrossingLeft)
         c = { cx - (c.y - cy), cy };
      else if(atBottomDentCrossingRight)
         c = { cx + 1, cy + (cx + 1 - c.x) };

      if(c.x > 5 || c.y > 6 + e)
         c.x -= 5, c.y -= 5;
      else if(c.x < 0 || c.y < -e)
         c.x += 5, c.y += 5;
      cx = (int)floor(c.x + e), cy = (int)floor(c.y + e);
   }

   v = { c.x + dx, c.y + dy };
   vx = (int)floor(c.x + dx + 1E-11), vy = (int)floor(c.y + dy + 1E-11);

   if(((vx != cx && fabs(v.y - vy) > 1E-11) || (vy != cy && fabs(v.x - vx) > 1E-11)) &&
      (vy - vx > 1 || vy < vx) /* REVIEW: && (c.x - cx > 1E-11 || c.y - cy > 1E-11)*/ )
   {
      Pointd pi1, pi2; // Interruptions
      // Assuming the crossing point is at half the distance

      if(fabs(v.x - v.y - 1) < 1E-10) v = { 1, 0 }; // "North" pole
      else if(fabs(v.y - v.x - 2) < 1E-10) v = { 4, 6 }; // "South" pole
      else if(vx < cx && v.x - vx < 1-e)
      {
         // Stepping over bottom dent to the left
         pi1 = { cx, c.y + 0.5 * (cx - c.x) };
         pi2 = { cx - (pi1.y - cy), cy };
         v.x = pi2.x + pi1.y - c.y;
         v.y = pi2.y + pi1.x - c.x;
      }
      else if(vx > cx && v.x - vx > e)
      {
         // Stepping over top dent to the right
         pi1 = { cx + 1, c.y + 0.5 * (cx + 1 - c.x) };
         pi2 = { cx + 1 + (cy + 1 - pi1.y), cy + 1 };
         v.x = pi2.x + pi1.y - c.y;
         v.y = pi2.y + pi1.x - c.x;
      }
      else if(vy < cy && v.y - vy < 1-e)
      {
         // Stepping over top dent to the left
         pi1 = { c.x + 0.5 * (cy - c.y), cy };
         pi2 = { cx, cy - (pi1.x - cx) };
         v.x = pi2.x + pi1.y - c.y;
         v.y = pi2.y + pi1.x - c.x;
      }
      else if(vy > cy && v.y - vy > e)
      {
         // Stepping over bottom dent to the right
         pi1 = { v.x + 0.5 * (cy + 1 - c.y), cy + 1 };
         pi2 = { cx + 1, cy + 1 + (cx + 1 - pi1.x) };
         v.x = pi2.x + pi1.y - c.y;
         v.y = pi2.y + pi1.x - c.x;
      }
   }
   if(v.x > 5)
      v.x -= 5, v.y -= 5;
   else if(v.x < 0)
      v.x += 5, v.y += 5;
}


/*static */Array<Pointd> refineISEA(int count, const Pointd * src, int nDivisions, bool wrap)
{
   int n = (count + 2) * nDivisions;
   Array<Pointd> points { minAllocSize = n };
   int i;
   // double r = 1.0 / nDivisions;
   double e = 1E-11;

   for(i = 0; i < count; i++)
   {
      Pointd p = src[i], next = src[i < count - 1 ? i + 1 : 0];
      int cpx1 = (int)floor(p.x+e), cpy1 = (int)floor(p.y+e);
      int cnx1 = (int)floor(next.x+e), cny1 = (int)floor(next.y+e);
      int cpx2 = (int)floor(p.x-e);
      int cpy2 = (int)floor(p.y-e);
      int cnx2 = (int)floor(next.x-e);
      int cny2 = (int)floor(next.y-e);
      bool nTopRightOfP = (next.x > p.x + e && next.x - p.x < 3) || p.x - next.x > 3;
      bool nTopLeftOfP = (next.x < p.x - e && p.x - next.x < 3) || next.x - p.x > 3;
      bool nBottomRightOfP = (next.y > p.y && next.y - p.y < 3) || p.y - next.y > 3;
      bool nBottomLeftOfP = (next.y < p.y - e && p.y - next.y < 3) || next.y - p.y > 3;
      bool atTopDentCrossingRight    = cpx2 != cpx1 && p.x > p.y && nTopRightOfP;
      bool atTopDentCrossingLeft     = cpy2 != cpy1 && p.x > p.y && nTopLeftOfP;
      bool atBottomDentCrossingLeft  = cpx2 != cpx1 && p.y > p.x + 1 && nBottomLeftOfP;
      bool atBottomDentCrossingRight = cpy2 != cpy1 && p.y > p.x + 1 && nBottomRightOfP;
      bool nextAtTopDentCrossingRight    = cnx2 != cnx1 && next.x > next.y && nTopLeftOfP;
      bool nextAtTopDentCrossingLeft     = cny2 != cny1 && next.x > next.y && nTopRightOfP;
      bool nextAtBottomDentCrossingLeft  = cnx2 != cnx1 && next.y > next.x + 1 && nBottomRightOfP;
      bool nextAtBottomDentCrossingRight = cny2 != cny1 && next.y > next.x + 1 && nBottomLeftOfP;
      int cpx, cpy, cnx, cny;
      int k;
      double dx = (next.x - p.x), dy = (next.y - p.y);
      int nRoot, pRoot;
      bool nSouth, pSouth;
      Pointd pi1, pi2; // Interruption and/or wrapping points
      bool interrupted = false, wrapped = false;

      if((atTopDentCrossingRight && nextAtTopDentCrossingLeft) ||
         (atTopDentCrossingLeft && nextAtTopDentCrossingRight) ||
         (atBottomDentCrossingRight && nextAtBottomDentCrossingLeft) ||
         (atBottomDentCrossingLeft && nextAtBottomDentCrossingRight))
      {
         // Point on each side of interruption -- simply add both points
         points.Add(p);
         points.Add(next);
         continue;
      }

      //if(i != 0) continue;
      //if(i != 1) continue;
      //if(i != 2) continue;
      //if(i != 3) continue;
      //if(i != 4) continue;
      //if(i != 5) continue;

      if(fabs(dx) < 1E-11 && fabs(dy) < 1E-11 && wrap) continue;

      // Cross already for cases where crossing does not happen mid-edge

      if(wrap)
      {
         if(atTopDentCrossingRight)
            p = { cpx1 + 1.0 - (p.y - cpy1), cpy1 + 1 };
         else if(atTopDentCrossingLeft)
            p = { cpx1, cpy1 - (p.x - cpx1) };
         else if(atBottomDentCrossingLeft)
            p = { cpx1 - (p.y - cpy1), cpy1 };
         else if(atBottomDentCrossingRight)
            p = { cpx1 + 1, cpy1 + (cpx1 + 1 - p.x) };

         if(nextAtTopDentCrossingRight)
            next = { cnx1 + 1.0 - (next.y - cny1), cny1 + 1 };
         else if(nextAtTopDentCrossingLeft)
            next = { cnx1, cny1 - (next.x - cnx1) };
         else if(nextAtBottomDentCrossingLeft)
            next = { cnx1 - (next.y - cny1), cny1 };
         else if(nextAtBottomDentCrossingRight)
            next = { cnx1 + 1, cny1 + (cnx1 + 1 - next.x) };

         if(p.x > 5 + e || p.y > 6 + e)
            p.x -= 5, p.y -= 5;
         else if(p.x < -e || p.y < -e)
            p.x += 5, p.y += 5;
         if(next.x > 5 + e || next.y > 6 + e)
            next.x -= 5, next.y -= 5;
         else if(next.x < -e || next.y < -e)
            next.x += 5, next.y += 5;
      }

      cpx1 = (int)floor(p.x+e), cpy1 = (int)floor(p.y+e);
      cnx1 = (int)floor(next.x+e), cny1 = (int)floor(next.y+e);
      cpx = cpx1, cpy = cpy1;
      cnx = cnx1, cny = cny1;
      dx = (next.x - p.x), dy = (next.y - p.y);
      nRoot = cnx + cny, pRoot = cpx + cpy;
      nSouth = nRoot & 1, pSouth = pRoot & 1;

      if(cpx != cnx && cpy != cny)
      {
         if(cnx - cpx > 3)
         {
            if(wrap)
               wrapped = true;
            dx -= 5, dy -= 5;
            if(cpy == 0 && cny == 5 && cnx == 4)
            {
               // Uninterrupted wrap to the left
               pi1 = { 0, p.y + dy * (0 - p.x) / dx };
               pi2 = { pi1.x + 5, pi1.y + 5 };
            }
            else if(cpy == 0 && cny == 4 && cnx == 4)
            {
               // Crossing top dent to the left while wrapping
               // The shortest path is going straight for the edge, hitting it at 30 degrees (taking into account 5x6 shearing)
               interrupted = true;
               pi1 = { p.x + 0.5 * (cpy - p.y), cpy };
               pi2 = { (cnx + 1), cny + 1 - (pi1.x - cpx) };
            }
            else if(cpy == 1 && cny == 5 && cnx == 4)
            {
               // Crossing bottom dent to the left while wrapping
               // The shortest path is going straight for the edge, hitting it at 30 degrees (taking into account 5x6 shearing)
               interrupted = true;
               pi1 = { cpx, p.y + 0.5 * (cpx - p.x) };
               pi2 = { cnx + 1 - (pi1.y - cpy), cny + 1 };
            }
            else
            {
               // This happens on exact same point
#ifdef _DEBUG
               // PrintLn("WARNING: Unexpected case");
#endif
               if(wrapped) continue;
            }
         }
         else if(cnx - cpx < -3)
         {
            if(wrap)
               wrapped = true;
            dx += 5, dy += 5;
            if(cpy == 5 && cny == 0 && cnx == 0)
            {
               // Uninterrupted wrap to the right
               pi1 = { 5, p.y + dy * (5 - p.x) / dx };
               pi2 = { pi1.x - 5, pi1.y - 5 };
               dx -= (pi2.x + 5 - pi1.x);
               dy -= (pi2.y + 5 - pi1.y);
            }
            else if(cpy == 4 && cny == 0 && cnx == 0)
            {
               // Crossing top dent to the right while wrapping
               // The shortest path is going straight for the edge, hitting it at 30 degrees (taking into account 5x6 shearing)
               interrupted = true;
               pi1 = { cpx + 1, p.y + 0.5 * (cpx + 1 - p.x) };
               pi2 = { cnx + 1 - (pi1.y - cpy), cny };
            }
            else if(cpy == 5 && cny == 1 && cnx == 0)
            {
               // Crossing bottom dent to the right while wrapping
               // The shortest path is going straight for the edge, hitting it at 30 degrees
               // (taking into account 5x6 shearing: cos(Degrees { 30 }) / sqrt(3))
               interrupted = true;
               pi1 = { p.x + 0.5 * (cpy + 1 - p.y), cpy + 1 };
               pi2 = { cnx, cny + (cpx + 1 - pi1.x) };
            }
            else
            {
               // This happens on exact same point
#ifdef _DEBUG
               // PrintLn("WARNING: Unexpected case");
#endif
               if(wrapped) continue;
            }
         }
         else if(nSouth == pSouth)
         {
            // Crossing top dent to the right
            if(cnx > cpx && !nSouth && !pSouth)
            {
               // The shortest path is going straight for the edge, hitting it at 30 degrees (taking into account 5x6 shearing)
               interrupted = true;
               pi1 = { cpx + 1, p.y + 0.5 * (cpx + 1 - p.x) };
               pi2 = { cnx + (cpy + 1 - pi1.y), cny };
            }
            // Crossing top dent to the left
            else if(cnx < cpx && !nSouth && !pSouth)
            {
               // The shortest path is going straight for the edge, hitting it at 30 degrees (taking into account 5x6 shearing)
               interrupted = true;
               pi1 = { p.x + 0.5 * (cpy - p.y), cpy };
               pi2 = { cnx + 1, cny + 1 - (pi1.x - cpx) };
            }
            // Crossing bottom dent to the right
            else if(cnx > cpx && nSouth && pSouth)
            {
               // The shortest path is going straight for the edge, hitting it at 30 degrees (taking into account 5x6 shearing)
               interrupted = true;
               pi1 = { p.x + 0.5 * (cpy + 1 - p.y), cpy + 1 };
               pi2 = { cnx, cny + (cpx + 1 - pi1.x) };
            }
            // Crossing bottom dent to the left
            else if(cnx < cpx && nSouth && pSouth)
            {
               // The shortest path is going straight for the edge, hitting it at 30 degrees (taking into account 5x6 shearing)
               interrupted = true;
               pi1 = { cpx, p.y + 0.5 * (cpx - p.x) };
               pi2 = { cnx + 1 - (pi1.y - cpy), cny + 1 };
            }
            else
            {
               // This happens on exact same point
#ifdef _DEBUG
               // PrintLn("WARNING: Unexpected case");
#endif
               if(wrapped) continue;
            }
         }
      }

      if(fabs(dx) < 1E-11 && fabs(dy) < 1E-11 && wrap)
         continue;

      if(interrupted)
      {
         // REVIEW: The check might be obsoleted by new early crossing code
         dx = fabs(pi1.x - p.x) > e ? 2*(pi1.x - p.x) : next.y - pi2.y;
         dy = fabs(pi1.y - p.y) > e ? 2*(pi1.y - p.y) : next.x - pi2.x;
      }

      points.Add(p);

      /*
      if(i == 1) continue;
      if(i == 2) continue;
      if(i == 3) continue;
      if(i == 4) continue;
      if(i == 0) continue;
      */

      if(wrap) // Clarify this boolean parameter -- is actual refining only happening when wrap is true?
      {
         int startPoint = points.count - 1, startK = 0;
         // dx *= r, dy *= r;

         for(k = 1; k <= nDivisions - 1; k++)
         {
            // int count = points.count;
            double lastX = points[startPoint].x, lastY = points[startPoint].y;
            double x = lastX + dx * (k - startK) / nDivisions, y = lastY + dy * (k - startK) / nDivisions;
            int px = (int)floor(x+1E-11), py = (int)floor(y+1E-11);

            // TODO: Use extra point at 0.001 dx & dy before and after north/south pole at half of polar edges

            if(x < 0 || x > 5 || y < 0 || y > 6 || py < px || py - px > 1)
            {
               // Crossing interruption or wrapping: add points on each side
               if(interrupted || wrapped)
               {
                  points.Add(pi1);
                  points.Add(pi2);
                  startPoint = points.count-1;
                  startK = k;
               }
               else
                  points.Add({ x, y }); // This currently happens when walking along x = 6 edge
               if(interrupted)
               {
                  // REVIEW: Do we need point after left over distance?
                  // points.Add({ pi2.x + dx - (pi1.x - lastX), pi2.y + dy - (pi1.y - lastY) });
                  double t = dx;
                  dx = dy, dy = t;
               }
            }
            else
               points.Add({ x, y });
         }
      }
      else if(interrupted)
      {
         points.Add(pi1);
         points.Add(pi2);
      }
   }
   points.minAllocSize = 0;
   return points;
}
