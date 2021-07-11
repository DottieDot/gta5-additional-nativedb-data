// grid_arcade_cabinet.ysc @ L10062
void func_344(struct<21> Param0)
{
  func_350(4, Param0);
  func_348(0, -1, 0);
  func_347();
  func_346();
  NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&Local_231, 201);
  NETWORK::_0xEA8C0DDB10E2822A(&iLocal_267, 5);
  NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Local_268, 37);
  NETWORK::_0xD6D7478CA62B8D41(&Local_269, 65);
  if (!func_345())
  {
    func_13();
  }
  Local_268[NETWORK::PARTICIPANT_ID_TO_INT() /*9*/].f_6 = Param0.f_19;
}