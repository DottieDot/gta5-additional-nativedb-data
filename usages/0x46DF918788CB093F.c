// celebrations.c @ L80567
void func_370()
{
  if (!Local_338.f_37.f_12)
  {
    if (ENTITY::DOES_ENTITY_EXIST(Local_338.f_37))
    {
      if (!ENTITY::IS_ENTITY_DEAD(Local_338.f_37, 0))
      {
        if (ENTITY::HAS_ANIM_EVENT_FIRED(Local_338.f_37, MISC::GET_HASH_KEY("forehead_blood")))
        {
          PED::APPLY_PED_DAMAGE_PACK(Local_338.f_37, "SCR_TrevorTreeBang", 1f, 1f);
          Local_338.f_37.f_12 = 1;
        }
      }
    }
  }
}