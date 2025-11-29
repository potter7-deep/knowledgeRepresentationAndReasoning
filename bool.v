(* Inductive bool :=
    | true
    | false. *)

Inductive diseases :=
    | maize_stalk_virus
    | maize_lethal_necrosis_disease
    | gray_leaf_spot
    | northern_leaf_blight
    | gibberella_ear_rot
    | common_rust.

(* Definition all_diseases : list diseases :=
    [ mosaic_virus;
        maize_stalk_virus;
        maize_lethal_necrosis_disease;
        gray_leaf_spot;
        common_rust;
        northern_leaf_blight;
        gibberella_ear_rot;
        common_rust
    ]. *)

Inductive pest :=
    | fall_armyworm
    | stem_borers
    | corn_earworm
    | flea_beetles
    | spider_mites.

Inductive drugs :=
    | amistar
    | ortiva_top
    | mancozeb
    | carbendazim
    | tebuconazole
    | prothioconazole
    | triazoles
    | strobilurins
    | vector_control
    | resistant_seed.