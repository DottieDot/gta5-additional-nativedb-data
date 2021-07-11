// exile1.ysc @ L9525
void func_151(int iParam0, vector3 vParam1, float fParam2, bool bParam3)
{
  TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(0, vParam1, PLAYER::PLAYER_PED_ID(), fParam2, true, 0.5f, 4f, false, 64, 0, -957453492, 20000);
  if (bParam3)
  {
    Local_69[iParam0 /*17*/].f_11 = { vParam1 };
  }
}