// fm_bj_race_controler.c @ L307489
void func_4139(var uParam0, int iParam1, var uParam2)
{
  if ((!func_3999(uParam0->f_571) || func_364(uParam0)) || func_363(uParam0))
  {
    return;
  }
  if (iParam1 == 1)
  {
    if (ENTITY::DOES_ENTITY_EXIST(uParam2->f_5244))
    {
      if (!ENTITY::IS_ENTITY_DEAD(uParam2->f_5244, 0))
      {
        PLAYER::SET_PLAYER_MAY_ONLY_ENTER_THIS_VEHICLE(PLAYER::PLAYER_ID(), uParam2->f_5244);
      }
    }
  }
  else
  {
    PLAYER::SET_PLAYER_MAY_ONLY_ENTER_THIS_VEHICLE(PLAYER::PLAYER_ID(), 0);
  }
}