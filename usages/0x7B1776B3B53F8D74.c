// appcontacts.c @ L2575
void func_42(int iParam0)
{
  float fVar0;
  int iVar1;
  
  MISC::SET_GAME_PAUSED(true);
  PAD::SET_INPUT_EXCLUSIVE(2, 201);
  fVar0 = 0f;
  while (!PAD::IS_CONTROL_JUST_PRESSED(2, 201) || fVar0 < 1f)
  {
    iVar1 = func_43(iParam0, 119);
    HUD::SET_WARNING_MESSAGE("FBR_GENERIC", 16384, 0, 0, -1, "FBR_DIR_MODE", iVar1, 1, 0);
    SYSTEM::WAIT(0);
    fVar0 = (fVar0 + MISC::GET_FRAME_TIME());
  }
  MISC::SET_GAME_PAUSED(false);
}