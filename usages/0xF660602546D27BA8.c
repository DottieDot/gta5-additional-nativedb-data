// fm_bj_race_controler.c @ L264884
void func_3467()
{
  int iVar0;
  
  if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
  {
    iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
    if (VEHICLE::_GET_HAS_RETRACTABLE_WHEELS(iVar0) && VEHICLE::_GET_IS_WHEELS_LOWERED_STATE_ACTIVE(iVar0))
    {
      VEHICLE::_RAISE_RETRACTABLE_WHEELS(iVar0);
    }
  }
}