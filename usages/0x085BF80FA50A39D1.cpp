// finale_heist2a.ysc @ L141465
void func_1024(int iParam0, float fParam1, float fParam2, float fParam3)
{
  vector3 vVar0;
  float fVar1;
  float fVar2;
  
  if (!PED::IS_PED_INJURED(*iParam0))
  {
    vVar0 = { ENTITY::GET_ENTITY_COORDS(*iParam0, true) };
    fVar1 = SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), vVar0);
    fVar2 = 1f;
    if (fVar1 > fParam2)
    {
      if (fVar1 > fParam3)
      {
        fVar1 = fParam3;
      }
      fVar2 = (fParam1 * (1f - (((fVar1 - fParam2) / (fParam3 - fParam2)) * 0.2f)));
      if (fVar2 > 1.15f)
      {
        fVar2 = 1.15f;
      }
      PED::SET_PED_MOVE_RATE_OVERRIDE(*iParam0, fVar2);
    }
  }
}