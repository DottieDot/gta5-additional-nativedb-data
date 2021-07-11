// fm_bj_race_controler.ysc @ L76551
void func_613(bool bParam0)
{
  int iVar0;
  
  if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
  {
    iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
    if (VEHICLE::_GET_HAS_RETRACTABLE_WHEELS(iVar0))
    {
      if (ENTITY::GET_ENTITY_MODEL(iVar0) == joaat("BLAZER5"))
      {
        if (bParam0)
        {
          if (!VEHICLE::_GET_IS_WHEELS_LOWERED_STATE_ACTIVE(iVar0))
          {
            Global_2405071.f_2879 = 1;
            Global_2405071.f_2880 = 0;
          }
        }
        else
        {
          Global_2405071.f_2880 = 1;
          Global_2405071.f_2879 = 0;
        }
      }
    }
  }
}