// fm_mission_controller.ysc @ L739659
void func_12160(int iParam0, int iParam1, char* sParam2, char* sParam3)
{
  struct<21> Var0;
  struct<20> Var1;
  
  Var0.f_4 = 1065353216;
  Var0.f_5 = 1065353216;
  Var0.f_9 = 1065353216;
  Var0.f_10 = 1065353216;
  Var0.f_14 = 1065353216;
  Var0.f_15 = 1065353216;
  Var0.f_17 = 1040187392;
  Var0.f_18 = 1040187392;
  Var0.f_19 = -1;
  Var1.f_4 = 1065353216;
  Var1.f_5 = 1065353216;
  Var1.f_9 = 1065353216;
  Var1.f_10 = 1065353216;
  Var1.f_14 = 1065353216;
  Var1.f_15 = 1065353216;
  Var1.f_17 = 1040187392;
  Var1.f_18 = 1040187392;
  Var1.f_19 = -1;
  Var0.f_1 = sParam2;
  Var0.f_2 = sParam3;
  Var0 = 1;
  Var0.f_20 = 49;
  Var0.f_16 = MISC::GET_HASH_KEY("BONEMASK_UPPERONLY");
  TASK::TASK_SCRIPTED_ANIMATION(iParam1, &Var0, &Var1, &Var1, 1040187392, 1040187392);
}