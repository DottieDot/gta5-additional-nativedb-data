// am_mp_arc_cab_manager.ysc @ L89564
void func_590(var uParam0)
{
  vector3 vVar0;
  vector3 vVar1;
  float fVar2;
  
  if (CAM::DOES_CAM_EXIST(uParam0->f_529.f_46))
  {
    func_592(uParam0->f_529.f_40, &vVar0, &vVar1, &fVar2);
    if (!func_591(uParam0))
    {
      if (!CAM::IS_CAM_INTERPOLATING(uParam0->f_529.f_46))
      {
        CAM::SET_CAM_PARAMS(uParam0->f_529.f_46, vVar0, vVar1, fVar2, 0, 1, 1, 2);
      }
    }
    else if (!CAM::IS_CAM_INTERPOLATING(uParam0->f_529.f_46))
    {
      if (!func_549(uParam0, 12))
      {
        func_592(uParam0->f_529.f_41, &vVar0, &vVar1, &fVar2);
        CAM::SET_CAM_PARAMS(uParam0->f_529.f_46, vVar0, vVar1, fVar2, 0, 1, 1, 2);
        func_592(uParam0->f_529.f_40, &vVar0, &vVar1, &fVar2);
        CAM::SET_CAM_PARAMS(uParam0->f_529.f_46, vVar0, vVar1, fVar2, 250, 1, 1, 2);
        func_558(uParam0, 12);
      }
    }
  }
}