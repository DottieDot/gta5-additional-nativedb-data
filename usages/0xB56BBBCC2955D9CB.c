// agency_heist3a.c @ L126710
void func_815()
{
  func_819(1280.072f, -1731.712f, 51.5989f, 100f, 120f, "AH_3A_EXT");
  if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
  {
    func_817(0, "michael", 2);
    func_817(1, "franklin", 2);
  }
  if (ENTITY::DOES_ENTITY_EXIST(Local_348[0 /*32*/]))
  {
    func_816("gunman_selection_1", func_161(3, iLocal_2088), 0, 1);
  }
  if (ENTITY::DOES_ENTITY_EXIST(Local_348[1 /*32*/]))
  {
    func_816("gunman_selection_2", func_161(3, iLocal_2089), 0, 1);
  }
}