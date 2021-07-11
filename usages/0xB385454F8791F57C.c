// gb_gunrunning.c @ L7631
void func_227(int iParam0, int iParam1)
{
  int iVar0;
  
  iVar0 = func_228(func_229());
  if ((iVar0 > 19 || iVar0 < 7) || iParam1)
  {
    VEHICLE::SET_VEHICLE_LIGHTS(iParam0, 3);
    VEHICLE::SET_VEHICLE_LIGHT_MULTIPLIER(iParam0, 15f);
    VEHICLE::_SET_VEHICLE_USE_PLAYER_LIGHT_SETTINGS(iParam0, 1);
  }
}