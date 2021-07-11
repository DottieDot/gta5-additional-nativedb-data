// am_mp_arcade_love_meter.ysc @ L89697
int func_608(char* sParam0)
{
  int iVar0;
  int iVar1;
  int iVar2;
  char* sVar3;
  
  iVar0 = (HUD::GET_LENGTH_OF_LITERAL_STRING(sParam0) - 1);
  iVar1 = 0;
  iVar2 = 0;
  while (iVar2 <= iVar0)
  {
    sVar3 = HUD::_GET_TEXT_SUBSTRING(sParam0, iVar2, iVar2 + 1);
    iVar1 = (iVar1 + func_609(sVar3));
    iVar2++;
  }
  return iVar1;
}