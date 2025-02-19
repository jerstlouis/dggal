#!/usr/bin/env python3
# -*- coding: utf-8 -*-

from dggal import *

app = Application(appGlobals=globals())
pydggal_setup(app)

def zoneInfo(dggrs, zone):
   centroid = GeoPoint()
   dggrs.getZoneWGS84Centroid(zone, centroid)
   area = dggrs.getZoneArea(zone)
   level = dggrs.getZoneLevel(zone)
   zoneID = dggrs.getZoneTextID(zone)
   nEdges = dggrs.countZoneEdges(zone)
   depth = dggrs.get64KDepth()
   nSubZones = dggrs.countSubZones(zone, depth)
   printLn("Zone ID: ", zoneID)
   printLn("Level ", level)
   printLn("Edge/Vertex Count: ", nEdges)
   printLn("Sub-zones Count at depth ", depth, ": ", nSubZones)
   printLn("Centroid: ", centroid);
   printLn("Area: ", area, " m²")

def zoneGeometry(dggrs, zone):
   v = dggrs.getZoneRefinedWGS84Vertices(zone, 0)
   return v

dggrs = ISEA3H()

zoneID = "A4-0-A"
zone = dggrs.getZoneFromTextID(zoneID)

zoneInfo(dggrs, zone)

geom = zoneGeometry(dggrs, dggrs.getZoneFromTextID(zoneID))
printLn("Refined geometry vertices for ", zoneID, ":")
for v in geom:
   printLn("   [", v.y * 180 / Pi, ", ", v.x * 180 / Pi, "]")

subZones = dggrs.getSubZones(zone, 3)
print(subZones.getCount(), "sub-zones at depth 3:")

for z in subZones:
   printLn("   - ", dggrs.getZoneTextID(z))

depth = dggrs.get64KDepth()
index = 100
subZone = dggrs.getSubZoneAtIndex(zone, depth, index)
printLn("Sub-zone at depth ", depth, " index ", index, " is ", dggrs.getZoneTextID(subZone))
