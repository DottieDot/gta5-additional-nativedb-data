// fm_bj_race_controler.ysc @ L287062
void func_3958(int iParam0, int iParam1)
{
  if (!ENTITY::DOES_ENTITY_EXIST(iParam0) || !NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iParam0))
  {
    return;
  }
  if ((Global_4456448.f_53764[iParam1] == 1 || func_3959(iParam1, 0)) && ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("stromberg"))
  {
    if (!VEHICLE::_GET_IS_SUBMARINE_VEHICLE_TRANSFORMED(iParam0))
    {
      VEHICLE::_TRANSFORM_VEHICLE_TO_SUBMARINE(iParam0, 1);
    }
    PAD::DISABLE_CONTROL_ACTION(0, 101, 1);
    PAD::DISABLE_CONTROL_ACTION(0, 357, 1);
  }
}