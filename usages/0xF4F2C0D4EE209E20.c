// am_mp_arcade.c @ L281906
void func_3977(var uParam0)
{
  switch (*uParam0)
  {
    case 2:
    case 3:
    case 1:
      break;
    
    case 5:
    case 6:
    case 7:
    case 4:
    case 9:
    case 10:
    case 16:
    case 17:
    case 18:
    case 12:
      CAM::INVALIDATE_IDLE_CAM();
      HUD::HUD_FORCE_WEAPON_WHEEL(0);
      HUD::DISPLAY_AMMO_THIS_FRAME(0);
      HUD::HIDE_HUD_COMPONENT_THIS_FRAME(19);
      HUD::HIDE_HUD_COMPONENT_THIS_FRAME(2);
      HUD::_HUD_WEAPON_WHEEL_IGNORE_SELECTION();
      func_3834(1);
      func_541(0);
      func_265();
      break;
  }
}