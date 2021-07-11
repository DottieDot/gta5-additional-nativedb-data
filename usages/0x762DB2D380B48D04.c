// epsilon1.c @ L38542
void func_323()
{
  func_280();
  if (func_347())
  {
    func_346(&iLocal_85, 1, 0, 1);
    func_345(&iLocal_88);
    STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_87);
    STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_86);
    OBJECT::_0x762DB2D380B48D04(128);
    if (func_214(PLAYER::PLAYER_PED_ID()))
    {
      TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
      func_334(PLAYER::PLAYER_PED_ID(), 1, 0);
    }
    if (func_214(PLAYER::GET_PLAYERS_LAST_VEHICLE()))
    {
      VEHICLE::SET_VEHICLE_DOORS_LOCKED(PLAYER::GET_PLAYERS_LAST_VEHICLE(), 1);
    }
  }
  func_255(1, 1, 1, 1);
  PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
  func_346(&iLocal_85, 1, 0, 1);
  STREAMING::REMOVE_ANIM_DICT(sLocal_90);
  func_324(&Local_81, 1, 0, 0);
  func_244(0);
  SCRIPT::TERMINATE_THIS_THREAD();
}