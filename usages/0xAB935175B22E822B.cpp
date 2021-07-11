// act_cinema.ysc @ L3991
int func_97(int iParam0, var uParam1)
{
  if (ENTITY::DOES_ENTITY_EXIST(iParam0))
  {
    if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iParam0))
    {
      if (NETWORK::NETWORK_GET_ENTITY_IS_LOCAL(iParam0))
      {
        if (!VEHICLE::IS_THIS_MODEL_A_TRAIN(ENTITY::GET_ENTITY_MODEL(iParam0)))
        {
          ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iParam0, false, 1);
          *uParam1 = 1;
        }
      }
    }
    if (ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iParam0, 0))
    {
      if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iParam0))
      {
        return 1;
      }
    }
  }
  return 0;
}