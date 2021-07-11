// act_cinema.ysc @ L4047
int func_100()
{
  int iVar0;
  int iVar1;
  float fVar2;
  vector3 vVar3;
  
  vVar3 = { func_89(PLAYER::PLAYER_ID()) };
  iVar0 = 0;
  while (iVar0 < 32)
  {
    iVar1 = iVar0;
    if (func_35(iVar1, 1, 1))
    {
      if (PED::IS_PED_ON_FOOT(PLAYER::GET_PLAYER_PED(iVar1)))
      {
        if (!iVar1 == PLAYER::PLAYER_ID())
        {
          if (NETWORK::_NETWORK_IS_PLAYER_EQUAL_TO_INDEX(PLAYER::PLAYER_ID(), iVar1))
          {
            fVar2 = SYSTEM::VMAG(func_89(iVar1) - vVar3);
            if (fVar2 < 0.2f)
            {
              return 1;
            }
          }
        }
      }
    }
    iVar0++;
  }
  return 0;
}