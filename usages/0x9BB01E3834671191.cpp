// act_cinema.ysc @ L121153
void func_1112(var uParam0, bool bParam1)
{
  if (PED::IS_PED_INJURED(func_1056()))
  {
    return;
  }
  if (bParam1)
  {
    if (!PED::IS_PED_GROUP_MEMBER(func_1056(), func_1113()))
    {
      return;
    }
    if (!PED::IS_PED_INJURED(func_1055()))
    {
      if (!PED::IS_PED_GROUP_MEMBER(func_1055(), func_1113()))
      {
        return;
      }
    }
  }
  if (Global_94525 == 23)
  {
    Global_94527 = 10;
    Global_94525 = uParam0;
  }
}