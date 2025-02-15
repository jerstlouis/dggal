public import IMPORT_STATIC "ecere"
import IMPORT_STATIC "dggal"

int subZoneIndex(DGGRS dggrs, DGGRSZone parent, DGGRSZone subZone, Map<String, const String> options)
{
   int exitCode = 1;

   if(parent != nullZone && subZone != nullZone)
   {
      int levelParent = dggrs.getZoneLevel(parent), levelSub = dggrs.getZoneLevel(subZone);
      if(levelSub >= levelParent)
      {
         int twice64KDepth = 2*dggrs.get64KDepth();
         if(levelSub - levelParent < twice64KDepth)
         {
            char zoneID[256], subZoneID[256];
            int index = dggrs.getSubZoneIndex(parent, subZone);

            dggrs.getZoneTextID(parent, zoneID);
            dggrs.getZoneTextID(subZone, subZoneID);

            if(index != -1)
            {
               PrintLn(subZoneID, $" is at index ", index, $" of ", zoneID, $" at depth ", levelSub - levelParent);
               exitCode = 0;
            }
            else
               PrintLn($"sub-zone ", subZoneID, $" not found within parent ", zoneID);
         }
         else
            PrintLn($"sub-zone is too many refinement level apart from parent (", levelSub - levelParent, ")");
      }
      else
         PrintLn($"invalid sub-zone at a coarser refinement level than parent");
   }
   else
      PrintLn($"index command requires a parent and a sub-zone");
   return exitCode;
}
