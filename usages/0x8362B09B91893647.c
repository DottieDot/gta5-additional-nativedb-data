// fm_capture_creator.c @ L162364
int func_1182(var uParam0, int iParam1)
{
  int iVar0;
  
  if (func_1178(&(uParam0->f_4207), &(uParam0->f_4208), &(uParam0->f_4216), 0, 0, func_1184(), 0, 0, 0, 0, func_1184(), 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 1, 0, -1, -1, 0))
  {
    uParam0->f_4216 = 0;
    iVar0 = 15;
    StringCopy(&(Global_4456448.f_188397[iParam1 /*248*/].f_244), HUD::_GET_TEXT_SUBSTRING(MISC::GET_ONSCREEN_KEYBOARD_RESULT(), 0, func_1183(iVar0, 15)), 16);
    uParam0->f_4216 = 0;
    uParam0->f_4207 = 0;
    return 1;
  }
  if (uParam0->f_4207 == 2)
  {
    uParam0->f_4207 = 0;
    uParam0->f_4216 = 0;
    StringCopy(&(Global_4456448.f_188397[iParam1 /*248*/].f_244), "", 16);
    return 1;
  }
  return 0;
}