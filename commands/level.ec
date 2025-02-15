public import IMPORT_STATIC "ecere"
import IMPORT_STATIC "dggal"

int levelInfo(DGGRS dggrs, int level, Map<String, const String> options, bool asTable)
{
   int exitCode = 1;
   int depth = dggrs.get64KDepth();
   double mmPerPixel = 0.28;
   const String depthOption = options ? options["depth"] : null;
   const String displayResOption = options ? options["display-res"] : null;

   if(depthOption)
   {
      int maxDepth = dggrs.getMaxDepth();

      depth.OnGetDataFromString(depthOption);
      if(depth > maxDepth)
      {
         PrintLn($"Invalid depth (maximum: ", maxDepth, ")");
         return 1;
      }
   }
   if(displayResOption)
      mmPerPixel.OnGetDataFromString(displayResOption);

   if(level == -1)
   {
      // TODO: Support -mpp, -scale, -pixels from options
      int maxLevel = dggrs.getMaxDGGRSZoneLevel();

      PrintLn($"Assuming sub-zone depth of ", depth, $" and display resolution of ", mmPerPixel, $" mm/pixel:");

      PrintLn($"Level       Reference Area                             Sub-zones count        Sub-zone area                                                 Scale                   Meters/Sub-zone");
      PrintLn("-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------");
      for(level = 0; level <= maxLevel; level++)
         levelInfo(dggrs, level, options, true);
      exitCode = 0;
   }
   else
   {
      double metersPerSubZone = dggrs.getMetersPerSubZoneFromLevel(level, depth);
      double scaleDenominator = dggrs.getScaleDenominatorFromLevel(level, depth, mmPerPixel);
      DGGRSZone testZone = dggrs.getZoneFromWGS84Centroid(level, { 0, 10 }); // Avoiding ISEA3H pentagon at 0,0 at level 1 and 2
      uint64 nSubZones = dggrs.countSubZones(testZone, depth);
      double refArea = dggrs.getRefZoneArea(level);

      if(asTable)
      {
         printf("%2d: %23.8f m² (%17.8f km²)     %10d    ", level, refArea, refArea / 1000000, (int)nSubZones);
         printf("%24.8f m² (%27.8f cm²) %3d:%12.0f %19.8f m (%19.8f cm)\n", refArea/nSubZones, refArea * 10000 / nSubZones,
            scaleDenominator > 1 ? 1 : (uint)(1/scaleDenominator + 0.5), scaleDenominator < 1 ? 1.0 : scaleDenominator,
            metersPerSubZone, 100 * metersPerSubZone);
      }
      else
      {
         PrintLn($"Refinement Level: ", level);
         PrintLn($"Reference area: ", refArea, " m² (", refArea / 1000000, " km²)");
         PrintLn("");
         PrintLn($"Assuming sub-zone depth of ", depth, " (", nSubZones, $" sub-zones) and display resolution of ", mmPerPixel, $" mm/pixel:");
         PrintLn($"   Sub-zones area: ", refArea / nSubZones, " m² (", refArea * 10000 / nSubZones, " cm²)");
         PrintLn($"   Cartographic scale: ",
            scaleDenominator > 1 ? 1 : (uint)(1/scaleDenominator + 0.5), ":",
            scaleDenominator < 1 ? 1LL : (uint64)scaleDenominator);
         PrintLn($"   Physical meters/sub-zone: ", metersPerSubZone, " (", metersPerSubZone * 100, $" cm/sub-zone)");
      }
      exitCode = 0;
   }
   return exitCode;
}
