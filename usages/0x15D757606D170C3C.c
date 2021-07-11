// am_mp_arena_garage.c @ L291552
void func_4209(var uParam0)
{
  int iVar0;
  
  iVar0 = NETWORK::_NETWORK_CONVERT_SYNCHRONISED_SCENE_TO_SYNCHRONIZED_SCENE(uParam0->f_17.f_6);
  if (iVar0 != -1)
  {
    if (uParam0->f_1743 > -1f)
    {
      if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iVar0) >= uParam0->f_1743 && uParam0->f_1747 == 0)
      {
        func_4229(PLAYER::PLAYER_PED_ID(), 0, 1);
        uParam0->f_1747 = 1;
      }
    }
    if (uParam0->f_1744 > -1f)
    {
      if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iVar0) >= uParam0->f_1744 && uParam0->f_1746 == 0)
      {
        func_4210(PLAYER::PLAYER_PED_ID(), 0, 1);
        uParam0->f_1746 = 1;
      }
    }
    if (uParam0->f_1745 > -1f)
    {
      if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iVar0) >= uParam0->f_1745 && uParam0->f_1748 == 0)
      {
        ENTITY::SET_ENTITY_HEALTH(PLAYER::PLAYER_PED_ID(), ENTITY::GET_ENTITY_MAX_HEALTH(PLAYER::PLAYER_PED_ID()), 0);
        uParam0->f_1748 = 1;
      }
    }
  }
}