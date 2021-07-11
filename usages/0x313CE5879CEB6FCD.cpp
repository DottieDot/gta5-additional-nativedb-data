// act_cinema.ysc @ L93235
int func_543(var uParam0, bool bParam1)
{
  var uVar0;
  vector3 vVar1;
  float fVar2;
  
  if (func_549(*uParam0))
  {
    if (bParam1)
    {
      vVar1 = { *uParam0 };
      fVar2 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.01f, 360f);
      func_548(&vVar1, Global_2405071.f_585, Global_2405071.f_588, 1036831949, 0, fVar2);
      if (func_544(vVar1, &uVar0) || func_549(vVar1))
      {
        vVar1 = { *uParam0 };
        func_548(&vVar1, Global_2405071.f_585, Global_2405071.f_588, 1036831949, 1, fVar2);
      }
      *uParam0 = { vVar1 };
    }
  }
  return 0;
}