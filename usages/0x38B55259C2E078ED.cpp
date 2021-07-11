// maintransition.ysc @ L101650
void func_388(var uParam0)
{
  char* sVar0;
  char* sVar1;
  int iVar2;
  int iVar3;
  
  func_418(&(uParam0->f_366), &(uParam0->f_395), 0);
  sVar0 = "PSPLUS_PROMO_TITLE";
  sVar1 = "PSPLUS_PROMO";
  iVar2 = 0;
  if (func_389(1) == 0 || func_384() == 0)
  {
    iVar2 = 134217728;
    HUD::SET_WARNING_MESSAGE_WITH_HEADER(sVar0, sVar1, iVar2, 0, 0, -1, 0, 0, 1, 0);
    return;
  }
  iVar3 = 24;
  HUD::_SET_WARNING_MESSAGE_WITH_HEADER_UNK(sVar0, sVar1, iVar2, iVar3, 0, 0, -1, 0, 0, 1, 0);
}