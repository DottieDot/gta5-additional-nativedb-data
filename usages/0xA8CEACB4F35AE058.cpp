// am_mp_nightclub.ysc @ L313976
void func_4781(var uParam0)
{
  if (func_9(&(uParam0->f_374.f_10), 45000, 0))
  {
    func_3(&(uParam0->f_374.f_8));
    func_2(&(uParam0->f_374.f_8), 0, 0);
  }
  if ((((((uParam0->f_242 > 0f || uParam0->f_2 == 1) || uParam0->f_1 == 6) || uParam0->f_1 == 7) || PAD::IS_CONTROL_PRESSED(0, 226)) || PAD::IS_CONTROL_PRESSED(0, 227)) || SYSTEM::VMAG2(PAD::GET_CONTROL_NORMAL(0, 218), PAD::GET_CONTROL_NORMAL(0, 219), 0f) > 0.3f)
  {
    func_3(&(uParam0->f_374.f_10));
  }
  if (func_9(&(uParam0->f_374.f_8), 60000, 0))
  {
    func_4782(uParam0);
    func_3(&(uParam0->f_374.f_8));
    func_2(&(uParam0->f_374.f_8), 0, 0);
  }
}