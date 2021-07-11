// fm_horde_controler.c @ L198135
void func_2229(int iParam0)
{
  if (func_2230())
  {
    if (!VEHICLE::IS_VEHICLE_SEARCHLIGHT_ON(NETWORK::NET_TO_VEH(iParam0)))
    {
      VEHICLE::SET_VEHICLE_SEARCHLIGHT(NETWORK::NET_TO_VEH(iParam0), 1, 0);
    }
  }
  else if (VEHICLE::IS_VEHICLE_SEARCHLIGHT_ON(NETWORK::NET_TO_VEH(iParam0)))
  {
    VEHICLE::SET_VEHICLE_SEARCHLIGHT(NETWORK::NET_TO_VEH(iParam0), 0, 0);
  }
}