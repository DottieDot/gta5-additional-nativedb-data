// pb_prostitute.c @ L17730
int func_497()
{
  if (PED::IS_PED_USING_SCENARIO(iLocal_90, func_65(0)))
  {
    if (PED::IS_SCRIPTED_SCENARIO_PED_USING_CONDITIONAL_ANIM(iLocal_90, "amb@world_human_prostitute@crackhooker@base", "base"))
    {
      return 0;
    }
    if (PED::IS_SCRIPTED_SCENARIO_PED_USING_CONDITIONAL_ANIM(iLocal_90, "amb@world_human_prostitute@cokehead@base", "base"))
    {
      return 1;
    }
  }
  if (PED::IS_PED_USING_SCENARIO(iLocal_90, func_65(1)))
  {
    if (PED::IS_SCRIPTED_SCENARIO_PED_USING_CONDITIONAL_ANIM(iLocal_90, "amb@world_human_prostitute@french@base", "base"))
    {
      return 3;
    }
    if (PED::IS_SCRIPTED_SCENARIO_PED_USING_CONDITIONAL_ANIM(iLocal_90, "amb@world_human_prostitute@hooker@base", "base"))
    {
      return 2;
    }
  }
  return -1;
}