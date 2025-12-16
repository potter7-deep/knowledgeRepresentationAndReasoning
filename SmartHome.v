(* Smart Home Control System - Rule-Based Model in Coq *)

From Stdlib Require Import Strings.String Lists.List.
Open Scope list_scope.

Inductive TimeOfDay : Type :=
  | Morning
  | Afternoon
  | Evening.

Inductive Occupancy : Type :=
  | Away
  | Home
  | Sleeping.

Inductive Temperature : Type :=
  | Cold
  | Comfortable
  | Hot.

Inductive HeatLevel : Type :=
  | HeatOff
  | HeatLow
  | HeatMedium
  | HeatHigh
  | HeatMinimal.

Inductive LightLevel : Type :=
  | LightOff
  | LightDim
  | LightBright
  | LightWarm
  | LightSecurityMode
  | LightNightMode.

Inductive DoorState : Type :=
  | DoorLocked
  | DoorDoubleLocked
  | DoorUnlocked.

Inductive ACState : Type :=
  | ACOff
  | ACLow
  | ACMedium
  | ACHigh
  | ACStandby.

Record HomeState : Type := {
  heat : HeatLevel;
  lights : LightLevel;
  doors : DoorState;
  ac : ACState;
}.

Definition rule_1 (t : TimeOfDay) (o : Occupancy) (temp : Temperature) : option HomeState :=
  match (t, o, temp) with
  | (Morning, Away, Cold) =>
      Some {| heat := HeatOff; lights := LightOff; doors := DoorLocked; ac := ACStandby |}
  | _ => None
  end.

Definition rule_2 (t : TimeOfDay) (o : Occupancy) (temp : Temperature) : option HomeState :=
  match (t, o, temp) with
  | (Morning, Away, Comfortable) =>
      Some {| heat := HeatLow; lights := LightOff; doors := DoorLocked; ac := ACStandby |}
  | _ => None
  end.

Definition rule_3 (t : TimeOfDay) (o : Occupancy) (temp : Temperature) : option HomeState :=
  match (t, o, temp) with
  | (Morning, Away, Hot) =>
      Some {| heat := HeatOff; lights := LightOff; doors := DoorLocked; ac := ACHigh |}
  | _ => None
  end.

Definition rule_4 (t : TimeOfDay) (o : Occupancy) (temp : Temperature) : option HomeState :=
  match (t, o, temp) with
  | (Morning, Home, Cold) =>
      Some {| heat := HeatHigh; lights := LightBright; doors := DoorUnlocked; ac := ACOff |}
  | _ => None
  end.

Definition rule_5 (t : TimeOfDay) (o : Occupancy) (temp : Temperature) : option HomeState :=
  match (t, o, temp) with
  | (Morning, Home, Comfortable) =>
      Some {| heat := HeatMedium; lights := LightBright; doors := DoorUnlocked; ac := ACOff |}
  | _ => None
  end.

Definition rule_6 (t : TimeOfDay) (o : Occupancy) (temp : Temperature) : option HomeState :=
  match (t, o, temp) with
  | (Morning, Home, Hot) =>
      Some {| heat := HeatOff; lights := LightBright; doors := DoorUnlocked; ac := ACMedium |}
  | _ => None
  end.

Definition rule_7 (t : TimeOfDay) (o : Occupancy) (temp : Temperature) : option HomeState :=
  match (t, o, temp) with
  | (Morning, Sleeping, Cold) =>
      Some {| heat := HeatMedium; lights := LightOff; doors := DoorLocked; ac := ACOff |}
  | _ => None
  end.

Definition rule_8 (t : TimeOfDay) (o : Occupancy) (temp : Temperature) : option HomeState :=
  match (t, o, temp) with
  | (Morning, Sleeping, Comfortable) =>
      Some {| heat := HeatLow; lights := LightOff; doors := DoorLocked; ac := ACOff |}
  | _ => None
  end.

Definition rule_9 (t : TimeOfDay) (o : Occupancy) (temp : Temperature) : option HomeState :=
  match (t, o, temp) with
  | (Morning, Sleeping, Hot) =>
      Some {| heat := HeatOff; lights := LightOff; doors := DoorLocked; ac := ACLow |}
  | _ => None
  end.

Definition rule_10 (t : TimeOfDay) (o : Occupancy) (temp : Temperature) : option HomeState :=
  match (t, o, temp) with
  | (Afternoon, Away, Cold) =>
      Some {| heat := HeatMinimal; lights := LightOff; doors := DoorLocked; ac := ACOff |}
  | _ => None
  end.

