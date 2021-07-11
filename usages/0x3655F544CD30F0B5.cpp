// agency_heist3a.ysc @ L111351
void func_553(var uParam0, float fParam1)
{
  uParam0->f_91 = PHYSICS::GET_ROPE_VERTEX_COUNT(uParam0->f_5);
  uParam0->f_89 = 0;
  uParam0->f_90 = uParam0->f_89 + 1;
  uParam0->f_30 = fParam1;
  uParam0->f_31 = (fParam1 / IntToFloat((uParam0->f_91 - 1)));
}