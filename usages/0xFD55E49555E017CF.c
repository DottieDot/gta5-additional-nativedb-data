// am_mp_nightclub.c @ L319657
void func_4921(var uParam0)
{
  if (func_3898(22105, -1, -1))
  {
    MISC::SET_BIT(&(uParam0->f_4), 13);
    func_3(&(uParam0->f_255));
  }
  else
  {
    func_3(&(uParam0->f_255));
    func_2(&(uParam0->f_255), 0, 0);
    func_3896(22105, 1, -1, 1);
    MISC::CLEAR_BIT(&(uParam0->f_4), 13);
  }
  uParam0->f_504 = 100;
  func_2551();
  func_4899(uParam0, 1056964608, 1056964608, 0);
  func_4914(uParam0);
  MISC::CLEAR_BIT(&(uParam0->f_4), 15);
  CAM::SHAKE_GAMEPLAY_CAM("CLUB_DANCE_SHAKE", 0.3f);
  func_4817(uParam0, 0);
  func_4897(uParam0);
  uParam0->f_508 = func_4844();
  uParam0->f_509 = func_4845();
  if (uParam0->f_509 != 2 || func_4819(uParam0->f_508) == 0)
  {
    func_4802(2, 30);
  }
  func_4801(uParam0, 4);
}