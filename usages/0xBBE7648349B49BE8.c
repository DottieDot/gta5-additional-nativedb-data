// exile3.c @ L134064
void func_898(bool bParam0)
{
  if (ENTITY::DOES_ENTITY_EXIST(iLocal_184[0]))
  {
    PED::DELETE_PED(&(iLocal_184[0]));
  }
  if (bParam0)
  {
    if (ENTITY::DOES_ENTITY_EXIST(iLocal_190))
    {
      VEHICLE::DELETE_MISSION_TRAIN(&iLocal_190);
    }
    if (ENTITY::DOES_ENTITY_EXIST(iLocal_191))
    {
      VEHICLE::DELETE_MISSION_TRAIN(&iLocal_191);
    }
  }
  else
  {
    if (ENTITY::DOES_ENTITY_EXIST(iLocal_190))
    {
      VEHICLE::SET_MISSION_TRAIN_AS_NO_LONGER_NEEDED(&iLocal_190, 0);
    }
    if (ENTITY::DOES_ENTITY_EXIST(iLocal_191))
    {
      VEHICLE::SET_MISSION_TRAIN_AS_NO_LONGER_NEEDED(&iLocal_191, 0);
    }
  }
}