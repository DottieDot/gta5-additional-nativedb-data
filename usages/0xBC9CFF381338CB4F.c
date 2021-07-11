// fm_bj_race_controler.c @ L76580
void func_614()
{
  int iVar0;
  
  if (Global_2405071.f_485.f_5)
  {
    if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
    {
      iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
      if (VEHICLE::_GET_VEHICLE_HAS_PARACHUTE(iVar0))
      {
        if (ENTITY::GET_ENTITY_MODEL(iVar0) == joaat("RUINER2"))
        {
          Global_2405071.f_2886 = 1;
        }
      }
      else if (ENTITY::GET_ENTITY_MODEL(iVar0) == joaat("OPPRESSOR"))
      {
        Global_2405071.f_2886 = 1;
      }
    }
  }
}