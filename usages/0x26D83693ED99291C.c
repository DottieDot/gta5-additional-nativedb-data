// clothes_shop_mp.c @ L176164
void func_529(int iParam0, int iParam1, var uParam2)
{
  if (func_275(ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()), iParam0, iParam1, -1))
  {
    PED::SET_PED_HELMET_PROP_INDEX(PLAYER::PLAYER_PED_ID(), uParam2->f_3, 1);
    PED::SET_PED_HELMET_TEXTURE_INDEX(PLAYER::PLAYER_PED_ID(), uParam2->f_4);
    if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
    {
      func_21(588, iParam1, -1, 1, 0);
      func_530(PLAYER::PLAYER_PED_ID(), uParam2->f_3, uParam2->f_4, 1);
    }
  }
}