// agency_heist3a.ysc @ L139679
void func_1019(var uParam0, int iParam1)
{
  CAM::SET_CAM_NEAR_DOF(uParam0->f_10[iParam1 /*57*/].f_1, uParam0->f_10[iParam1 /*57*/].f_47);
  CAM::SET_CAM_FAR_DOF(uParam0->f_10[iParam1 /*57*/].f_1, uParam0->f_10[iParam1 /*57*/].f_47.f_1);
  CAM::SET_CAM_DOF_STRENGTH(uParam0->f_10[iParam1 /*57*/].f_1, uParam0->f_10[iParam1 /*57*/].f_47.f_2);
}