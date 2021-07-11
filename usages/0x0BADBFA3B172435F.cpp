// act_cinema.ysc @ L1791
void func_34(var uParam0, vector3 vParam1)
{
  float fVar0;
  float fVar1;
  vector3 vVar2;
  
  fVar0 = SYSTEM::COS(vParam1.x);
  fVar1 = SYSTEM::SIN(vParam1.x);
  vVar2.x = *uParam0;
  vVar2.y = ((fVar0 * uParam0->f_1) - (fVar1 * uParam0->f_2));
  vVar2.z = ((fVar1 * uParam0->f_1) + (fVar0 * uParam0->f_2));
  *uParam0 = { vVar2 };
  fVar0 = SYSTEM::COS(vParam1.y);
  fVar1 = SYSTEM::SIN(vParam1.y);
  vVar2.x = ((fVar0 * *uParam0) + (fVar1 * uParam0->f_2));
  vVar2.y = uParam0->f_1;
  vVar2.z = ((fVar0 * uParam0->f_2) - (fVar1 * *uParam0));
  *uParam0 = { vVar2 };
  fVar0 = SYSTEM::COS(vParam1.z);
  fVar1 = SYSTEM::SIN(vParam1.z);
  vVar2.x = ((fVar0 * *uParam0) - (fVar1 * uParam0->f_1));
  vVar2.y = ((fVar1 * *uParam0) + (fVar0 * uParam0->f_1));
  vVar2.z = uParam0->f_2;
  *uParam0 = { vVar2 };
}