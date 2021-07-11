// am_contact_requests.c @ L15386
void func_291(float fParam0)
{
  int iVar0;
  int iVar1;
  int iVar2;
  int iVar3;
  
  HUD::GET_HUD_COLOUR(1, &iVar0, &iVar1, &iVar2, &iVar3);
  HUD::SET_TEXT_FONT(0);
  HUD::SET_TEXT_SCALE(0f, 0.35f);
  HUD::SET_TEXT_LEADING(2);
  HUD::SET_TEXT_COLOUR(iVar0, iVar1, iVar2, iVar3);
  HUD::SET_TEXT_WRAP(fParam0, ((Global_22347 + Global_22349) - 0.0046875f));
  HUD::SET_TEXT_CENTRE(0);
  HUD::SET_TEXT_DROPSHADOW(0, 0, 0, 0, 0);
  HUD::SET_TEXT_EDGE(0, 0, 0, 0, 0);
}