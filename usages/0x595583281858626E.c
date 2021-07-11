// am_mp_property_int.c @ L191064
void func_1821(bool bParam0, int iParam1)
{
  int iVar0;
  int iVar1;
  int iVar2;
  int iVar3;
  vector3 vVar4;
  
  iVar0 = 1;
  iVar1 = func_1824(iLocal_522);
  iVar2 = 1;
  if (bParam0)
  {
    iVar3 = iVar0;
    iVar0 = iVar1;
    iVar1 = iVar3;
    iVar2 = -1;
  }
  iVar0 = func_1822(iParam1);
  TASK::TASK_FLUSH_ROUTE();
  while (iVar0 != (iVar1 + iVar2))
  {
    vVar4 = { func_1825(iLocal_522, iVar0) };
    TASK::TASK_EXTEND_ROUTE(vVar4);
    iVar0 = (iVar0 + iVar2);
  }
  TASK::TASK_FOLLOW_POINT_ROUTE(iParam1, 1f, 0);
}