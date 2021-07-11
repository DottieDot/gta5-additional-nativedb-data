// am_gang_call.ysc @ L17537
int func_503(int iParam0)
{
  if ((!PED::IS_PED_INJURED(iParam0) && !PED::IS_PED_BEING_STUNNED(iParam0, 0)) && !PED::IS_PED_RAGDOLL(iParam0))
  {
    return 1;
  }
  return 0;
}