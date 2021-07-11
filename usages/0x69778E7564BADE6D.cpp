// am_boat_taxi.ysc @ L2727
int func_38()
{
  if (NETWORK::CAN_REGISTER_MISSION_ENTITIES(1, 1, 0, 0))
  {
    if (func_64(joaat("dinghy2")) && func_64(joaat("s_m_y_blackops_01")))
    {
      if (func_41() && func_39())
      {
        return 1;
      }
    }
  }
  return 0;
}