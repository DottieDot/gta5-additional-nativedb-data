// am_casino_peds.ysc @ L229354
void func_2236(var uParam0)
{
  if (uParam0->f_227 > 0)
  {
    if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uParam0->f_23))
    {
      PED::DETACH_SYNCHRONIZED_SCENE(uParam0->f_23);
    }
    if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_2))
    {
      PED::DELETE_PED(&(uParam0->f_2));
    }
    CAM::RENDER_SCRIPT_CAMS(false, false, 3000, 1, 0, 0);
    if (CAM::DOES_CAM_EXIST(uParam0->f_7))
    {
      CAM::DESTROY_CAM(uParam0->f_7, 0);
    }
    func_992(1, 0, 0, 1);
    func_990(0, 1, 1, 0);
    Global_1676879.f_446 = 0;
    uParam0->f_227 = 0;
  }
}