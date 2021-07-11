// am_mp_hangar.ysc @ L341853
int func_5264(int iParam0, var uParam1, int iParam2)
{
  if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), func_5267(uParam1, iParam2, iParam0), func_5266(uParam1, iParam2, iParam0), func_5265(iParam0, uParam1, iParam2), 0, true, 0))
  {
    if (TASK::DOES_SCENARIO_EXIST_IN_AREA(func_5268(uParam1, iParam2, iParam0), 1f, 1))
    {
      if ((iParam0->f_15 == -1 || iParam0->f_15 == iParam0->f_14) || SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), func_5268(uParam1, iParam2, iParam0)) < SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), func_5268(uParam1, iParam0->f_15, iParam0)))
      {
        return 1;
      }
    }
  }
  return 0;
}