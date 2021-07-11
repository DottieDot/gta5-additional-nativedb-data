// act_cinema.c @ L113733
void func_957(int iParam0, int iParam1, bool bParam2)
{
  if (CAM::DOES_CAM_EXIST(*iParam0))
  {
    if (bParam2)
    {
      CAM::RENDER_SCRIPT_CAMS(false, false, 3000, 1, iParam1, 0);
    }
    if (CAM::IS_CAM_ACTIVE(*iParam0))
    {
      CAM::SET_CAM_ACTIVE(*iParam0, false);
    }
    CAM::DESTROY_CAM(*iParam0, iParam1);
  }
  if (iParam0->f_23)
  {
    HUD::UNLOCK_MINIMAP_ANGLE();
    iParam0->f_23 = 0;
  }
  iParam0->f_1 = { 0f, 0f, 0f };
  iParam0->f_4 = { 0f, 0f, 0f };
  iParam0->f_7 = 0f;
  iParam0->f_20 = 0;
  iParam0->f_21 = 0;
  iParam0->f_22 = 0;
  iParam0->f_8 = { 0f, 0f, 0f };
  iParam0->f_11 = { 0f, 0f, 0f };
  iParam0->f_14 = { 0f, 0f, 0f };
  iParam0->f_17 = 0f;
  iParam0->f_18 = 0f;
}