// agency_heist3a.c @ L146919
void func_1138()
{
  int iVar0;
  
  iVar0 = 0;
  while (iVar0 <= (Local_349 - 1))
  {
    if (!PED::IS_PED_INJURED(Local_349[iVar0 /*32*/]))
    {
      func_140(&(Local_349[iVar0 /*32*/]), 1);
      PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_349[iVar0 /*32*/], false);
      TASK::TASK_COMBAT_PED(Local_349[iVar0 /*32*/], PLAYER::PLAYER_PED_ID(), 0, 16);
    }
    iVar0++;
  }
}