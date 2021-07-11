// agency_heist1.ysc @ L115913
void func_669()
{
  if (HUD::IS_NAMED_RENDERTARGET_REGISTERED("npcphone"))
  {
    HUD::RELEASE_NAMED_RENDERTARGET("npcphone");
  }
}