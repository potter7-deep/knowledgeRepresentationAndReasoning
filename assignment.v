(* Knowledge Base for Maize in Kenya using COQ *)

(* Define categories *)
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

(* COQ structure: Cause–Observation–Quick solution *)
Record COQFact := {
  cause : string;
  observation : string;
  quick_solution : Treatment
}.

(* Example facts *)

Definition MLND_fact : COQFact :=
    {| 
        cause := "Co-infection of Maize Chlorotic Mottle Virus + Sugarcane Mosaic Virus";
        observation := "Yellowing, stunted growth, premature plant death";
        quick_solution := ResistantVariety 
    |}.

Definition FallArmyworm_fact : COQFact :=
    {| 
        cause := "Caterpillar infestation (Spodoptera frugiperda)";
        observation := "Holes in leaves, tassel/cob damage";
        quick_solution := Insecticide "chlorantraniliprole" 
    |}.

Definition GrayLeafSpot_fact : COQFact :=
    {| 
        cause := "Fungus Cercospora zeae-maydis";
        observation := "Rectangular gray lesions on leaves";
        quick_solution := Fungicide "azoxystrobin" 
    |}.