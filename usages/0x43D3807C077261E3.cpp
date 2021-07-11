// armenian1.ysc @ L40444
void func_339(int iParam0, bool bParam1)
{
  if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
  {
    if (!ENTITY::IS_ENTITY_DEAD(*iParam0, 0))
    {
      ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(*iParam0, -8f, 1);
      if (ENTITY::IS_ENTITY_ATTACHED(*iParam0))
      {
        ENTITY::DETACH_ENTITY(*iParam0, 1, true);
      }
    }
    if (bParam1)
    {
      VEHICLE::DELETE_VEHICLE(iParam0);
    }
    else
    {
      ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(iParam0);
    }
  }
}