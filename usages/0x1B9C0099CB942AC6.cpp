// act_cinema.ysc @ L90526
void func_475(var uParam0, int iParam1)
{
  if (MISC::IS_BIT_SET(Global_1323611[iParam1 /*141*/].f_102, 2))
  {
    func_492(*uParam0);
  }
  if (MISC::IS_BIT_SET(Global_1323611[iParam1 /*141*/].f_102, 3))
  {
    func_491();
    MISC::SET_BIT(&(Global_1323611[iParam1 /*141*/].f_102), 3);
    func_490(*uParam0, 1, 0);
    func_476(88, 3, 0);
  }
  AUDIO::SET_VEH_RADIO_STATION(*uParam0, &(Global_1323611[iParam1 /*141*/].f_121));
  MISC::CLEAR_BIT(&(Global_1323611[iParam1 /*141*/].f_102), 14);
}