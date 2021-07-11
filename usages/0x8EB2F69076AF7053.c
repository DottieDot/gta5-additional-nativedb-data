// player_scene_t_insult.c @ L7452
void func_58()
{
  int iVar0;
  
  iVar0 = 0;
  while (iVar0 < iLocal_235)
  {
    if (iLocal_235[iVar0] != 0)
    {
      STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_235[iVar0]);
    }
    iVar0++;
  }
  iVar0 = 0;
  while (iVar0 < iLocal_240)
  {
    if (iLocal_240[iVar0] != 0)
    {
      STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_240[iVar0]);
    }
    iVar0++;
  }
  STREAMING::REMOVE_ANIM_DICT(&Local_297);
  if (PED::DOES_GROUP_EXIST(iLocal_238))
  {
    PED::REMOVE_GROUP(iLocal_238);
  }
  MISC::SET_GAME_PAUSED(false);
  SCRIPT::TERMINATE_THIS_THREAD();
}