// appmpjoblistnew.c @ L275136
void func_3777()
{
  if (Global_2391038 == 0)
  {
    func_3782();
    return;
  }
  if (!func_49(PLAYER::PLAYER_ID(), 1, 1))
  {
    func_3782();
  }
  if (func_553(PLAYER::PLAYER_ID(), 1, 0))
  {
    func_3782();
    return;
  }
  if (!func_553(PLAYER::PLAYER_ID(), 1, 0))
  {
    PLAYER::SET_PLAYER_WANTED_LEVEL_NO_DROP(PLAYER::PLAYER_ID(), Global_2391038, 0);
    PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), 0);
    if (Global_2391039 != 0)
    {
      func_3779(Global_2391039, 8, 3, 0);
    }
    func_3778("RESTORE_WANTED", Global_2391039, -1);
    func_3782();
  }
}