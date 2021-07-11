// casinoroulette.ysc @ L251895
void func_4053(int iParam0)
{
  int iVar0;
  int iVar1;
  char* sVar2;
  vector3 vVar3;
  vector3 vVar4;
  char* sVar5;
  char* sVar6;
  int iVar7;
  
  iVar0 = func_3740(iParam0, iParam0->f_12);
  if (!func_15(iVar0))
  {
    return;
  }
  iVar1 = func_3672(iParam0);
  sVar2 = func_3739(iVar1);
  vVar3 = { func_3576(iVar0, sVar2) };
  vVar4 = { func_3572(iVar0, sVar2, 1) };
  sVar5 = func_4054(iVar1);
  sVar6 = func_20(0);
  iVar7 = iParam0->f_759;
  CAM::PLAY_CAM_ANIM(iVar7, sVar5, sVar6, vVar3, vVar4, 0, 2);
}