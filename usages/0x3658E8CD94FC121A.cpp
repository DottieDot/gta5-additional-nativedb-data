// sclub_front_bouncer.ysc @ L3612
bool func_135()
{
  if (!bLocal_272)
  {
    return 1;
  }
  return (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iLocal_101) && NETWORK::NETWORK_GET_NUM_SCRIPT_PARTICIPANTS("sclub_front_bouncer", -1, 0) == 1);
}