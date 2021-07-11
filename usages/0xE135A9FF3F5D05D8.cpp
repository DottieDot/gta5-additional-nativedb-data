// am_mp_arcade_claw_crane.ysc @ L88429
void func_580()
{
  if (func_577(PLAYER::PLAYER_ID()) || func_114(13))
  {
    if (func_549(PLAYER::PLAYER_ID()) == 12)
    {
      if (CAM::DOES_CAM_EXIST(Local_206.f_40) || func_582())
      {
        if (func_581(PLAYER::PLAYER_PED_ID()))
        {
          NETWORK::SET_ENTITY_LOCALLY_INVISIBLE(PLAYER::PLAYER_PED_ID());
        }
      }
    }
  }
}