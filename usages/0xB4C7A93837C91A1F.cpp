// fm_capture_creator.ysc @ L208536
char* func_1775(int iParam0, int iParam1)
{
  char* sVar0;
  
  sVar0 = "";
  if (ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("BURRITO"))
  {
    return func_1777(iParam1);
  }
  if (ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("PONY"))
  {
    return func_1776(iParam1);
  }
  if (iParam1 <= 0)
  {
    sVar0 = "FMMC_SEL_DEF";
  }
  else if (ENTITY::DOES_ENTITY_EXIST(iParam0))
  {
    if (VEHICLE::GET_NUM_VEHICLE_MODS(iParam0, 48) > 0)
    {
      sVar0 = VEHICLE::GET_MOD_TEXT_LABEL(iParam0, 48, (iParam1 - 1));
    }
    else if (VEHICLE::GET_VEHICLE_LIVERY_COUNT(iParam0) > 0)
    {
      sVar0 = VEHICLE::GET_LIVERY_NAME(iParam0, iParam1);
    }
  }
  return sVar0;
}