Definition rule_11 (t : TimeOfDay) (o : Occupancy) (temp : Temperature) : option HomeState :=
  match (t, o, temp) with
  | (Afternoon, Away, Comfortable) =>
      Some {| heat := HeatOff; lights := LightOff; doors := DoorLocked; ac := ACStandby |}
  | _ => None
  end.

Definition rule_12 (t : TimeOfDay) (o : Occupancy) (temp : Temperature) : option HomeState :=
  match (t, o, temp) with
  | (Afternoon, Away, Hot) =>
      Some {| heat := HeatOff; lights := LightOff; doors := DoorLocked; ac := ACMedium |}
  | _ => None
  end.

Definition rule_13 (t : TimeOfDay) (o : Occupancy) (temp : Temperature) : option HomeState :=
  match (t, o, temp) with
  | (Afternoon, Home, Cold) =>
      Some {| heat := HeatMedium; lights := LightBright; doors := DoorUnlocked; ac := ACOff |}
  | _ => None
  end.

Definition rule_14 (t : TimeOfDay) (o : Occupancy) (temp : Temperature) : option HomeState :=
  match (t, o, temp) with
  | (Afternoon, Home, Comfortable) =>
      Some {| heat := HeatLow; lights := LightBright; doors := DoorUnlocked; ac := ACOff |}
  | _ => None
  end.

Definition rule_15 (t : TimeOfDay) (o : Occupancy) (temp : Temperature) : option HomeState :=
  match (t, o, temp) with
  | (Afternoon, Home, Hot) =>
      Some {| heat := HeatOff; lights := LightDim; doors := DoorUnlocked; ac := ACHigh |}
  | _ => None
  end.

Definition rule_16 (t : TimeOfDay) (o : Occupancy) (temp : Temperature) : option HomeState :=
  match (t, o, temp) with
  | (Afternoon, Sleeping, Cold) =>
      Some {| heat := HeatMedium; lights := LightOff; doors := DoorLocked; ac := ACOff |}
  | _ => None
  end.

Definition rule_17 (t : TimeOfDay) (o : Occupancy) (temp : Temperature) : option HomeState :=
  match (t, o, temp) with
  | (Afternoon, Sleeping, Comfortable) =>
      Some {| heat := HeatLow; lights := LightOff; doors := DoorLocked; ac := ACOff |}
  | _ => None
  end.

Definition rule_18 (t : TimeOfDay) (o : Occupancy) (temp : Temperature) : option HomeState :=
  match (t, o, temp) with
  | (Afternoon, Sleeping, Hot) =>
      Some {| heat := HeatOff; lights := LightOff; doors := DoorLocked; ac := ACMedium |}
  | _ => None
  end.

Definition rule_19 (t : TimeOfDay) (o : Occupancy) (temp : Temperature) : option HomeState :=
  match (t, o, temp) with
  | (Evening, Away, Cold) =>
      Some {| heat := HeatOff; lights := LightSecurityMode; doors := DoorDoubleLocked; ac := ACOff |}
  | _ => None
  end.

Definition rule_20 (t : TimeOfDay) (o : Occupancy) (temp : Temperature) : option HomeState :=
  match (t, o, temp) with
  | (Evening, Away, Comfortable) =>
      Some {| heat := HeatLow; lights := LightSecurityMode; doors := DoorLocked; ac := ACStandby |}
  | _ => None
  end.

Definition rule_21 (t : TimeOfDay) (o : Occupancy) (temp : Temperature) : option HomeState :=
  match (t, o, temp) with
  | (Evening, Away, Hot) =>
      Some {| heat := HeatOff; lights := LightSecurityMode; doors := DoorLocked; ac := ACLow |}
  | _ => None
  end.

Definition rule_22 (t : TimeOfDay) (o : Occupancy) (temp : Temperature) : option HomeState :=
  match (t, o, temp) with
  | (Evening, Home, Cold) =>
      Some {| heat := HeatHigh; lights := LightWarm; doors := DoorLocked; ac := ACOff |}
  | _ => None
  end.

Definition rule_23 (t : TimeOfDay) (o : Occupancy) (temp : Temperature) : option HomeState :=
  match (t, o, temp) with
  | (Evening, Home, Comfortable) =>
      Some {| heat := HeatMedium; lights := LightWarm; doors := DoorLocked; ac := ACOff |}
  | _ => None
  end.

Definition rule_24 (t : TimeOfDay) (o : Occupancy) (temp : Temperature) : option HomeState :=
  match (t, o, temp) with
  | (Evening, Home, Hot) =>
      Some {| heat := HeatOff; lights := LightDim; doors := DoorLocked; ac := ACMedium |}
  | _ => None
  end.

