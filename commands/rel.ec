public import IMPORT_STATIC "ecere"
import IMPORT_STATIC "dggal"

int relationInfo(DGGRS dggrs, DGGRSZone a, DGGRSZone b, Map<String, const String> options)
{
   int exitCode = 1;
   if(a != nullZone && b != nullZone)
   {
      if(a == b)
      {
         PrintLn($"These two zones are the same");
         exitCode = 0;
      }
      else
      {
         char zoneID[2][256];
         int levelA = dggrs.getZoneLevel(a), levelB = dggrs.getZoneLevel(b);
         double areaA = dggrs.getZoneArea(a), areaB = dggrs.getZoneArea(b);
         bool neighbors = dggrs.areZonesNeighbors(a, b);
         bool siblings = dggrs.areZonesSiblings(a, b);
         bool aChildOfB = dggrs.isZoneImmediateChildOf(a, b);
         bool aParentOfB = dggrs.isZoneImmediateParentOf(a, b);
         bool aAncestorOfB = dggrs.isZoneAncestorOf(a, b, 0);
         bool aDescendantOfB = dggrs.isZoneDescendantOf(a, b, 0);
         bool aContainedInB = dggrs.isZoneContainedIn(a, b);
         bool aContainsB = dggrs.doesZoneContain(a, b);
         int aIndexInB = dggrs.getSubZoneIndex(b, a);
         int bIndexInA = dggrs.getSubZoneIndex(a, b);
         bool overlap = dggrs.doZonesOverlap(a, b);
         int maxDepth = dggrs.getMaxDepth();

         dggrs.getZoneTextID(a, zoneID[0]);
         dggrs.getZoneTextID(b, zoneID[1]);
         PrintLn($"Relationships between zones ", zoneID[0], " (A) and ", zoneID[1], " (B):\n");

         if(levelA == levelB)
            PrintLn($"These zones are at the same refinement level (", levelA, ")");
         else if(levelA < levelB)
            PrintLn($"Zone A is coarser than zone B by ", levelB - levelA, $" refinement level", levelB - levelA > 1 ? $"s" : "");
         else
            PrintLn($"Zone A is finer than zone B by ", levelA - levelB, $" refinement level", levelA - levelB > 1 ? $"s" : "");

         if(areaA == areaB)
            PrintLn($"The areas of these zones are exactly the same");
         else if(areaA < areaB)
            PrintLn($"The area of zone A is smaller than the area of zone B (area of A is ", areaA * 100 / areaB, " % of zone B)");
         else
            PrintLn($"The area of zone A is greater than the area of zone B (area of B is ", areaB * 100 / areaA, " % of zone A)");

         PrintLn($"Zone A is ", aChildOfB ? "" : $"NOT ", $"an immediate child of zone B");
         PrintLn($"Zone A is ", aParentOfB ? "" : $"NOT ", $"an immediate parent of zone B");
         PrintLn($"Zone A is ", aDescendantOfB ? "" : $"NOT ", $"a descendant of zone B");
         PrintLn($"Zone A is ", aAncestorOfB ? "" : $"NOT ", $"an ancestor of zone B");

         if((aIndexInB != -1 || bIndexInA != -1) || Abs(levelA - levelB) <= maxDepth)
         {
            Print($"Zone A is ", aIndexInB != -1 ? "" : $"NOT ", $"a sub-zone of zone B");
            if(aIndexInB != -1)
               Print($" (at depth ", levelA - levelB, ", index ", aIndexInB, ")");
            PrintLn("");
            Print($"Zone A ", bIndexInA != -1 ? "has" : $"does NOT have", $" B as a sub-zone");
            if(bIndexInA != -1)
               Print(" (at depth ", levelB - levelA, ", index ", bIndexInA, ")");
            PrintLn("");
            PrintLn($"These zones are ", neighbors ? "" : $"NOT ", $"neighbors");
            PrintLn($"These zones are ", siblings ? "" : $"NOT ", $"siblings");
            PrintLn($"Zone A is ", aContainedInB ? "" : $"NOT ", $"contained in zone B");
            PrintLn($"Zone A ", aContainsB ? $"contains" : $"does not contain", $" zone B");
            PrintLn($"Zone A and B ", !overlap ? $"do NOT " : "", $"overlap");
         }
         else
            PrintLn($"WARNING: Currently unable to check containment/overlap for these zones since they are too many (",
               Abs(levelA - levelB), $") refinement levels apart");

         exitCode = 0;
      }
   }
   else
      PrintLn($"rel command requires two zones");
   return exitCode;
}
