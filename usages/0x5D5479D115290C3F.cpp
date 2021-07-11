// tennis.ysc @ L52369
void func_727(int iParam0, var uParam1, var uParam2, bool bParam3)
{
  if ((((iParam0 > 6 && iParam0 < 22) && !func_196(uParam2, 4194304)) && iParam0 != 16) || bParam3)
  {
    if (ENTITY::DOES_ENTITY_EXIST(func_1161(uParam1)))
    {
      if (MISC::IS_TENNIS_MODE(func_1161(uParam1)))
      {
        PED::SET_PED_RESET_FLAG(func_1161(uParam1), 69, true);
      }
      PED::SET_PED_RESET_FLAG(func_1161(uParam1), 102, true);
    }
  }
}