Definition rule_25 (t : TimeOfDay) (o : Occupancy) (temp : Temperature) : option HomeState :=
  match (t, o, temp) with
  | (Evening, Sleeping, Cold) =>
      Some {| heat := HeatMedium; lights := LightNightMode; doors := DoorLocked; ac := ACOff |}
  | _ => None
  end.

Definition rule_26 (t : TimeOfDay) (o : Occupancy) (temp : Temperature) : option HomeState :=
  match (t, o, temp) with
  | (Evening, Sleeping, Comfortable) =>
      Some {| heat := HeatLow; lights := LightOff; doors := DoorLocked; ac := ACOff |}
  | _ => None
  end.

Definition rule_27 (t : TimeOfDay) (o : Occupancy) (temp : Temperature) : option HomeState :=
  match (t, o, temp) with
  | (Evening, Sleeping, Hot) =>
      Some {| heat := HeatOff; lights := LightOff; doors := DoorLocked; ac := ACLow |}
  | _ => None
  end.

Definition apply_rules (t : TimeOfDay) (o : Occupancy) (temp : Temperature) : option HomeState :=
  match rule_1 t o temp with
  | Some state => Some state
  | None =>
      match rule_2 t o temp with
      | Some state => Some state
      | None =>
          match rule_3 t o temp with
          | Some state => Some state
          | None =>
              match rule_4 t o temp with
              | Some state => Some state
              | None =>
                  match rule_5 t o temp with
                  | Some state => Some state
                  | None =>
                      match rule_6 t o temp with
                      | Some state => Some state
                      | None =>
                          match rule_7 t o temp with
                          | Some state => Some state
                          | None =>
                              match rule_8 t o temp with
                              | Some state => Some state
                              | None =>
                                  match rule_9 t o temp with
                                  | Some state => Some state
                                  | None =>
                                      match rule_10 t o temp with
                                      | Some state => Some state
                                      | None =>
                                          match rule_11 t o temp with
                                          | Some state => Some state
                                          | None =>
                                              match rule_12 t o temp with
                                              | Some state => Some state
                                              | None =>
                                                  match rule_13 t o temp with
                                                  | Some state => Some state
                                                  | None =>
                                                      match rule_14 t o temp with
                                                      | Some state => Some state
                                                      | None =>
                                                          match rule_15 t o temp with
                                                          | Some state => Some state
                                                          | None =>
                                                              match rule_16 t o temp with
                                                              | Some state => Some state
                                                              | None =>
                                                                  match rule_17 t o temp with
                                                                  | Some state => Some state
                                                                  | None =>
                                                                      match rule_18 t o temp with
                                                                      | Some state => Some state
                                                                      | None =>
                                                                          match rule_19 t o temp with
                                                                          | Some state => Some state
                                                                          | None =>
                                                                              match rule_20 t o temp with
                                                                              | Some state => Some state
                                                                              | None =>
                                                                                  match rule_21 t o temp with
                                                                                  | Some state => Some state
                                                                                  | None =>
                                                                                      match rule_22 t o temp with
                                                                                      | Some state => Some state
                                                                                      | None =>
                                                                                          match rule_23 t o temp with
                                                                                          | Some state => Some state
                                                                                          | None =>
                                                                                              match rule_24 t o temp with
                                                                                              | Some state => Some state
                                                                                              | None =>
                                                                                                  match rule_25 t o temp with
                                                                                                  | Some state => Some state
                                                                                                  | None =>
                                                                                                      match rule_26 t o temp with
                                                                                                      | Some state => Some state
                                                                                                      | None =>
                                                                                                          rule_27 t o temp
                                                                                                      end
                                                                                                  end
                                                                                              end
                                                                                          end
                                                                                      end
                                                                                  end
                                                                              end
                                                                          end
                                                                      end
                                                                  end
                                                              end
                                                          end
                                                      end
                                                  end
                                              end
                                          end
                                      end
                                  end
                              end
                          end
                      end
                  end
              end
          end
      end
  end.

Example test1 : apply_rules Morning Away Cold = Some {|
  heat := HeatOff;
  lights := LightOff;
  doors := DoorLocked;
  ac := ACStandby
|} := eq_refl.

Example test2 : apply_rules Morning Home Cold = Some {|
  heat := HeatHigh;
  lights := LightBright;
  doors := DoorUnlocked;
  ac := ACOff
|} := eq_refl.

Example test3 : apply_rules Evening Away Hot = Some {|
  heat := HeatOff;
  lights := LightSecurityMode;
  doors := DoorLocked;
  ac := ACLow
|} := eq_refl.
