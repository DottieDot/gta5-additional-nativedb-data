// fmmc_launcher.ysc @ L577099
int func_9384()
{
  if (PAD::_IS_INPUT_DISABLED(2))
  {
    if (!HUD::IS_WARNING_MESSAGE_ACTIVE())
    {
      if (PAD::IS_CONTROL_JUST_PRESSED(2, 237))
      {
        if (HUD::_0x13C4B962653A5280() == 99 || HUD::_0x13C4B962653A5280() == 13)
        {
          return 1;
        }
      }
    }
  }
  return 0;
}