// am_distract_cops.ysc @ L4766
void func_195()
{
  if (func_9(&uLocal_110, 10000, 0))
  {
    if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) < Local_103.f_16)
    {
      PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), Local_103.f_16, 0);
      PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), 0);
    }
    PLAYER::_0xBC9490CA15AEA8FB(PLAYER::PLAYER_ID());
  }
}