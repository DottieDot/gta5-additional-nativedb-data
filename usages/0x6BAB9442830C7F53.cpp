// agency_heist1.ysc @ L108906
void func_557(bool bParam0)
{
  if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(-252283844))
  {
    OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(-252283844, 0f, 0, 0);
    if (bParam0)
    {
      OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(-252283844, 4, 0, 0);
      OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(-252283844, 1, 0, 0);
    }
    else
    {
      OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(-252283844, 3, 0, 0);
      OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(-252283844, 0, 0, 0);
    }
  }
}