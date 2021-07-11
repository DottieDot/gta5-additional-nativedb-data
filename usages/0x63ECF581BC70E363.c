// freemode.c @ L181890
void func_2395(int iParam0, var uParam1)
{
  if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_156[iParam0]))
  {
    OBJECT::DELETE_OBJECT(&(uParam1->f_156[iParam0]));
  }
  uParam1->f_156[iParam0] = OBJECT::CREATE_OBJECT(func_2397(iParam0), func_2399(iParam0), false, true, false);
  ENTITY::SET_ENTITY_ROTATION(uParam1->f_156[iParam0], func_2396(iParam0), 2, 1);
  OBJECT::SET_OBJECT_TARGETTABLE(uParam1->f_156[iParam0], 1);
  ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(uParam1->f_156[iParam0], true);
  OBJECT::_0x63ECF581BC70E363(uParam1->f_156[iParam0], 1);
  PLAYER::_0x9097EB6D4BB9A12A(PLAYER::PLAYER_ID(), uParam1->f_156[iParam0]);
  uParam1->f_271 = AUDIO::GET_SOUND_ID();
  ENTITY::SET_ENTITY_PROOFS(uParam1->f_156[iParam0], false, false, false, true, false, false, 0, false);
  AUDIO::PLAY_SOUND_FROM_ENTITY(uParam1->f_271, "attract", uParam1->f_156[iParam0], "dlc_ch_hidden_collectibles_sj_sounds", false, 0);
}