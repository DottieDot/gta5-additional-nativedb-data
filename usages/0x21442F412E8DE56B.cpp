// exile1.ysc @ L127400
void func_857(bool bParam0, bool bParam1)
{
  if (!bLocal_329)
  {
    bLocal_329 = AUDIO::LOAD_STREAM("Plane_Wind_Pt1", "EXILE_1");
  }
  else if (bParam0)
  {
    if (!iLocal_330)
    {
      if (bParam1)
      {
        AUDIO::PLAY_STREAM_FROM_POSITION(2930f, 849.7f, 454.5f);
      }
      else
      {
        AUDIO::PLAY_STREAM_FROM_POSITION(2929.93f, 815.88f, 449.35f);
      }
      iLocal_330 = 1;
    }
    else if (bParam1)
    {
      AUDIO::SET_VARIABLE_ON_STREAM("INOUT", 0f);
    }
    else
    {
      AUDIO::SET_VARIABLE_ON_STREAM("INOUT", ((fLocal_430 - 1f) * -1f));
    }
  }
}