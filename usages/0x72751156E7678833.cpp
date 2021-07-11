// business_battles_sell.ysc @ L336453
void func_5157(int iParam0)
{
  if (func_5159() && iParam0 == iLocal_517)
  {
    if (!HUD::DOES_BLIP_HAVE_GPS_ROUTE(iLocal_538[iParam0]))
    {
      if (func_5158())
      {
        PATHFIND::SET_IGNORE_NO_GPS_FLAG(1);
      }
      else
      {
        PATHFIND::SET_IGNORE_NO_GPS_FLAG(0);
      }
      HUD::SET_BLIP_ROUTE(iLocal_538[iParam0], true);
    }
  }
  else if (HUD::DOES_BLIP_HAVE_GPS_ROUTE(iLocal_538[iParam0]))
  {
    PATHFIND::SET_IGNORE_NO_GPS_FLAG(0);
    HUD::SET_BLIP_ROUTE(iLocal_538[iParam0], false);
  }
}