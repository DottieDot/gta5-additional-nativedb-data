// fm_mission_controller.ysc @ L704344
void func_11591(var uParam0, var uParam1, int iParam2)
{
  if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(*uParam0))
  {
    if (!MISC::IS_BIT_SET(iLocal_7401, *iParam2))
    {
      ENTITY::SET_ENTITY_HEALTH(*uParam0, 1, 0);
      FIRE::ADD_OWNED_EXPLOSION(iLocal_1073, *uParam1, 58, 8f, 1, 0, 1065353216);
      ENTITY::SET_ENTITY_VISIBLE(*uParam0, false, 0);
      MISC::SET_BIT(&iLocal_7401, *iParam2);
    }
  }
  else
  {
    NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(*uParam0);
  }
}