// agency_heist3a.ysc @ L128907
int func_867()
{
  RECORDING::_DISABLE_ROCKSTAR_EDITOR_CAMERA_CHANGES();
  vLocal_2159 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
  if (func_893())
  {
    iLocal_50 = 21;
    return 1;
  }
  func_892();
  func_891();
  func_888();
  func_541();
  func_879();
  func_842();
  func_870();
  func_868();
  func_545();
  return 0;
}