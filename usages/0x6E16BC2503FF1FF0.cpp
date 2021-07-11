// business_battles.ysc @ L210172
void func_3110(int iParam0)
{
  vector3 vVar0;
  vector3 vVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  
  if (func_1235(uLocal_809[iParam0]))
  {
    ENTITY::DETACH_ENTITY(NETWORK::NET_TO_OBJ(uLocal_809[iParam0]), 1, true);
    ENTITY::SET_ENTITY_COMPLETELY_DISABLE_COLLISION(NETWORK::NET_TO_OBJ(uLocal_809[iParam0]), true, 0);
    ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(uLocal_809[iParam0]), true, 0);
    func_3112(NETWORK::NET_TO_OBJ(uLocal_809[iParam0]));
    vVar0 = { ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_OBJ(uLocal_809[iParam0]), true) };
    vVar1 = { OBJECT::GET_SAFE_PICKUP_COORDS(vVar0, 1.2f, 1.5f) };
    if (vVar1.x == vVar0.x && vVar1.y == vVar0.y)
    {
      iVar2 = func_689(iParam0);
      if (iVar2 != -1)
      {
        iVar3 = uLocal_809.f_624[iVar2 /*7*/];
        if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(iVar3))
        {
          vVar1 = { ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_VEH(iVar3), false) };
        }
      }
    }
    fVar4 = func_3111(ENTITY::GET_ENTITY_MODEL(NETWORK::NET_TO_OBJ(uLocal_809[iParam0])));
    vVar1.z = (vVar1.z + (fVar4 * 0.5f));
    ENTITY::SET_ENTITY_COORDS(NETWORK::NET_TO_OBJ(uLocal_809[iParam0]), vVar1, 1, false, 0, 1);
  }
}