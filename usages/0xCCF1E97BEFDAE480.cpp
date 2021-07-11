// business_battles.ysc @ L209882
void func_3103(int iParam0)
{
  if (uLocal_809.f_9 == 0)
  {
    if (func_3(iParam0, 39))
    {
      if (!func_3(iParam0, 4) && !func_3(iParam0, 3))
      {
        if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(uLocal_809[iParam0]))
        {
          if (func_1235(uLocal_809[iParam0]))
          {
            if (!ENTITY::GET_ENTITY_COLLISION_DISABLED(NETWORK::NET_TO_OBJ(uLocal_809[iParam0])))
            {
              ENTITY::SET_ENTITY_COMPLETELY_DISABLE_COLLISION(NETWORK::NET_TO_OBJ(uLocal_809[iParam0]), false, 0);
            }
            if (func_3104(iParam0))
            {
              func_1504(iParam0, 38);
            }
          }
        }
      }
    }
  }
}