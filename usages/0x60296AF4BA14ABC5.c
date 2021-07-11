// arena_carmod.c @ L184860
void func_1590(char* sParam0)
{
  if (!func_239(sParam0))
  {
    if (func_1593())
    {
      HUD::ADD_NEXT_MESSAGE_TO_PREVIOUS_BRIEFS(0);
      func_1592(sParam0);
      func_1591();
      Global_98721.f_5 = 1;
      Global_98721.f_6 = MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME());
    }
  }
}