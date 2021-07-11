// am_armwrestling.c @ L43100
void func_248(var uParam0, bool bParam1)
{
  HUD::SET_TEXT_FONT(*uParam0);
  if (!uParam0->f_8 == 0f || !uParam0->f_9 == 0f)
  {
    HUD::SET_TEXT_WRAP(uParam0->f_8, uParam0->f_9);
  }
  HUD::SET_TEXT_SCALE(uParam0->f_1, uParam0->f_2);
  HUD::SET_TEXT_COLOUR(uParam0->f_3, uParam0->f_4, uParam0->f_5, uParam0->f_6);
  switch (uParam0->f_7)
  {
    case 0:
      break;
    
    case 1:
      HUD::SET_TEXT_OUTLINE();
      HUD::SET_TEXT_DROP_SHADOW();
      break;
    
    case 3:
      HUD::SET_TEXT_DROP_SHADOW();
      break;
    
    case 2:
      HUD::SET_TEXT_OUTLINE();
      break;
  }
  if (bParam1)
  {
    GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(4);
  }
}