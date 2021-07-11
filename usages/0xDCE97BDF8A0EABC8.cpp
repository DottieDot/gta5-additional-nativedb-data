// gb_gunrunning_delivery.ysc @ L132525
void func_1308(int iParam0, var uParam1)
{
  struct<6> Var0;
  
  if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_28[0]))
  {
    if (func_21(uParam1->f_28[0]))
    {
      Var0 = { func_1311(func_1066(uParam1), 2, 0) };
    }
    else
    {
      Var0 = { func_1058(func_1066(uParam1), 2, 0) };
    }
    VEHICLE::_0xDCE97BDF8A0EABC8(uParam1->f_28[0], 0);
    func_1310(&(uParam1->f_28[0]), Var0);
  }
  if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_1))
  {
    if (func_21(uParam1->f_1))
    {
      func_1309(&(uParam1->f_1), &(uParam1->f_28[1]));
      if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_28[1]))
      {
        VEHICLE::ATTACH_VEHICLE_TO_TRAILER(uParam1->f_28[0], uParam1->f_28[1], 1065353216);
      }
    }
  }
}