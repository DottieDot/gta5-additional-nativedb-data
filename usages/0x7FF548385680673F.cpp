// chinese2.ysc @ L9836
void func_128(vector3 vParam0, int iParam1)
{
  if (iLocal_103 == 0)
  {
    iParam1 = 0;
  }
  FIRE::REMOVE_SCRIPT_FIRE(Local_101[iLocal_106 /*5*/]);
  if (Local_101[iLocal_106 /*5*/].f_4 != 0)
  {
    GRAPHICS::FADE_DECALS_IN_RANGE(Local_101[iLocal_106 /*5*/].f_1, 0.4f, 1f);
  }
  Local_101[iLocal_106 /*5*/].f_4 = MISC::GET_GAME_TIMER();
  Local_101[iLocal_106 /*5*/].f_1 = { vParam0 };
  Local_101[iLocal_106 /*5*/] = FIRE::START_SCRIPT_FIRE(vParam0, iLocal_94, iParam1);
  iLocal_106++;
  if (iLocal_106 >= 31)
  {
    iLocal_106 = 0;
  }
}