// agency_heist3a.ysc @ L111205
void func_544()
{
  if (bLocal_1944)
  {
    switch (iLocal_2105)
    {
      case 0:
        CLOCK::ADVANCE_CLOCK_TIME_TO(0, 0, 0);
        break;
      
      case 1:
        CLOCK::PAUSE_CLOCK(true);
        break;
    }
  }
  else
  {
    CLOCK::PAUSE_CLOCK(false);
  }
}