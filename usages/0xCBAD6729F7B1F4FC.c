// main_persistent.c @ L1321
void func_13()
{
  if (MISC::GET_INDEX_OF_CURRENT_LEVEL() == 1)
  {
    VEHICLE::DELETE_ALL_TRAINS();
    func_14(0, 1);
    func_14(1, 0);
    func_14(2, 0);
    func_14(3, 1);
    func_14(4, 0);
    func_14(5, 0);
    func_14(6, 0);
    func_14(7, 0);
    func_14(8, 0);
    func_14(9, 0);
    func_14(10, 0);
    func_14(11, 0);
    VEHICLE::SET_TRAIN_TRACK_SPAWN_FREQUENCY(0, 120000);
    VEHICLE::SET_RANDOM_TRAINS(1);
  }
}