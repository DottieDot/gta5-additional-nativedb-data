// michael3.c @ L120254
void func_807()
{
  int iVar0;
  
  func_733(&(Local_1760[0 /*7*/]), -2247.101f, 273.1696f, 173.602f, 210f, 2, 0, 1, 0);
  func_733(&(Local_1760[1 /*7*/]), -2251.389f, 271.2775f, 173.602f, 210f, 2, 0, 1, 1);
  func_733(&(Local_1760[2 /*7*/]), -2231.962f, 275.0015f, 173.602f, 210f, 0, 1, 3, 1);
  func_733(&(Local_1760[4 /*7*/]), -2227.241f, 264.4742f, 173.602f, 210f, 0, 1, 3, 1);
  func_733(&(Local_1760[3 /*7*/]), -2229.517f, 269.747f, 173.602f, 210f, 0, 1, 3, 1);
  func_709(&(Local_1426[0 /*25*/]), iLocal_65, Local_1760[0 /*7*/].f_3, Local_1760[0 /*7*/].f_6, "MT_FIB1", iLocal_291, iLocal_75, 1, 0, 0, 0);
  func_709(&(Local_1426[1 /*25*/]), iLocal_65, Local_1760[1 /*7*/].f_3, Local_1760[1 /*7*/].f_6, "MT_FIB2", iLocal_291, iLocal_75, 1, 0, 0, 0);
  func_709(&(Local_1426[2 /*25*/]), iLocal_65, -2223.521f, 287.886f, 173.602f, 125f, "MT_FIB3", iLocal_291, iLocal_75, 1, 0, 0, 0);
  func_709(&(Local_1426[3 /*25*/]), iLocal_65, -2223.418f, 279.7906f, 173.602f, 125f, "MT_FIB4", iLocal_291, iLocal_75, 1, 0, 0, 0);
  func_709(&(Local_1426[4 /*25*/]), iLocal_65, -2223.74f, 282.7443f, 173.602f, 125f, "MT_FIB5", iLocal_291, iLocal_75, 1, 0, 0, 0);
  func_766(&Local_1426);
  iVar0 = 0;
  while (iVar0 <= (Local_1426 - 1))
  {
    if (func_30(Local_1426[iVar0 /*25*/]))
    {
      PED::REGISTER_HATED_TARGETS_AROUND_PED(Local_1426[iVar0 /*25*/], 250f);
      ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_1426[iVar0 /*25*/], false);
      PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_1426[iVar0 /*25*/], false);
      PED::SET_PED_COMBAT_ATTRIBUTES(Local_1426[iVar0 /*25*/], 0, true);
      PED::REMOVE_PED_DEFENSIVE_AREA(Local_1426[iVar0 /*25*/], 1);
      PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_1426[iVar0 /*25*/], Local_1760[iVar0 /*7*/].f_3, 1f, 0, 0);
      TASK::TASK_PUT_PED_DIRECTLY_INTO_COVER(Local_1426[iVar0 /*25*/], Local_1760[iVar0 /*7*/].f_3, -1, true, 0f, false, false, 0, 0);
      func_731(&(Local_1426[iVar0 /*25*/]));
    }
    iVar0++;
  }
}