// finalec1.c @ L121103
void func_797(int iParam0)
{
  float fVar0;
  float fVar1;
  
  if (!PED::IS_PED_INJURED(Local_150[iParam0 /*14*/]))
  {
    TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_150[iParam0 /*14*/], 200f, 0);
    PED::REGISTER_TARGET(Local_150[iParam0 /*14*/], PLAYER::PLAYER_PED_ID());
    PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_150[iParam0 /*14*/], false);
    fVar0 = func_800(iParam0);
    if (fVar0 > 0f)
    {
      PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_150[iParam0 /*14*/], func_627(iParam0), fVar0, 0, 0);
    }
    fVar1 = func_799(iParam0);
    if (fVar1 > 0f)
    {
      PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_150[iParam0 /*14*/], func_798(iParam0), fVar1, 0, 1);
    }
    Local_150[iParam0 /*14*/].f_11 = 4;
  }
}