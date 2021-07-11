// director_mode.c @ L15551
void func_189()
{
  if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
  {
    func_191();
    if (func_190())
    {
      PED::SET_PED_CAN_PLAY_GESTURE_ANIMS(PLAYER::PLAYER_PED_ID(), 0);
    }
  }
}