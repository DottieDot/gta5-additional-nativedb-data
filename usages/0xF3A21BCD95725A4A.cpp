// agency_heist3a.ysc @ L145102
void func_1108(int iParam0)
{
  int iVar0;
  int iVar1;
  var uVar2;
  int iVar3;
  int iVar4;
  
  if (TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), iParam0) == 1)
  {
    iVar4 = 28;
    func_567(&iVar0, &iVar1, &uVar2, &iVar3, 0);
    if (!PAD::IS_LOOK_INVERTED())
    {
      iVar3 = (iVar3 * -1);
    }
    if (((((((iVar1 > iVar4 || iVar1 < (iVar4 * -1)) || iVar0 > iVar4) || iVar0 < (iVar4 * -1)) || PAD::IS_CONTROL_PRESSED(0, 21)) || PAD::IS_CONTROL_PRESSED(0, 22)) || PAD::IS_CONTROL_PRESSED(0, 23)) || PAD::IS_CONTROL_PRESSED(0, 24))
    {
      TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
    }
  }
}