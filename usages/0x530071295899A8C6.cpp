// fbi2.ysc @ L132878
void func_761()
{
  int iVar0;
  
  iVar0 = func_703();
  if (!PED::IS_PED_INJURED(iVar0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_125[0], 0))
  {
    PED::SET_PED_INTO_VEHICLE(iVar0, iLocal_125[0], 1);
    PED::SET_PED_IN_VEHICLE_CONTEXT(iVar0, MISC::GET_HASH_KEY("MISSFBI2_MICHAEL_DRIVEBY"));
    PED::SET_PED_DRIVE_BY_CLIPSET_OVERRIDE(iVar0, "clipset@missfbi2_driveby");
  }
}