// am_mp_arcade.ysc @ L273815
void func_3820(var uParam0)
{
  HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
  HUD::HIDE_SCRIPTED_HUD_COMPONENT_THIS_FRAME(19);
  if (MISC::IS_BIT_SET(uParam0->f_11, 1))
  {
    HUD::SHOW_HUD_COMPONENT_THIS_FRAME(4);
    HUD::SHOW_HUD_COMPONENT_THIS_FRAME(5);
    HUD::SHOW_HUD_COMPONENT_THIS_FRAME(13);
    HUD::SHOW_HUD_COMPONENT_THIS_FRAME(3);
    if (!func_84(&(uParam0->f_101)))
    {
      func_83(&(uParam0->f_101), 0, 0);
    }
    else if (func_82(&(uParam0->f_101), 4000, 0))
    {
      func_75(&(uParam0->f_101));
      MISC::CLEAR_BIT(&(uParam0->f_11), 1);
    }
  }
}