// fm_mission_controller.c @ L605202
int func_9618(var uParam0, float fParam1, var uParam2, int iParam3, float fParam4, float fParam5)
{
  int iVar0;
  vector3 vVar1;
  float fVar2;
  vector3 vVar3;
  vector3 vVar4;
  int iVar5;
  
  iVar0 = 0;
  *uParam2 = 0f;
  vVar3 = { 0f, 1f, 0f };
  func_1036(&vVar3, 0f, 0f, fParam1);
  vVar4 = { *uParam0 + vVar3 };
  iVar5 = func_9622(iParam3);
  if (PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE_FAVOUR_DIRECTION(*uParam0, vVar4, 0, &vVar1, &fVar2, iVar5, 1077936128, 0))
  {
    if (func_9619(fParam1, fVar2) <= fParam4)
    {
      if (MISC::GET_DISTANCE_BETWEEN_COORDS(vVar1, *uParam0, true) < fParam5)
      {
        iVar0 = 1;
        *uParam2 = fVar2;
        *uParam0 = { vVar1 };
      }
    }
  }
  return iVar0;
}