// freemode.c @ L530074
int func_7106(int iParam0, int iParam1, int iParam2, vector3 vParam3)
{
  int iVar0;
  int iVar1;
  int iVar2;
  
  NETWORK::_0xE42D626EEC94E5D9(vParam3, 0, &iVar0, &iVar1, &iVar2);
  if ((iParam0 <= (func_133(0) - iVar0) && iParam1 <= (func_133(1) - iVar1)) && iParam2 <= (func_133(2) - iVar2))
  {
    return 1;
  }
  return 0;
}