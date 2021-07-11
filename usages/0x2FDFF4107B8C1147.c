// armenian1.c @ L56611
void func_531(bool bParam0)
{
  vector3 vVar0;
  int iVar1;
  float fVar2;
  vector3 vVar3;
  
  vVar0 = { ENTITY::GET_ENTITY_ROTATION(iLocal_464, 2) };
  vVar0.x = (vVar0.x - (5f * SYSTEM::TIMESTEP()));
  ENTITY::SET_ENTITY_ROTATION(iLocal_464, vVar0.x, vVar0.y, vVar0.z, 2, 1);
  iVar1 = 0;
  iVar1 = 0;
  while (iVar1 < iLocal_465)
  {
    fVar2 = (IntToFloat(iVar1) * 22.5f);
    vVar3 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_464, 0f, (15.3f * SYSTEM::COS(fVar2)), (15.3f * SYSTEM::SIN(fVar2))) };
    if (bParam0)
    {
      ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iLocal_465[iVar1], vVar3, 0, 0, 1);
    }
    else
    {
      OBJECT::SLIDE_OBJECT(iLocal_465[iVar1], vVar3, 1f, 1f, 1f, 0);
    }
    iVar1++;
  }
}