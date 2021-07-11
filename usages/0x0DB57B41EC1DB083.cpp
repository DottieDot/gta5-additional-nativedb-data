// fmmc_launcher.ysc @ L301441
void func_3885(var uParam0, bool bParam1)
{
  uParam0->f_936 = 0;
  uParam0->f_938 = 0;
  if (CAM::DOES_CAM_EXIST(uParam0->f_930))
  {
    CAM::DESTROY_CAM(uParam0->f_930, 0);
  }
  if (CAM::DOES_CAM_EXIST(Global_2448961.f_681))
  {
    CAM::DESTROY_CAM(Global_2448961.f_681, 0);
  }
  if (bParam1)
  {
    CAM::RENDER_SCRIPT_CAMS(false, false, 3000, 1, 0, 0);
  }
  if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_1175))
  {
    OBJECT::DELETE_OBJECT(&(uParam0->f_1175));
  }
  if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_1176))
  {
    OBJECT::DELETE_OBJECT(&(uParam0->f_1176));
  }
  STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(WEAPON::GET_WEAPON_COMPONENT_TYPE_MODEL(joaat("COMPONENT_PISTOL_CLIP_01")));
  if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_1177))
  {
    PED::DELETE_PED(&(uParam0->f_1177));
  }
  func_3862(162);
}