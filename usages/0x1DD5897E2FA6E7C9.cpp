// ob_sofa_michael.ysc @ L1752
int func_22()
{
  if (PAD::IS_CONTROL_JUST_PRESSED(2, 222))
  {
    if (func_43("TV_HLP4") || func_43("TV_HLP3"))
    {
      HUD::CLEAR_HELP(1);
    }
    if (PED::GET_PED_STEALTH_MOVEMENT(PLAYER::PLAYER_PED_ID()))
    {
      PED::SET_PED_STEALTH_MOVEMENT(PLAYER::PLAYER_PED_ID(), 0, 0);
    }
    func_23();
    PLAYER::PLAYER_DETACH_VIRTUAL_BOUND();
    PLAYER::SET_PLAYER_CLOTH_PACKAGE_INDEX(0);
    iLocal_308 = 0;
    if (iLocal_324)
    {
      PAD::_RESET_INPUT_MAPPING_SCHEME();
      iLocal_324 = 0;
    }
    iLocal_306 = 5;
    return 1;
  }
  return 0;
}