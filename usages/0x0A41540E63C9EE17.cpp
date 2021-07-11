// assassin_construction.ysc @ L17943
void func_354()
{
  if (!iLocal_1138)
  {
    if (func_34(vLocal_1207, 1) <= 100f)
    {
      STREAMING::PREFETCH_SRL("ass_construction");
      iLocal_1138 = 1;
    }
  }
  else if (func_34(vLocal_1207, 1) > 120f)
  {
    if (STREAMING::IS_SRL_LOADED())
    {
      STREAMING::END_SRL();
      iLocal_1138 = 0;
    }
  }
}