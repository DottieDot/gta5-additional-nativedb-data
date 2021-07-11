// freemode.c @ L604582
void func_7947()
{
  int iVar0;
  struct<8> Var1;
  
  iVar0 = 0;
  while (iVar0 <= 1)
  {
    if ((((((((Global_2460409[iVar0] != 0 && !func_470()) && func_15359(PLAYER::PLAYER_ID(), 1, 1)) && !NETWORK::NETWORK_IS_IN_MP_CUTSCENE()) && CAM::IS_GAMEPLAY_CAM_RENDERING()) && !func_541()) && func_17617(115, -1)) && func_7952()) && !func_7949())
    {
      func_17302(&Global_2460191);
      HUD::THEFEED_FORCE_RENDER_ON();
      StringCopy(&Var1, "~HUD_COLOUR_SOCIAL_CLUB~", 64);
      StringConCat(&Var1, HUD::_GET_LABEL_TEXT("CREATOR_RSC"), 64);
      func_7948("PIM_TIGC22", &Var1, Global_2460409[iVar0], iVar0 + 1, 0, 1);
      Global_2460409[iVar0] = 0;
      Global_2460193 = 1;
    }
    if (Global_2460193)
    {
      if (func_100(&Global_2460191, 10000, 0))
      {
        HUD::THEFEED_FORCE_RENDER_OFF();
        Global_2460193 = 0;
      }
    }
    iVar0++;
  }
}