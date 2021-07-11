// net_apartment_activity.c @ L71865
void func_246(var uParam0, int iParam1)
{
  if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_10) && ENTITY::DOES_ENTITY_EXIST(iParam1))
  {
    if (uParam0->f_12 == 0)
    {
      if (ENTITY::HAS_ANIM_EVENT_FIRED(iParam1, MISC::GET_HASH_KEY(uParam0->f_10)))
      {
        GRAPHICS::USE_PARTICLE_FX_ASSET(uParam0->f_8);
        GRAPHICS::START_PARTICLE_FX_NON_LOOPED_ON_PED_BONE(uParam0->f_7, iParam1, uParam0->f_1, uParam0->f_4, uParam0->f_11, 1065353216, 0, 0, 0);
        uParam0->f_12 = 1;
      }
    }
  }
}