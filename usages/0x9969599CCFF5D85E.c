// fm_bj_race_controler.c @ L87899
void func_726(var uParam0)
{
  if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(uParam0->f_5244))
  {
    if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_5244, 0))
    {
      ENTITY::SET_ENTITY_HEALTH(uParam0->f_5244, 1000, 0);
      VEHICLE::SET_VEHICLE_ENGINE_HEALTH(uParam0->f_5244, 1000f);
      VEHICLE::SET_VEHICLE_PETROL_TANK_HEALTH(uParam0->f_5244, 1000f);
      VEHICLE::SET_VEHICLE_FIXED(uParam0->f_5244);
      HUD::SET_ABILITY_BAR_VALUE(100f, 100f);
    }
  }
}