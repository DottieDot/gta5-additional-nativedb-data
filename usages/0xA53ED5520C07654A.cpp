// am_casino_peds.ysc @ L286884
void func_3466(int iParam0, var uParam1)
{
  int iVar0;
  int iVar1;
  vector3 vVar2;
  int iVar3;
  int iVar4;
  
  if (!ENTITY::DOES_ENTITY_EXIST(*uParam1))
  {
    return;
  }
  iVar0 = func_3469(iParam0);
  iVar1 = 0;
  while (iVar1 < iVar0)
  {
    vVar2 = { func_3468(iParam0, iVar1) };
    iVar3 = func_3467(iParam0, iVar1);
    iVar4 = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(vVar2, 1f, iVar3, 0, 0, 1);
    if (ENTITY::DOES_ENTITY_EXIST(iVar4))
    {
      ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(iVar4, *uParam1, false);
    }
    iVar1++;
  }
}