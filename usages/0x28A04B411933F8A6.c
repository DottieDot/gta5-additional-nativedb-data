// tennis.c @ L19005
void func_437(int iParam0, int iParam1)
{
  int iVar0;
  int iVar1;
  int iVar2;
  
  if (ENTITY::DOES_ENTITY_EXIST(iParam0) && !PED::IS_PED_INJURED(iParam0))
  {
    iVar0 = func_926(iParam0);
    if (iVar0 == 145)
    {
      iVar0 = func_438(iParam0);
    }
    iVar2 = PLAYER::PLAYER_PED_ID();
    if (((iVar0 == 0 || iVar0 == 1) || iVar0 == 2) || iParam0 == iVar2)
    {
      iVar1 = 0;
    }
    else if (PED::IS_PED_MALE(iParam0) && iVar0 != 14)
    {
      iVar1 = 0;
    }
    else
    {
      iVar1 = 1;
    }
    MISC::ENABLE_TENNIS_MODE(iParam0, iParam1, iVar1);
  }
}