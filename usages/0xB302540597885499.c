// agency_heist2.c @ L7137
void func_145()
{
  Global_95196[0] = iLocal_78;
  PLAYER::CLEAR_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
  func_102();
  func_52();
  if (!func_126(0))
  {
    func_730(6, 1);
    func_146(1, 0);
  }
  else
  {
    func_146(0, 0);
  }
  func_727();
}