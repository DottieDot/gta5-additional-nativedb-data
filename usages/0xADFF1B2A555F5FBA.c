// am_armwrestling.c @ L43245
void func_256()
{
  if (!func_257(PLAYER::PLAYER_ID(), 0, 0))
  {
    CAM::_DISABLE_VEHICLE_FIRST_PERSON_CAM_THIS_FRAME();
    CAM::_DISABLE_FIRST_PERSON_CAM_THIS_FRAME();
  }
}