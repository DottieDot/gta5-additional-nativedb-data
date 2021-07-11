// fm_bj_race_controler.c @ L76258
void func_597()
{
  int iVar0;
  
  if (!CAM::IS_SCREEN_FADED_OUT())
  {
    if (func_8026(PLAYER::PLAYER_ID(), 1, 1))
    {
      if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
      {
        iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
        NETWORK::SET_ENTITY_LOCALLY_VISIBLE(iVar0);
      }
    }
    if (!func_598())
    {
      NETWORK::SET_LOCAL_PLAYER_VISIBLE_LOCALLY(0);
    }
  }
}