// triathlonsp.c @ L102464
void func_563(int iParam0)
{
  int iVar0;
  float fVar1;
  vector3 vVar2;
  
  iVar0 = 1;
  while (iVar0 < 8)
  {
    if (func_408(iParam0, &(iParam0->f_1735[iVar0 /*206*/])) == 2)
    {
      if (TASK::GET_SCRIPT_TASK_STATUS(iParam0->f_1735[iVar0 /*206*/].f_8, -1689270312) == 1)
      {
        fVar1 = (IntToFloat(iVar0) / 8f);
        vVar2 = { func_564(3f, 3f, 0f, -3f, -3f, 0f, fVar1) };
        TASK::SET_PED_WAYPOINT_ROUTE_OFFSET(iParam0->f_1735[iVar0 /*206*/].f_8, vVar2);
      }
    }
    iVar0++;
  }
}