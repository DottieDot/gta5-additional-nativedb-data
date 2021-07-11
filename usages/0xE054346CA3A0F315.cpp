// family_scene_f0.ysc @ L114128
int func_598(int iParam0, int iParam1, int iParam2, vector3 vParam3, float fParam4)
{
  vector3 vVar0;
  var uVar1;
  
  if (func_14(iParam1, iParam2, &vVar0, &uVar1))
  {
    if (!TASK::GET_SCRIPT_TASK_STATUS(iParam0, 923520851) == 1)
    {
      TASK::TASK_WANDER_IN_AREA(iParam0, vParam3 + vVar0, 25f, 1077936128, 1086324736);
    }
    fParam4 = fParam4;
    return 1;
  }
  return 0;
}