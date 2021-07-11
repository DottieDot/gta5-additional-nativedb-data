// fm_bj_race_controler.c @ L310506
void func_4231(var uParam0, var uParam1, var uParam2)
{
  int iVar0;
  int iVar1;
  
  if (!func_240(uParam0))
  {
    return;
  }
  iVar0 = PLAYER::PLAYER_ID();
  if (!MISC::IS_BIT_SET((uParam1[NETWORK::PARTICIPANT_ID_TO_INT() /*203*/])->f_7, 2))
  {
    if (!func_135(PLAYER::PLAYER_ID(), 0))
    {
      iVar1 = Global_1590446[iVar0 /*871*/].f_99.f_28;
      if (iVar1 != -1)
      {
        func_4233(iVar1);
        PED::SET_PED_CAN_BE_TARGETTED_BY_TEAM(PLAYER::PLAYER_PED_ID(), iVar1, 0);
        func_4232(iVar1);
        PED::SET_PED_RELATIONSHIP_GROUP_HASH(PLAYER::PLAYER_PED_ID(), uParam2->f_800[iVar1]);
        MISC::SET_BIT(&((uParam1[NETWORK::PARTICIPANT_ID_TO_INT() /*203*/])->f_7), 2);
      }
    }
  }
}