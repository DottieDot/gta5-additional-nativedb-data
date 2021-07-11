// agency_heist3a.ysc @ L112669
void func_575(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12)
{
  uParam0->f_39 = iParam1;
  uParam0->f_40 = iParam2;
  uParam0->f_41 = iParam3;
  uParam0->f_42 = iParam4;
  uParam0->f_43 = iParam5;
  uParam0->f_44 = iParam6;
  uParam0->f_45 = iParam7;
  uParam0->f_46 = iParam8;
  uParam0->f_47 = iParam9;
  uParam0->f_48 = iParam10;
  uParam0->f_49 = iParam11;
  uParam0->f_51 = iParam12;
  if (CAM::DOES_CAM_EXIST(uParam0->f_4))
  {
    CAM::SET_CAM_FOV(uParam0->f_4, uParam0->f_51);
  }
}