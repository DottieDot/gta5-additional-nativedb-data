// fmmc_launcher.ysc @ L374942
void func_5724(int iParam0, int iParam1)
{
  if (func_5725())
  {
    return;
  }
  if (ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYER_PED(iParam0)) && ENTITY::DOES_ENTITY_EXIST(Global_2446261[iParam1 /*13*/]))
  {
    if (func_103(134))
    {
      PED::_CLONE_PED_TO_TARGET_EX(PLAYER::GET_PLAYER_PED(iParam0), Global_2446261[iParam1 /*13*/], 0);
      func_1524(Global_2446261[iParam1 /*13*/], &(Global_1625498[iParam1 /*47*/]), 0);
    }
    else
    {
      PED::CLONE_PED_TO_TARGET(PLAYER::GET_PLAYER_PED(iParam0), Global_2446261[iParam1 /*13*/]);
      func_5727(iParam1);
    }
  }
}