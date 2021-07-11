// gb_amphibious_assault.ysc @ L39627
void func_982(int iParam0)
{
  int iVar0;
  
  if (!func_264())
  {
    if (!MISC::IS_BIT_SET(iLocal_320, iParam0))
    {
      if (func_53(0, iParam0))
      {
        iVar0 = func_70(0, iParam0);
        if (!PED::IS_PED_INJURED(iVar0))
        {
          PED::_0x0F62619393661D6E(iVar0, true, 1);
          MISC::SET_BIT(&iLocal_320, iParam0);
        }
      }
    }
  }
}