// am_mp_arcade.c @ L285663
void func_4079()
{
  if ((func_5039(PLAYER::PLAYER_ID(), 1, 1) && PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID())) && !func_1541(PLAYER::PLAYER_ID()))
  {
    func_265();
    if (!Global_1312417.f_6)
    {
      MISC::SET_BIT(&(Local_826[PLAYER::PLAYER_ID() /*6*/]), 0);
    }
    else
    {
      MISC::CLEAR_BIT(&(Local_826[PLAYER::PLAYER_ID() /*6*/]), 0);
    }
  }
  else
  {
    MISC::CLEAR_BIT(&(Local_826[PLAYER::PLAYER_ID() /*6*/]), 0);
  }
  if (func_4080(PLAYER::PLAYER_ID()))
  {
    HUD::DISABLE_FRONTEND_THIS_FRAME();
    HUD::SUPPRESS_FRONTEND_RENDERING_THIS_FRAME();
    if (!HUD::IS_WARNING_MESSAGE_ACTIVE())
    {
      PAD::SET_INPUT_EXCLUSIVE(0, 200);
      PAD::SET_INPUT_EXCLUSIVE(2, 200);
    }
    PAD::DISABLE_CONTROL_ACTION(0, 200, 1);
    PAD::DISABLE_CONTROL_ACTION(2, 200, 1);
  }
}