// am_mp_nightclub.c @ L314593
void func_4818(var uParam0)
{
  float fVar0;
  var uVar1;
  int iVar2;
  
  fVar0 = 0f;
  if (uParam0->f_397.f_67 == 1)
  {
    fVar0 = 0f;
  }
  if (uParam0->f_397.f_67 == 0)
  {
    func_4821(uParam0->f_397.f_68, uParam0->f_397.f_69, 0, 0, 1, 0, 0, fVar0, 1, 0, 0, 0);
    func_3(&(uParam0->f_259));
    func_2(&(uParam0->f_259), 0, 0);
    uParam0->f_248 = 0;
    func_4801(uParam0, 6);
  }
  else
  {
    uVar1 = func_4820();
    iVar2 = func_4819(uParam0->f_397.f_69);
    TASK::_0x8423541E8B3A1589(PLAYER::PLAYER_PED_ID(), iVar2, uVar1);
    uParam0->f_397.f_71 = 0;
    func_4801(uParam0, 7);
  }
}