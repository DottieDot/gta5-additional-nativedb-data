// re_monkey.c @ L2905
bool func_80(vector3 vParam0, vector3 vParam1)
{
  float fVar0;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar0 = PLAYER::GET_PLAYER_CURRENT_STEALTH_NOISE(PLAYER::PLAYER_ID());
  fVar1 = func_77((fVar0 / 14f), 0f, 1f);
  fVar2 = SYSTEM::VDIST(vParam0, vParam1);
  fVar3 = (func_77((30f - fVar2), 0f, 30f) / 30f);
  fVar4 = (fVar1 * fVar3);
  return fVar4 > 0.25f;
}