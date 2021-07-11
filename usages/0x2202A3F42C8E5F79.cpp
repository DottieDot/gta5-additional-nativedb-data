// am_armwrestling.ysc @ L117361
void func_705(int iParam0, bool bParam1)
{
  if (func_711())
  {
    return;
  }
  if (!func_24(PLAYER::PLAYER_ID(), 1, 1))
  {
    bParam1 = false;
  }
  if (!Global_1312798)
  {
    if (bParam1)
    {
      if (!func_710(Global_4456448.f_190930))
      {
        if (GRAPHICS::GET_REQUESTINGNIGHTVISION() || GRAPHICS::GET_USINGNIGHTVISION())
        {
          func_709(1);
          func_707(1, 2);
        }
        func_706(&(iParam0->f_1189), &(iParam0->f_1186));
      }
    }
    Global_1312798 = 1;
  }
}