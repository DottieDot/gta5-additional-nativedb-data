// agency_heist1.ysc @ L114926
int func_639(float fParam0, float fParam1, float fParam2, float fParam3)
{
  float fVar0;
  float fVar1;
  
  fVar0 = (fParam3 - fParam2);
  fVar1 = SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), ENTITY::GET_ENTITY_COORDS(iLocal_175, false));
  if (ENTITY::IS_ENTITY_OCCLUDED(iLocal_175) && fVar1 > fParam2)
  {
    fLocal_278 = (fLocal_278 + MISC::GET_FRAME_TIME());
  }
  else
  {
    fLocal_278 = 0f;
  }
  if (fVar1 > fParam2 && fLocal_278 > func_630(fParam0, fParam1, (1f - (func_640((fVar1 - fParam2), 0f, fVar0) / fVar0))))
  {
    return 1;
  }
  return 0;
}