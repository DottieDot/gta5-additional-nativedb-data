// am_mp_arcade.c @ L11157
int func_129()
{
  int iVar0;
  int iVar1;
  int iVar2;
  
  iVar0 = 0;
  while (iVar0 < 32)
  {
    iVar1 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
    if (func_5039(iVar1, 1, 1) && !NETWORK::NETWORK_IS_PLAYER_CONCEALED(iVar1))
    {
      iVar2 = PLAYER::GET_PLAYER_PED(iVar1);
      if (ENTITY::DOES_ENTITY_EXIST(iVar2))
      {
        if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iVar2, 2724.799f, -380.9069f, -49.98798f, 2724.998f, -390.5967f, -47.41036f, 5.75f, 0, true, 0))
        {
          return 1;
        }
      }
    }
    iVar0++;
  }
  return 0;
}