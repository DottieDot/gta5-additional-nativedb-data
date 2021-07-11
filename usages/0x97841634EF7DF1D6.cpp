// am_casino_peds.ysc @ L141821
void func_1242(var uParam0)
{
  int iVar0;
  
  if (!func_15(*uParam0))
  {
    return;
  }
  iVar0 = ENTITY::GET_ENTITY_MODEL(*uParam0);
  if (VEHICLE::IS_THIS_MODEL_A_HELI(iVar0) || VEHICLE::IS_THIS_MODEL_A_PLANE(iVar0))
  {
    VEHICLE::_0x97841634EF7DF1D6(*uParam0, 1);
  }
}