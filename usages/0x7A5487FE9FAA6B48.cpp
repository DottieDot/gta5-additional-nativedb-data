// achievement_controller.ysc @ L13687
float func_93(bool bParam0)
{
  float fVar0;
  float fVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  
  if (bParam0)
  {
    fVar0 = SYSTEM::TO_FLOAT(MISC::GET_GAME_TIMER());
    fVar1 = (fVar0 / 1000f);
    return fVar1;
  }
  if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
  {
    iVar2 = NETWORK::GET_NETWORK_TIME();
    fVar3 = SYSTEM::TO_FLOAT(iVar2);
    fVar4 = (fVar3 / 1000f);
    return fVar4;
  }
  return (SYSTEM::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000f);
}