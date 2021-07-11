// am_challenges.c @ L22544
char* func_660()
{
  if (NETWORK::NETWORK_SESSION_IS_CLOSED_FRIENDS())
  {
    return "HUD_LBD_FMF";
  }
  if (NETWORK::NETWORK_SESSION_IS_CLOSED_CREW())
  {
    return "HUD_LBD_FMC";
  }
  if (NETWORK::NETWORK_SESSION_IS_SOLO())
  {
    return "HUD_LBD_FMS";
  }
  if (NETWORK::NETWORK_SESSION_IS_PRIVATE())
  {
    return "HUD_LBD_FMI";
  }
  return "HUD_LBD_FMP";
}