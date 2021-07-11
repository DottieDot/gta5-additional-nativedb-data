// abigail2.c @ L36044
bool func_278(int iParam0, int iParam1, float fParam2, int iParam3, int iParam4, int iParam5)
{
  var uVar0;
  vector3 vVar1;
  int iVar2;
  
  iVar2 = func_286(iParam0, iParam1);
  if (!func_463(iParam0) || !func_463(iParam1))
  {
    if (iVar2 != -1)
    {
      func_285(&(Local_35[iVar2 /*4*/]));
    }
    return 0;
  }
  if (!func_282(iParam0, iParam1, fParam2, iParam3))
  {
    return 0;
  }
  if (iVar2 == -1)
  {
    iVar2 = func_281();
    if (iVar2 == -1)
    {
      return 0;
    }
    Local_35[iVar2 /*4*/].f_1 = iParam0;
    Local_35[iVar2 /*4*/].f_2 = iParam1;
  }
  vVar1 = { PED::GET_PED_BONE_COORDS(iParam0, 31086, 0f, 0f, 0f) };
  uVar0 = func_279(&(Local_35[iVar2 /*4*/]), vVar1, iParam1, &(Local_35[iVar2 /*4*/].f_3), iParam0, iParam5);
  return (uVar0 || (MISC::GET_GAME_TIMER() - Local_35[iVar2 /*4*/].f_3) < iParam4);
}