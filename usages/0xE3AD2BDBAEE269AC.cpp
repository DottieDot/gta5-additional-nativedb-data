// blimptest.ysc @ L255
void func_8(vector3 vParam0)
{
  int iVar0;
  int iVar1;
  vector3 vVar2[12];
  
  iVar1 = 12;
  vVar2[0 /*3*/] = { 5f, 0f, 0f };
  vVar2[1 /*3*/] = { 0f, 5f, 0f };
  vVar2[2 /*3*/] = { 0f, 0f, 5f };
  vVar2[3 /*3*/] = { 5f, 5f, 0f };
  vVar2[4 /*3*/] = { 5f, 0f, 5f };
  vVar2[5 /*3*/] = { 0f, 5f, 5f };
  vVar2[6 /*3*/] = { 20f, 0f, 0f };
  vVar2[7 /*3*/] = { 0f, 20f, 0f };
  vVar2[8 /*3*/] = { 0f, 0f, 20f };
  vVar2[9 /*3*/] = { 20f, 20f, 0f };
  vVar2[10 /*3*/] = { 20f, 0f, 20f };
  vVar2[11 /*3*/] = { 0f, 20f, 20f };
  FIRE::ADD_EXPLOSION(vParam0, 8, 1f, 1, 0, 1f, 0);
  iVar0 = 0;
  while (iVar0 <= (iVar1 - 1))
  {
    FIRE::ADD_EXPLOSION(vParam0 + vVar2[iVar0 /*3*/], 8, 1f, 1, 0, 1f, 0);
    iVar0++;
  }
}