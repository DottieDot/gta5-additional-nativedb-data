// agency_heist2.c @ L117962
void func_711(int iParam0)
{
  int iVar0;
  
  iVar0 = func_42(iParam0);
  if (func_41(iVar0) && !PED::IS_PED_INJURED(iParam0))
  {
    Global_111560.f_2358.f_539.f_2318[iVar0 /*3*/] = { ENTITY::GET_ENTITY_VELOCITY(iParam0) };
  }
}