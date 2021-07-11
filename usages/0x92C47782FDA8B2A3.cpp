// am_mp_armory_truck.ysc @ L261090
void func_3886(var uParam0, var uParam1)
{
  int iVar0;
  
  iVar0 = 0;
  while (iVar0 <= (*uParam1 - 1))
  {
    ENTITY::CREATE_MODEL_SWAP((uParam0[iVar0 /*8*/])->f_2, 1f, (uParam0[iVar0 /*8*/])->f_5, (uParam0[iVar0 /*8*/])->f_1, 1);
    iVar0++;
  }
}