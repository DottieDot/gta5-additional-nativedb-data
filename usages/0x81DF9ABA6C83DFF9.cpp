// am_casino_peds.ysc @ L311309
int func_3881()
{
  if ((((HUD::IS_WARNING_MESSAGE_ACTIVE() && HUD::_GET_WARNING_MESSAGE_TITLE_HASH() != joaat("MP_TRUCK_FULLC")) && HUD::_GET_WARNING_MESSAGE_TITLE_HASH() != joaat("MP_TRUCK_FULL1")) && HUD::_GET_WARNING_MESSAGE_TITLE_HASH() != joaat("MP_TRUCK_FULL2")) && HUD::_GET_WARNING_MESSAGE_TITLE_HASH() != 0)
  {
    return 1;
  }
  if (!func_1005())
  {
    return 1;
  }
  if (func_3154() || func_3149())
  {
    return 1;
  }
  return 0;
}