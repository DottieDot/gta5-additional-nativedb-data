// am_casino_peds.c @ L255655
void func_2745(var uParam0, int iParam1)
{
  char* sVar0;
  int iVar1;
  
  sVar0 = func_2750(iParam1);
  iVar1 = 0;
  if (!func_2747(func_2724(iParam1), &iVar1, 1))
  {
    if (TASK::DOES_SCENARIO_GROUP_EXIST(sVar0))
    {
      if (TASK::IS_SCENARIO_GROUP_ENABLED(sVar0))
      {
        TASK::SET_SCENARIO_GROUP_ENABLED(sVar0, false);
      }
    }
  }
  if (func_2724(iParam1) == 9)
  {
    if (MISC::IS_BIT_SET(uParam0->f_22, 14))
    {
      MISC::CLEAR_BIT(&(uParam0->f_22), 14);
      ENTITY::REMOVE_MODEL_HIDE(-1283.508f, -649.543f, 25.524f, 5f, joaat("prop_pot_plant_03a"), false);
    }
  }
  func_2746(uParam0, 1);
}