// fm_bj_race_controler.ysc @ L514742
void func_8475(var uParam0)
{
  if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_5244))
  {
    if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_5244, 0))
    {
      if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(uParam0->f_5244))
      {
        if (VEHICLE::GET_VEHICLE_HAS_KERS(uParam0->f_5244))
        {
          VEHICLE::SET_VEHICLE_KERS_ALLOWED(uParam0->f_5244, true);
        }
      }
    }
  }
  if (uParam0->f_8598)
  {
    PAD::ENABLE_CONTROL_ACTION(0, 351, 1);
    uParam0->f_8598 = 0;
  }
}