// am_mp_casino_apartment.ysc @ L377420
void func_5751(int iParam0, float fParam1)
{
  vector3 vVar0;
  int iVar1;
  
  if (func_5754(iParam0))
  {
    vVar0 = { func_5753(iParam0) };
    iVar1 = func_5752(iParam0);
    if (!OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(iParam0))
    {
      OBJECT::ADD_DOOR_TO_SYSTEM(iParam0, iVar1, vVar0, 0, 0, 0);
    }
    OBJECT::DOOR_SYSTEM_SET_AUTOMATIC_DISTANCE(iParam0, fParam1, 0, 1);
  }
}