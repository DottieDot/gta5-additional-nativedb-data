// stripclub_mp.ysc @ L122377
void func_1144()
{
  if (!PED::IS_PED_WEARING_HELMET(PLAYER::PLAYER_PED_ID()) && PED::_0xF2385935BFFD4D92(PLAYER::PLAYER_PED_ID()))
  {
    iLocal_224 = PED::GET_PED_PROP_INDEX(PLAYER::PLAYER_PED_ID(), 0);
    iLocal_225 = PED::GET_PED_PROP_TEXTURE_INDEX(PLAYER::PLAYER_PED_ID(), 0);
    PED::CLEAR_PED_PROP(PLAYER::PLAYER_PED_ID(), 0);
    func_70(&uLocal_187, 16777216);
  }
}