// rural_bank_setup.c @ L21094
void func_339(int iParam0, vector3 vParam1, vector3 vParam2, var uParam3, float fParam4, float fParam5)
{
  var uVar0[4];
  
  ENTITY::SET_ENTITY_COORDS(iParam0, func_340(vParam1, vParam2, *fParam5), 1, false, 0, 1);
  MISC::SLERP_NEAR_QUATERNION(*fParam5, (*uParam3)[0], (*uParam3)[1], (*uParam3)[2], (*uParam3)[3], (*fParam4)[0], (*fParam4)[1], (*fParam4)[2], (*fParam4)[3], &(uVar0[0]), &(uVar0[1]), &(uVar0[2]), &(uVar0[3]));
  ENTITY::SET_ENTITY_QUATERNION(iParam0, uVar0[0], uVar0[1], uVar0[2], uVar0[3]);
}