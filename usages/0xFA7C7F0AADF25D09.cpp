// am_heli_taxi.ysc @ L10256
void func_260()
{
  float fVar0;
  
  if (HUD::IS_WAYPOINT_ACTIVE())
  {
    Local_214.f_10 = { HUD::GET_BLIP_INFO_ID_COORD(HUD::GET_FIRST_BLIP_INFO_ID(HUD::_GET_WAYPOINT_BLIP_SPRITE())) };
    Local_214.f_10.f_2 = PATHFIND::_GET_HEIGHTMAP_TOP_Z_FOR_AREA((Local_214.f_10 - 25f), (Local_214.f_10.f_1 - 25f), (Local_214.f_10 + 25f), (Local_214.f_10.f_1 + 25f));
    fVar0 = PATHFIND::_GET_HEIGHTMAP_BOTTOM_Z_FOR_AREA((Local_214.f_10 - 25f), (Local_214.f_10.f_1 - 25f), (Local_214.f_10 + 25f), (Local_214.f_10.f_1 + 25f));
    if ((Local_214.f_10.f_2 - fVar0) < 20f)
    {
      Local_214.f_10.f_2 = (Local_214.f_10.f_2 + 10f);
    }
    else if ((Local_214.f_10.f_2 - fVar0) > 30f && (Local_214.f_10.f_2 - fVar0) < 70f)
    {
      Local_214.f_10.f_2 = (Local_214.f_10.f_2 + 40f);
    }
    func_261(0);
    func_170(Local_214.f_10);
  }
}