// am_mp_nightclub.c @ L314044
void func_4786(var uParam0, int iParam1)
{
  int iVar0;
  float fVar1;
  vector3 vVar2;
  vector3 vVar3;
  
  if (!func_10(&(uParam0->f_362.f_10)) || iParam1)
  {
    PAD::_0xCB0360EFEFB2580D(0);
    return;
  }
  iVar0 = func_4302(&(uParam0->f_362.f_10), 0, 0);
  fVar1 = func_2307((SYSTEM::TO_FLOAT(iVar0) / SYSTEM::TO_FLOAT(uParam0->f_362.f_9)), 0f, 1f);
  vVar2 = { func_4790() };
  if (fVar1 >= 1f && !func_4789(uParam0->f_362.f_3, vVar2))
  {
    fVar1 = 0f;
    func_3(&(uParam0->f_362.f_10));
    func_2(&(uParam0->f_362.f_10), 0, 0);
    uParam0->f_362.f_9 = 500;
    uParam0->f_362.f_6 = { uParam0->f_362.f_3 };
    uParam0->f_362.f_3 = { vVar2 };
  }
  vVar3 = { func_4787(uParam0->f_362.f_6, uParam0->f_362.f_3, SYSTEM::POW(fVar1, 1.5f)) };
  PAD::_SET_CONTROL_GROUP_COLOR(0, vVar3.x, vVar3.y, vVar3.z);
  uParam0->f_362 = { vVar3 };
}