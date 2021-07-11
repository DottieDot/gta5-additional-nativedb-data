// business_battles_sell.ysc @ L324798
void func_4890(int iParam0, int iParam1)
{
  vector3 vVar0;
  float fVar1;
  
  if (!func_4891(iParam0) || func_680() != iLocal_217)
  {
    return;
  }
  vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam1, false) };
  fVar1 = 500f;
  switch (func_5579())
  {
    case 5:
      fVar1 = 115f;
      vVar0 = { func_465(0, func_5579(), func_35(), func_134()) };
      break;
  }
  if (SYSTEM::VDIST2(vVar0, vLocal_960) > (550f * 550f))
  {
    if (iLocal_961 != -1)
    {
      MISC::REMOVE_POP_MULTIPLIER_SPHERE(iLocal_961, 0);
    }
    vLocal_960 = { vVar0 };
    iLocal_961 = MISC::ADD_POP_MULTIPLIER_SPHERE(vLocal_960, fVar1, 1f, 0.02f, 0, 1);
  }
}