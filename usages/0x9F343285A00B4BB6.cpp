// am_challenges.ysc @ L14031
void func_425()
{
  int iVar0;
  int iVar1;
  
  if (func_5(Local_171.f_3))
  {
    if (Local_171.f_3 == 1 || Local_171.f_3 == 6)
    {
      iVar0 = func_204(PLAYER::PLAYER_ID(), 1);
      iVar1 = func_200(iVar0, 1);
      if (iVar1 < 11)
      {
        if (PED::IS_PED_IN_FLYING_VEHICLE(PLAYER::PLAYER_PED_ID()))
        {
          WEAPON::GIVE_WEAPON_TO_PED(PLAYER::PLAYER_PED_ID(), joaat("GADGET_PARACHUTE"), 1, false, false);
          func_426(1);
        }
      }
      else
      {
        PLAYER::SET_AUTO_GIVE_PARACHUTE_WHEN_ENTER_PLANE(PLAYER::PLAYER_ID(), true);
      }
    }
  }
}