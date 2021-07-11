// am_gang_call.c @ L10089
void func_259()
{
  MISC::CLEAR_BIT(&(Global_1590446[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*871*/].f_143), iLocal_101);
  Global_1590446[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*871*/].f_144 = -1;
  if (iLocal_101 == 1)
  {
    if (MISC::IS_INCIDENT_VALID(uLocal_283))
    {
      MISC::DELETE_INCIDENT(uLocal_283);
    }
  }
  func_507();
  func_539();
}