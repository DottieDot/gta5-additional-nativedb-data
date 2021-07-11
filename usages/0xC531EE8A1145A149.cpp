// am_mp_garage_control.ysc @ L407
int func_8(var uParam0, struct<8> Param1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27)
{
  int iVar0;
  
  iVar0 = 10000;
  if (!func_12(Param1.f_2))
  {
    if (!func_11(uParam0))
    {
      func_10(uParam0, 0, 0);
    }
    if ((OBJECT::IS_DOOR_CLOSED(Param1.f_6) && (Param1.f_7 != 0 && OBJECT::IS_DOOR_CLOSED(Param1.f_7))) || (func_11(uParam0) && func_9(uParam0, iVar0, 0)))
    {
      return 1;
    }
  }
  return 0;
}