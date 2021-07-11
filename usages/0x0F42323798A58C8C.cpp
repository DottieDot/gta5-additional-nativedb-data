// fm_bj_race_controler.ysc @ L279351
void func_3763(var uParam0, var uParam1)
{
  float fVar0;
  
  fVar0 = 50f;
  if (func_4134(uParam0->f_570))
  {
    if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_5244) && !ENTITY::IS_ENTITY_DEAD(uParam1->f_5244, 0))
    {
      if (ENTITY::IS_ENTITY_TOUCHING_MODEL(uParam1->f_5244, joaat("prop_jetski_ramp_01")) || ENTITY::IS_ENTITY_TOUCHING_MODEL(uParam1->f_5244, -72574628))
      {
        ENTITY::APPLY_FORCE_TO_ENTITY(uParam1->f_5244, 0, 0f, fVar0, 0f, 0f, 0f, 0f, 0, 1, 1, 1, 0, 1);
      }
    }
  }
}