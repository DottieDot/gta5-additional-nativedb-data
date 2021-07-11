// fm_mission_controller.c @ L357502
void func_5071(int iParam0, int iParam1, int iParam2)
{
  var uVar0;
  
  if (func_197(iParam2, 1, 1))
  {
    if (MISC::IS_PC_VERSION())
    {
      func_5020(iParam0, iParam1, PLAYER::GET_PLAYER_NAME(iParam2));
    }
    else
    {
      func_5020(iParam0, iParam1, NETWORK::NETWORK_PLAYER_GET_USERID(iParam2, &uVar0));
    }
  }
}