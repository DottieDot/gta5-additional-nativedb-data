// am_mp_arcade_claw_crane.c @ L84996
int func_519(int iParam0, int iParam1)
{
  struct<21> Var0;
  char* sVar1;
  int iVar2;
  
  Var0.f_1 = -1;
  Var0.f_2 = -1;
  Var0.f_9 = -1;
  Var0.f_16 = -1;
  Var0.f_19 = -1;
  Var0.f_20 = -1;
  Var0.f_17 = iParam0;
  Var0.f_16 = ((NETWORK::_0x638A3A81733086DB() * func_520(5)) + iParam1);
  sVar1 = "road_arcade";
  if (SCRIPT::DOES_SCRIPT_EXIST(sVar1))
  {
    SCRIPT::REQUEST_SCRIPT(sVar1);
    if (SCRIPT::HAS_SCRIPT_LOADED(sVar1))
    {
      if (!NETWORK::NETWORK_IS_SCRIPT_ACTIVE(sVar1, -1, 1, 0))
      {
        iVar2 = SYSTEM::START_NEW_SCRIPT_WITH_ARGS(sVar1, &Var0, 21, 4500);
        SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED(sVar1);
        if (iVar2 > 0)
        {
          return 1;
        }
      }
    }
  }
  return 0;
}