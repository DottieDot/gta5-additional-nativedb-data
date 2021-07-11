// am_mp_drone.ysc @ L4807
int func_187(int iParam0)
{
  if (ENTITY::DOES_ENTITY_EXIST(iParam0))
  {
    if (PED::GET_PED_RELATIONSHIP_GROUP_DEFAULT_HASH(iParam0) == -183807561)
    {
      return 1;
    }
  }
  return 0;
}