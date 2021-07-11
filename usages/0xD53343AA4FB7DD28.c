// act_cinema.c @ L76586
void func_382(int iParam0)
{
  vector3 vVar0;
  
  if (Global_262145.f_19672)
  {
    if (ENTITY::DOES_ENTITY_EXIST(iParam0))
    {
      if (NETWORK::NETWORK_GET_ENTITY_IS_NETWORKED(iParam0))
      {
        vVar0.x = ENTITY::GET_ENTITY_MODEL(iParam0);
        vVar0.y = MISC::GET_HASH_KEY(VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT(iParam0));
        if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("RandomID", 3))
        {
          if (!DECORATOR::DECOR_EXIST_ON(iParam0, "RandomID"))
          {
            vVar0.z = MISC::GET_RANDOM_INT_IN_RANGE(0, 65535);
            DECORATOR::DECOR_SET_INT(iParam0, "RandomID", vVar0.z);
          }
          else
          {
            vVar0.z = DECORATOR::DECOR_GET_INT(iParam0, "RandomID");
          }
        }
        func_383(vVar0);
      }
    }
  }
}