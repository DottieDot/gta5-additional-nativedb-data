// director_mode.ysc @ L131221
void func_839(bool bParam0, char* sParam1)
{
  sParam1 = sParam1;
  if (bParam0)
  {
    if (CAM::IS_SCREEN_FADED_OUT())
    {
      if (!HUD::BUSYSPINNER_IS_DISPLAYING() && !iLocal_606)
      {
        HUD::BEGIN_TEXT_COMMAND_BUSYSPINNER_ON("");
        HUD::END_TEXT_COMMAND_BUSYSPINNER_ON(2);
        iLocal_606 = 1;
      }
    }
  }
  else if (iLocal_606)
  {
    if (CAM::IS_SCREEN_FADED_IN() || CAM::IS_SCREEN_FADING_IN())
    {
      HUD::BUSYSPINNER_OFF();
      iLocal_606 = 0;
    }
  }
}