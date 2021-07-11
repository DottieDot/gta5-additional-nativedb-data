// act_cinema.c @ L113511
int func_943()
{
  int iVar0;
  int iVar1;
  
  iVar0 = func_851();
  iVar1 = PLAYER::GET_PLAYER_PED(iVar0);
  if ((ENTITY::DOES_ENTITY_EXIST(iVar1) && !PED::IS_PED_INJURED(iVar1)) && (((PED::IS_PED_IN_FLYING_VEHICLE(iVar1) || Global_2424073[iVar0 /*421*/].f_68.f_3 == 2) || Global_2424073[iVar0 /*421*/].f_68.f_3 == 3) || Global_2424073[iVar0 /*421*/].f_68.f_3 == 4))
  {
    return 1;
  }
  return 0;
}