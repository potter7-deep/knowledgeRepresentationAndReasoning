Inductive symptom : Type :=
      | yellow_stripes
      | leaf_blight
      | stunted_growth
      | mold
      | wilting. 

Inductive disease : Type :=
      | maize_streak
      | northern_leaf_blight
      | fusarium_rot
      | drought_stress.

Inductive Treatment : Type :=
      | resistant_variety
      | fungicide
      | insecticide
      | biological_control
      | vector_control
      | crop_rotation
      | seed_treatment
      | no_chemical.

Inductive disease_has_symptom : disease -> symptom -> Prop :=
      | ds_maize_yellow :
            disease_has_symptom maize_streak yellow_stripes

      | ds_nlb_leaf :
            disease_has_symptom northern_leaf_blight leaf_blight

      | ds_fusarium_mold :
            disease_has_symptom fusarium_rot mold

      | ds_fusarium_stunt :
            disease_has_symptom fusarium_rot stunted_growth

      | ds_drought_wilt :
            disease_has_symptom drought_stress wilting.

      Check disease_has_symptom maize_streak yellow_stripes.
