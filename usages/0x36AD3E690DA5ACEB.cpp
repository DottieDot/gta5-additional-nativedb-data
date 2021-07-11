// agency_heist3a.ysc @ L139137
char* func_1002()
{
  char* sVar0;
  
  sVar0 = "";
  if (GRAPHICS::ANIMPOSTFX_IS_RUNNING("SwitchSceneMichael"))
  {
    sVar0 = "SwitchSceneMichael";
  }
  else if (GRAPHICS::ANIMPOSTFX_IS_RUNNING("SwitchSceneFranklin"))
  {
    sVar0 = "SwitchSceneFranklin";
  }
  else if (GRAPHICS::ANIMPOSTFX_IS_RUNNING("SwitchSceneTrevor"))
  {
    sVar0 = "SwitchSceneTrevor";
  }
  else if (GRAPHICS::ANIMPOSTFX_IS_RUNNING("SwitchSceneNeutral"))
  {
    sVar0 = "SwitchSceneNeutral";
  }
  else if (GRAPHICS::ANIMPOSTFX_IS_RUNNING("SwitchHUDIn"))
  {
    sVar0 = "SwitchHUDIn";
  }
  return sVar0;
}