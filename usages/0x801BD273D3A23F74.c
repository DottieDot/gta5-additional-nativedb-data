// fm_capture_creator.c @ L233613
float func_2159(char* sParam0, int iParam1)
{
  int iVar0;
  float fVar1;
  int iVar2;
  
  iVar0 = 0;
  fVar1 = 0f;
  StringCopy(&(Global_22350.f_73[Global_22350.f_5220 /*6*/]), sParam0, 24);
  iVar2 = HUD::GET_LENGTH_OF_STRING_WITH_THIS_TEXT_LABEL(sParam0);
  if (iVar2 > iParam1)
  {
    iVar0 = (iVar2 - iParam1);
    fVar1 = (IntToFloat(iVar0) / 100f);
  }
  return fVar1;
}