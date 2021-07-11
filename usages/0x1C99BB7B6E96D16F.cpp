// agency_heist2.ysc @ L3349
void func_64(int iParam0, vector3 vParam1, var uParam2)
{
  vector3 vVar0;
  vector3 vVar1;
  float fVar2;
  float fVar3;
  vector3 vVar4;
  
  vVar0 = { PED::GET_PED_BONE_COORDS(iParam0, 28422, 0f, 0f, 0f) };
  vVar1 = { vParam1 - vVar0 };
  fVar2 = SYSTEM::SQRT((SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(iParam0, true)) * 10f));
  if (vVar1.z > 0f)
  {
    fVar2 = (fVar2 + MISC::ABSF(vVar1.z));
  }
  fVar3 = func_67(vVar0, vParam1, fVar2, 1);
  vVar1.z = 0f;
  vVar4 = { vVar1 };
  func_65(&vVar4, (fVar2 * SYSTEM::COS(fVar3)));
  vVar4.z = (fVar2 * SYSTEM::SIN(fVar3));
  *uParam2 = (SYSTEM::VMAG(vVar1) / (fVar2 * SYSTEM::COS(fVar3)));
  ENTITY::DETACH_ENTITY(iLocal_85, 0, true);
  OBJECT::SET_OBJECT_PHYSICS_PARAMS(iLocal_85, 1f, 1f, 0f, 0f, 0f, 0f, 0f, 0f, -1082130432, -1082130432, -1082130432);
  PHYSICS::SET_DAMPING(iLocal_85, 0, 0f);
  PHYSICS::SET_DAMPING(iLocal_85, 1, 0f);
  PHYSICS::SET_DAMPING(iLocal_85, 2, 0f);
  PHYSICS::SET_DAMPING(iLocal_85, 3, 0f);
  PHYSICS::SET_DAMPING(iLocal_85, 4, 0f);
  PHYSICS::SET_DAMPING(iLocal_85, 5, 0f);
  ENTITY::SET_ENTITY_VELOCITY(iLocal_85, vVar4);
}