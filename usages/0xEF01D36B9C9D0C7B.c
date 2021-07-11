// fmmc_launcher.c @ L455615
void func_6663(var uParam0, var uParam1)
{
  func_3875(1, 1);
  func_4167(1);
  func_6664();
  if (HUD::IS_PAUSE_MENU_ACTIVE())
  {
    func_6573(0);
    if (func_103(8))
    {
      func_3862(8);
    }
    else if (HUD::GET_CURRENT_FRONTEND_MENU_VERSION() != -545108805)
    {
      HUD::_0x77F16B447824DA6C(127);
    }
  }
  else
  {
    HUD::ACTIVATE_FRONTEND_MENU(-545108805, 0, -1);
  }
  if (!func_103(74))
  {
    func_3879(&(Global_2448961.f_680), uParam1->f_14, 1, 1, 1);
    func_6381(uParam0, uParam0->f_936, func_6685(uParam1), uParam1->f_14, uParam1->f_79, 0);
    if (uParam0->f_931 == 9)
    {
      func_3941(69);
    }
  }
  func_6648(uParam0, *uParam1);
  func_6380(uParam0);
}