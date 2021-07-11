// maintransition.c @ L109470
void func_715(var uParam0)
{
  char* sVar0;
  int iVar1;
  char* sVar2;
  
  func_418(&(uParam0->f_366), &(uParam0->f_395), 0);
  sVar0 = "HUD_LEAVETIT";
  iVar1 = 0;
  sVar2 = "HUD_QUITSESS";
  iVar1 = "PM_QUIT_WARN11";
  if (MISC::GET_IS_AUTO_SAVE_OFF())
  {
    iVar1 = "PM_QUIT_WARN5";
  }
  if (func_716() == 0)
  {
    HUD::SET_WARNING_MESSAGE_WITH_HEADER(sVar0, sVar2, 36, iVar1, 0, -1, 0, 0, 1, 0);
  }
}