// business_battles.c @ L106932
int func_660()
{
  vector3 vVar0;
  
  if (!func_71(33))
  {
    vVar0 = { func_664() };
    if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(uLocal_809.f_1142))
    {
      STREAMING::REQUEST_MODEL(func_663());
      if (STREAMING::HAS_MODEL_LOADED(func_663()))
      {
        if (NETWORK::_CAN_REGISTER_MISSION_PICKUPS(1))
        {
          uLocal_809.f_1142 = NETWORK::OBJ_TO_NET(OBJECT::CREATE_PORTABLE_PICKUP(func_662(), vVar0, false, func_663()));
          NETWORK::SET_NETWORK_ID_EXISTS_ON_ALL_MACHINES(uLocal_809.f_1142, 1);
          NETWORK::_NETWORK_SET_ENTITY_INVISIBLE_TO_NETWORK(NETWORK::NET_TO_ENT(uLocal_809.f_1142), 1);
          ENTITY::SET_ENTITY_INVINCIBLE(NETWORK::NET_TO_OBJ(uLocal_809.f_1142), true);
          if (!func_470(func_661()))
          {
            ENTITY::SET_ENTITY_ROTATION(NETWORK::NET_TO_OBJ(uLocal_809.f_1142), func_661(), 0, 1);
          }
        }
      }
    }
    if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(uLocal_809.f_1142))
    {
      func_76(33);
      return 1;
    }
  }
  return 0;
}