// director_mode.c @ L9919
char* func_138(int iParam0)
{
  char* sVar0;
  int iVar1;
  
  sVar0 = "";
  iVar1 = 0;
  while (iVar1 <= 599)
  {
    if (Local_342[iVar1 /*15*/].f_5 == iParam0)
    {
      sVar0 = HUD::_0x98C3CF913D895111(&(Local_342[iVar1 /*15*/]), HUD::GET_LENGTH_OF_LITERAL_STRING(&(Local_342[iVar1 /*15*/])));
      return sVar0;
    }
    iVar1++;
  }
  return "";
}