// am_challenges.ysc @ L21041
void func_610(int iParam0)
{
  char cVar0[64];
  char cVar1[64];
  int iVar2;
  int iVar3;
  
  if (iParam0 >= Global_1385455)
  {
    return;
  }
  if (PED::IS_PEDHEADSHOT_VALID(Global_1385294[iParam0 /*5*/].f_2))
  {
    StringCopy(&cVar0, "CHAR_DEFAULT", 64);
    if (Global_1385294[iParam0 /*5*/].f_2 != 0)
    {
      StringCopy(&cVar1, PED::GET_PEDHEADSHOT_TXD_STRING(Global_1385294[iParam0 /*5*/].f_2), 64);
      HUD::_THEFEED_ADD_TXD_REF(&cVar1, &cVar1, &cVar0, &cVar0);
    }
    PED::UNREGISTER_PEDHEADSHOT(Global_1385294[iParam0 /*5*/].f_2);
  }
  iVar2 = iParam0;
  iVar3 = iVar2 + 1;
  while (iVar3 < Global_1385455)
  {
    Global_1385294[iVar2 /*5*/] = { Global_1385294[iVar3 /*5*/] };
    iVar2++;
    iVar3++;
  }
  func_611(&(Global_1385294[iVar2 /*5*/]));
  Global_1385455 = (Global_1385455 - 1);
}