Inductive Disease :=
| M.L.N.D
| StreakVirus
| LeafBlight
| GrayLeafSpot
| EarRot
| CommonRust.

Inductive Pest :=
| FallArmyworm
| StemBorer
| CornEarworm
| FleaBeetle
| SpiderMite.

Inductive Treatment :=
| ResistantVariety
| Fungicide (name : string)
| Insecticide (name : string)
| BiologicalControl
| VectorControl
| CropRotation
| SeedTreatment
| NoChemical.