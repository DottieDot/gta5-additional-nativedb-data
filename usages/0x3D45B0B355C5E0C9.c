// am_mp_nightclub.c @ L319490
void func_4911(var uParam0)
{
  struct<2> Var0;
  struct<10> Var1;
  var uVar2;
  
  func_4902(uParam0, *uParam0, &Var0);
  Var1.f_6 = -1082130432;
  Var1.f_9 = -1082130432;
  Var1.f_1 = func_4913();
  Var1 = MISC::GET_HASH_KEY(Var0.f_1);
  uVar2 = func_4912();
  TASK::_TASK_MOVE_NETWORK_BY_NAME_WITH_INIT_PARAMS(PLAYER::PLAYER_PED_ID(), uVar2, &Var1, 0.5f, 0, 0, 12);
}