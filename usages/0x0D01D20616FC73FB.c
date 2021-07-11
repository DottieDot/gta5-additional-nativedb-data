// am_contact_requests.c @ L56928
void func_865()
{
  int iVar0;
  bool bVar1;
  int iVar2;
  int iVar3;
  
  iVar0 = func_35();
  iVar2 = func_866(iVar0);
  iVar3 = MISC::GET_PROFILE_SETTING(iVar2);
  if (MISC::IS_BIT_SET(iVar3, 24))
  {
    MISC::CLEAR_BIT(&iVar3, 24);
    bVar1 = true;
  }
  if (MISC::IS_BIT_SET(iVar3, 25))
  {
    MISC::CLEAR_BIT(&iVar3, 25);
    bVar1 = true;
  }
  if (MISC::IS_BIT_SET(iVar3, 26))
  {
    MISC::CLEAR_BIT(&iVar3, 26);
    bVar1 = true;
  }
  if (bVar1)
  {
    STATS::_0x0D01D20616FC73FB(iVar3, iVar0);
  }
}