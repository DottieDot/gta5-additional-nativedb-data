// agency_heist3a.c @ L140489
void func_1037()
{
  if (func_729())
  {
    PAD::DISABLE_CONTROL_ACTION(0, 21, 1);
    PAD::DISABLE_CONTROL_ACTION(0, 22, 1);
    PAD::DISABLE_CONTROL_ACTION(0, 44, 1);
    PAD::DISABLE_CONTROL_ACTION(0, 36, 1);
    PAD::DISABLE_CONTROL_ACTION(0, 140, 1);
    PAD::DISABLE_CONTROL_ACTION(0, 141, 1);
    PED::SET_PED_STEALTH_MOVEMENT(PLAYER::PLAYER_PED_ID(), 0, 0);
    PED::SET_PED_USING_ACTION_MODE(PLAYER::PLAYER_PED_ID(), false, -1, 0);
    func_1038();
  }
}