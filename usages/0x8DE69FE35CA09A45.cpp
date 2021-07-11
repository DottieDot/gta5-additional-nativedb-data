// main.ysc @ L157395
int func_1845()
{
  int iVar0;
  int iVar1;
  int iVar2;
  
  if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
  {
    if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
    {
      iVar0 = PLAYER::GET_PLAYER_GROUP(PLAYER::PLAYER_ID());
      PED::GET_GROUP_SIZE(iVar0, &iVar1, &iVar2);
      if (iVar1 > 1 || iVar2 > 0)
      {
        if (PED::IS_PED_IN_ANY_TRAIN(PLAYER::PLAYER_PED_ID()))
        {
          return 1;
        }
      }
    }
  }
  return 0;
}