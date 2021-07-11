// taxiservice.ysc @ L9887
int func_176()
{
  if (ENTITY::DOES_ENTITY_EXIST(iLocal_109))
  {
    return 1;
  }
  if (ENTITY::DOES_ENTITY_EXIST(Global_110591))
  {
    if (VEHICLE::IS_VEHICLE_DRIVEABLE(Global_110591, 0))
    {
      iLocal_109 = OBJECT::CREATE_OBJECT(iLocal_108, ENTITY::GET_ENTITY_COORDS(Global_110591, true), true, true, false);
      ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_109, Global_110591, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(Global_110591, "Chassis"), vLocal_824, vLocal_825, 0, 0, 0, 0, 2, 1);
      VEHICLE::SET_TAXI_LIGHTS(Global_110591, 0);
      if (!HUD::IS_NAMED_RENDERTARGET_REGISTERED("taxi"))
      {
        HUD::REGISTER_NAMED_RENDERTARGET("taxi", 0);
        HUD::LINK_NAMED_RENDERTARGET(ENTITY::GET_ENTITY_MODEL(iLocal_109));
      }
      iLocal_93 = HUD::GET_NAMED_RENDERTARGET_RENDER_ID("taxi");
    }
  }
  return 0;
}