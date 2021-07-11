// chinese1.c @ L110765
void func_575()
{
  func_607();
  if (!func_416())
  {
    STREAMING::LOAD_SCENE(1999.161f, 3057.894f, 46.049f);
  }
  while (!func_606())
  {
    SYSTEM::WAIT(0);
  }
  func_577(0);
  func_406(0, -1, 1);
  if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
  {
    TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
    PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), -668482597, false, 0, 0);
    PLAYER::SIMULATE_PLAYER_INPUT_GAIT(PLAYER::PLAYER_ID(), 1f, 300, 0, 1, 0);
  }
  func_311(0, "Mission start", 0, 0, 0, 1);
  if (CAM::IS_SCREEN_FADED_OUT())
  {
    func_571(1, 0, 0, 1);
  }
  else
  {
    func_393(1, 0, 0, 0, 3000, 1, 1);
  }
  func_576(4000);
  iLocal_462 = 1;
  iLocal_290 = 1;
}