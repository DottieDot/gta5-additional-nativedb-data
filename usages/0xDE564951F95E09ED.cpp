// am_mp_smpl_interior_ext.ysc @ L245372
void func_3720(bool bParam0)
{
  int iVar0;
  
  if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
  {
    func_2766(0);
    NETWORK::NETWORK_FADE_OUT_ENTITY(PLAYER::PLAYER_PED_ID(), 1, 1);
    if (bParam0)
    {
      iVar0 = 557056;
    }
    else
    {
      iVar0 = 524288;
    }
    func_54(PLAYER::PLAYER_ID(), 0, iVar0, 0);
  }
}