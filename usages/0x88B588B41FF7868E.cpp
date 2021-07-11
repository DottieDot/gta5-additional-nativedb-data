// fm_maintain_transition_players.ysc @ L849
char* func_8()
{
  if (LOADINGSCREEN::_LOADINGSCREEN_GET_LOAD_FREEMODE())
  {
    return func_10();
  }
  if (NETWORK::_0x88B588B41FF7868E())
  {
    return func_10();
  }
  if (NETWORK::_0x67FC09BC554A75E5())
  {
    return func_10();
  }
  switch (func_9())
  {
    case 0:
      return func_10();
      break;
    
    case 2:
      return "Creator";
      break;
  }
  return "";
}