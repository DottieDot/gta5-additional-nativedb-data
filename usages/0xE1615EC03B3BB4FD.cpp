// golf.ysc @ L116944
void func_908(var uParam0, var uParam1, var uParam2, var uParam3)
{
  *uParam0 = SYSTEM::FLOOR((PAD::GET_CONTROL_NORMAL(2, 218) * 128f));
  *uParam1 = SYSTEM::FLOOR((PAD::GET_CONTROL_NORMAL(2, 219) * 128f));
  if (PAD::_IS_INPUT_DISABLED(2))
  {
    *uParam2 = SYSTEM::FLOOR((PAD::GET_CONTROL_UNBOUND_NORMAL(2, 220) * 400f));
    *uParam3 = SYSTEM::FLOOR((PAD::GET_CONTROL_UNBOUND_NORMAL(2, 221) * 400f));
    if (PAD::_0xE1615EC03B3BB4FD())
    {
      *uParam3 = (*uParam3 * -1);
    }
    if (PAD::IS_LOOK_INVERTED())
    {
      *uParam3 = (*uParam3 * -1);
    }
  }
  else
  {
    *uParam2 = SYSTEM::FLOOR((PAD::GET_CONTROL_NORMAL(2, 220) * 128f));
    *uParam3 = SYSTEM::FLOOR((PAD::GET_CONTROL_NORMAL(2, 221) * 128f));
  }
}