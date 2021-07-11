// agency_heist3a.ysc @ L112363
void func_567(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4)
{
  *uParam0 = SYSTEM::FLOOR((PAD::GET_CONTROL_NORMAL(2, 218) * 127f));
  *uParam1 = SYSTEM::FLOOR((PAD::GET_CONTROL_NORMAL(2, 219) * 127f));
  *uParam2 = SYSTEM::FLOOR((PAD::GET_CONTROL_NORMAL(2, 220) * 127f));
  *uParam3 = SYSTEM::FLOOR((PAD::GET_CONTROL_NORMAL(2, 221) * 127f));
  if (bParam4)
  {
    if (IntToFloat(*uParam0) == 0f && IntToFloat(*uParam1) == 0f)
    {
      *uParam0 = SYSTEM::FLOOR((PAD::GET_DISABLED_CONTROL_NORMAL(2, 218) * 127f));
      *uParam1 = SYSTEM::FLOOR((PAD::GET_DISABLED_CONTROL_NORMAL(2, 219) * 127f));
    }
    if (IntToFloat(*uParam2) == 0f && IntToFloat(*uParam3) == 0f)
    {
      *uParam2 = SYSTEM::FLOOR((PAD::GET_DISABLED_CONTROL_NORMAL(2, 220) * 127f));
      *uParam3 = SYSTEM::FLOOR((PAD::GET_DISABLED_CONTROL_NORMAL(2, 221) * 127f));
    }
  }
}