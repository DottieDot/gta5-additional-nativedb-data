// agency_heist1.c @ L115927
void func_671(int iParam0, bool bParam1, int iParam2)
{
  int iVar0;
  
  if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*iParam0))
  {
    if (bParam1)
    {
      MOBILE::GET_MOBILE_PHONE_RENDER_ID(&iVar0);
    }
    else
    {
      if (!HUD::IS_NAMED_RENDERTARGET_REGISTERED("npcphone"))
      {
        HUD::REGISTER_NAMED_RENDERTARGET("npcphone", 0);
        HUD::LINK_NAMED_RENDERTARGET(joaat("prop_npc_phone"));
      }
      iVar0 = HUD::GET_NAMED_RENDERTARGET_RENDER_ID("npcphone");
    }
    HUD::SET_TEXT_RENDER_ID(iVar0);
    GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam0, "DISPLAY_VIEW");
    GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam2);
    GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
    GRAPHICS::DRAW_SCALEFORM_MOVIE(*iParam0, Global_19406, Global_19407, Global_19408, Global_19409, 255, 255, 255, 255, 0);
  }
}