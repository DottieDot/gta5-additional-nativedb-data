// am_mp_arcade.c @ L294448
void func_4172()
{
  int iVar0;
  int iVar1;
  int iVar2;
  vector3 vVar3;
  
  iVar1 = 0;
  while (iVar1 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
  {
    if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar1)))
    {
      iVar0 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar1));
      if (func_5039(iVar0, 1, 1))
      {
        iVar2 = PLAYER::GET_PLAYER_PED(iVar0);
        if (func_128(iVar2))
        {
          vVar3 = { ENTITY::GET_ENTITY_COORDS(iVar2, true) };
          if (vVar3.z <= -52.8f)
          {
            PED::_0xD33DAA36272177C4(iVar2);
          }
        }
      }
    }
    iVar1++;
  }
}