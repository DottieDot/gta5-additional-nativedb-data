// business_battles_sell.ysc @ L298234
void func_4279(var uParam0, int iParam1)
{
  if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_1[0]) && !PED::IS_PED_IN_ANY_VEHICLE(uParam0->f_1[0], 0))
  {
    if ((ENTITY::DOES_ENTITY_EXIST(iParam1) && AUDIO::_0x0BE4BE946463F917(iParam1)) && NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iParam1))
    {
      if (func_77(iParam1))
      {
        AUDIO::SET_VEHICLE_RADIO_ENABLED(iParam1, false);
      }
      if (func_77(*uParam0))
      {
        AUDIO::SET_VEHICLE_RADIO_ENABLED(*uParam0, false);
      }
    }
  }
}