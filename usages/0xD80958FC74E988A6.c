// abigail1.c @ L29588
void func_156()
{
  int iVar0;
  
  if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
  {
    if (func_151(Global_111560.f_2358.f_539.f_4321) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
    {
      iVar0 = func_150(PLAYER::PLAYER_PED_ID());
      if (func_153(iVar0) && (!func_92(14) || Global_110511))
      {
        if (Global_111560.f_2358.f_539.f_4321 != iVar0 && func_153(Global_111560.f_2358.f_539.f_4321))
        {
          Global_111560.f_2358.f_539.f_4322 = Global_111560.f_2358.f_539.f_4321;
        }
        Global_111560.f_2358.f_539.f_4323 = iVar0;
        Global_111560.f_2358.f_539.f_4321 = iVar0;
        return;
      }
    }
    else
    {
      if (Global_111560.f_2358.f_539.f_4321 != 145)
      {
        Global_111560.f_2358.f_539.f_4323 = Global_111560.f_2358.f_539.f_4321;
      }
      return;
    }
  }
  Global_111560.f_2358.f_539.f_4321 = 145;
}