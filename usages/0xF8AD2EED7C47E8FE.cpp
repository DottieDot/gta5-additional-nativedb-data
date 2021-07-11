// am_mp_casino.ysc @ L328341
void func_5047(var uParam0, bool bParam1)
{
  if (PED::IS_PED_INJURED(uParam0->f_276))
  {
    return;
  }
  if (bParam1)
  {
    if (!func_4964(uParam0, 65))
    {
      func_4961(uParam0, 65);
      AUDIO::_0xF8AD2EED7C47E8FE(uParam0->f_276, bParam1, 1);
    }
  }
  else if (func_4964(uParam0, 65))
  {
    func_4998(uParam0, 65);
    AUDIO::_0xF8AD2EED7C47E8FE(uParam0->f_276, bParam1, 1);
  }
}