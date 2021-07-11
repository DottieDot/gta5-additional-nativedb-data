// abigail2.c @ L34600
bool func_228(int iParam0, int iParam1, float fParam2, bool bParam3)
{
  return SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iParam0, bParam3), ENTITY::GET_ENTITY_COORDS(iParam1, bParam3)) <= (fParam2 * fParam2);
}