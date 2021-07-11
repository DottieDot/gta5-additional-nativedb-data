// act_cinema.c @ L81773
void func_424(int iParam0)
{
  VEHICLE::_0xE851E480B814D4BA(iParam0, 0);
  VEHICLE::SET_VEHICLE_CAN_BE_USED_BY_FLEEING_PEDS(iParam0, 0);
  VEHICLE::_0xAB04325045427AAE(iParam0, 0);
  VEHICLE::SET_VEHICLE_IS_STOLEN(iParam0, false);
  func_430(iParam0, 0);
  if (MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME()) == func_429())
  {
    if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(func_629(0)))
    {
      if (iParam0 == func_420())
      {
        NETWORK::SET_NETWORK_ID_VISIBLE_IN_CUTSCENE(func_629(0), 0, 1);
      }
    }
  }
  if (!func_426(ENTITY::GET_ENTITY_MODEL(iParam0), 0) && !func_425(ENTITY::GET_ENTITY_MODEL(iParam0)))
  {
    Global_2531497.f_903 = func_636();
  }
}