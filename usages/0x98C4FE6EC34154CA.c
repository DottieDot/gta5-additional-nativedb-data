// am_armwrestling.c @ L8985
void func_152(var uParam0, var uParam1, bool bParam2, bool bParam3)
{
  if (bParam3)
  {
    CAM::_0x5A43C76F7FC7BA5F();
  }
  if (GRAPHICS::UI3DSCENE_IS_AVAILABLE())
  {
    if (GRAPHICS::UI3DSCENE_PUSH_PRESET("CELEBRATION_WINNER"))
    {
      if (!PED::IS_PED_INJURED(*uParam1))
      {
        GRAPHICS::_0x98C4FE6EC34154CA("CELEBRATION_WINNER", *uParam1, 0, 0f, 0f, 0f);
        GRAPHICS::_0x98C4FE6EC34154CA("CELEBRATION_WINNER", *uParam1, 1, 0f, 0f, 0f);
        GRAPHICS::_0x98C4FE6EC34154CA("CELEBRATION_WINNER", *uParam1, 2, 0f, 0f, 0f);
      }
      GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(1);
      GRAPHICS::DRAW_RECT(0.5f, 0.5f, 1.5f, 1.5f, 0, 0, 0, 255, 0);
      if (bParam2)
      {
        GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(7);
      }
      GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN_MASKED(*uParam0, uParam0->f_1, 255, 255, 255, 255);
      GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(7);
      GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(uParam0->f_2, 255, 255, 255, 255, 0);
    }
  }
}