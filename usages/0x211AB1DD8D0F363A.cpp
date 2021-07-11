// fm_mission_controller.ysc @ L723584
void func_12001(int iParam0, var uParam1)
{
  DECORATOR::DECOR_SET_INT(iParam0, func_12002(0), *uParam1);
  DECORATOR::DECOR_SET_INT(iParam0, func_12002(1), uParam1->f_1);
  DECORATOR::DECOR_SET_INT(iParam0, func_12002(2), uParam1->f_2);
  DECORATOR::DECOR_SET_FLOAT(iParam0, func_12002(3), uParam1->f_3);
  DECORATOR::DECOR_SET_FLOAT(iParam0, func_12002(4), uParam1->f_4);
  DECORATOR::DECOR_SET_INT(iParam0, func_12002(5), uParam1->f_5);
  DECORATOR::DECOR_SET_INT(iParam0, func_12002(6), uParam1->f_6);
}