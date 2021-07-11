// bj.c @ L16698
int func_268(int iParam0)
{
  vector3 vVar0;
  vector3 vVar1;
  var uVar2;
  vector3 vVar3;
  vector3 vVar4;
  float fVar5;
  
  if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
  {
    vVar0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
  }
  if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
  {
    ENTITY::GET_ENTITY_MATRIX(iParam0, &vVar4, &uVar2, &uVar2, &vVar1);
  }
  vVar3 = { vVar0 - vVar1 };
  vVar3.z = 0f;
  vVar4.z = 0f;
  fVar5 = func_269(vVar3, vVar4);
  if (fVar5 < 0f)
  {
    return 1;
  }
  return 0;
}