// assassin_hooker.ysc @ L18441
void func_360(int iParam0, int iParam1, bool bParam2)
{
  if (bParam2)
  {
    if (HUD::DOES_BLIP_EXIST(iParam1->f_2))
    {
    }
    else
    {
      if (ENTITY::DOES_ENTITY_EXIST(iParam1->f_7))
      {
        iParam1->f_2 = HUD::ADD_BLIP_FOR_ENTITY(Local_978.f_7);
      }
      else
      {
        iParam1->f_2 = HUD::ADD_BLIP_FOR_COORD(iParam0->f_18);
      }
      HUD::SET_BLIP_ROUTE(iParam1->f_2, true);
      HUD::SET_BLIP_COLOUR(iParam1->f_2, 3);
      HUD::SET_BLIP_ROUTE_COLOUR(iParam1->f_2, 3);
    }
  }
}