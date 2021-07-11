// assassin_construction.c @ L16919
void func_331(int iParam0, int iParam1)
{
  int iVar0;
  
  iVar0 = 0;
  while (iVar0 <= (iParam1 - 1))
  {
    if (!PED::IS_PED_INJURED((*iParam0)[iVar0 /*19*/]))
    {
      PED::REMOVE_PED_DEFENSIVE_AREA((*iParam0)[iVar0 /*19*/], 0);
      PED::SET_PED_COMBAT_MOVEMENT((*iParam0)[iVar0 /*19*/], 2);
      TASK::TASK_CLEAR_DEFENSIVE_AREA((*iParam0)[iVar0 /*19*/]);
      TASK::TASK_COMBAT_PED((*iParam0)[iVar0 /*19*/], iLocal_1183, 0, 16);
    }
    iVar0++;
  }
}