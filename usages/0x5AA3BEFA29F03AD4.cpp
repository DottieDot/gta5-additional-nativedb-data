// maintransition.ysc @ L105076
void func_547(var uParam0)
{
  char* sVar0;
  char* sVar1;
  char* sVar2;
  int iVar3;
  
  func_418(&(uParam0->f_366), &(uParam0->f_395), 0);
  sVar0 = "HUD_CONNPROB";
  sVar1 = "HUD_MIGRATE_WARN";
  sVar2 = "HUD_SAVETRA_INFO";
  iVar3 = 33816576;
  if (!func_389(0))
  {
    iVar3 = 134217728;
  }
  if (!HUD::IS_SOCIAL_CLUB_ACTIVE())
  {
    HUD::SET_WARNING_MESSAGE_WITH_HEADER(sVar0, sVar1, iVar3, sVar2, 0, -1, 0, 0, 1, 0);
  }
  else if (!MISC::ARE_PROFILE_SETTINGS_VALID())
  {
    func_4267(9);
    func_4227(30);
    func_4235(5);
  }
}