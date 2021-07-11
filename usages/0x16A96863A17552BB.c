// am_mp_property_ext.c @ L76101
void func_366(var uParam0)
{
  int iVar0;
  float fVar1;
  float fVar2;
  vector3 vVar3;
  
  iVar0 = NETWORK::GET_TIME_DIFFERENCE(uParam0->f_65, NETWORK::GET_NETWORK_TIME());
  fVar1 = (SYSTEM::TO_FLOAT(iVar0) * (0.83f / 1000f));
  fVar2 = (53f + fVar1);
  vVar3 = { func_367(fVar2, uParam0->f_2, uParam0->f_66) };
  CAM::SET_CAM_COORD(uParam0->f_18, vVar3);
  CAM::POINT_CAM_AT_COORD(uParam0->f_18, uParam0->f_2 + Vector(1f, 0f, 0f));
  CAM::SET_CAM_FOV(uParam0->f_18, 15f);
  CAM::SET_USE_HI_DOF();
  CAM::SET_CAM_USE_SHALLOW_DOF_MODE(uParam0->f_18, 1);
  CAM::SET_CAM_DOF_PLANES(uParam0->f_18, 0f, 0f, 27.6f, 0f);
  CAM::SET_CAM_DOF_STRENGTH(uParam0->f_18, 0.4f);
}