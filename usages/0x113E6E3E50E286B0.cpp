// am_mp_defunct_base.ysc @ L401684
void func_6153()
{
  Local_1791.f_489.f_56 = 0;
  if (HUD::IS_NAMED_RENDERTARGET_REGISTERED("crew_emblem_base"))
  {
    HUD::RELEASE_NAMED_RENDERTARGET("crew_emblem_base");
  }
  Local_1791.f_489.f_2 = -1;
  Local_1791.f_489 = 0;
  Local_1791.f_489.f_54 = 0;
  Local_1791.f_489.f_55 = 0;
  NETWORK::NETWORK_CLAN_RELEASE_EMBLEM(Local_1791.f_489.f_1);
  if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Local_1791.f_489.f_3)))
  {
    GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED(&(Local_1791.f_489.f_3));
  }
}