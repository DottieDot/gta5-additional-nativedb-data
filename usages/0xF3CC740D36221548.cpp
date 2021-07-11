// fm_bj_race_controler.ysc @ L280602
void func_3810(var uParam0, var uParam1)
{
  var uVar0;
  int iVar1;
  
  iVar1 = uParam1->f_5244;
  if (!ENTITY::DOES_ENTITY_EXIST(iVar1) || (ENTITY::DOES_ENTITY_EXIST(iVar1) && ENTITY::IS_ENTITY_DEAD(iVar1, 0)))
  {
    if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
    {
      iVar1 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 1);
    }
  }
  if (ENTITY::DOES_ENTITY_EXIST(iVar1))
  {
    if (func_3811())
    {
      (uParam0[NETWORK::PARTICIPANT_ID_TO_INT() /*203*/])->f_131 = Global_1314030;
      (uParam0[NETWORK::PARTICIPANT_ID_TO_INT() /*203*/])->f_132 = Global_1314031;
      (uParam0[NETWORK::PARTICIPANT_ID_TO_INT() /*203*/])->f_133 = Global_1314032;
    }
    else
    {
      VEHICLE::GET_VEHICLE_COLOR(iVar1, &((uParam0[NETWORK::PARTICIPANT_ID_TO_INT() /*203*/])->f_131), &((uParam0[NETWORK::PARTICIPANT_ID_TO_INT() /*203*/])->f_132), &((uParam0[NETWORK::PARTICIPANT_ID_TO_INT() /*203*/])->f_133));
      if (((uParam0[NETWORK::PARTICIPANT_ID_TO_INT() /*203*/])->f_131 <= 8 && (uParam0[NETWORK::PARTICIPANT_ID_TO_INT() /*203*/])->f_132 <= 8) && (uParam0[NETWORK::PARTICIPANT_ID_TO_INT() /*203*/])->f_133 <= 8)
      {
        HUD::GET_HUD_COLOUR(5, &((uParam0[NETWORK::PARTICIPANT_ID_TO_INT() /*203*/])->f_131), &((uParam0[NETWORK::PARTICIPANT_ID_TO_INT() /*203*/])->f_132), &((uParam0[NETWORK::PARTICIPANT_ID_TO_INT() /*203*/])->f_133), &uVar0);
      }
    }
  }
}