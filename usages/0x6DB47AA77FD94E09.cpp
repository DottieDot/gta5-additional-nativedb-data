// freemode.ysc @ L183708
void func_2440()
{
  if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
  {
    PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 157, true);
    ENTITY::SET_ENTITY_HEALTH(PLAYER::PLAYER_PED_ID(), 200, 0);
  }
  PED::SET_PED_MAX_HEALTH(PLAYER::PLAYER_PED_ID(), 200);
  PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 189, false);
  PLAYER::SET_RUN_SPRINT_MULTIPLIER_FOR_PLAYER(PLAYER::PLAYER_ID(), 1f);
  PLAYER::SET_SWIM_MULTIPLIER_FOR_PLAYER(PLAYER::PLAYER_ID(), 1f);
  PLAYER::SET_PLAYER_MELEE_WEAPON_DAMAGE_MODIFIER(PLAYER::PLAYER_ID(), 1f, 1);
  func_2441(0);
  Global_111504 = 0;
  Global_30739 = 0;
  HUD::DISPLAY_RADAR(true);
  if (!func_630(14))
  {
    HUD::THEFEED_RESUME();
  }
  PLAYER::SET_PLAYER_CAN_USE_COVER(PLAYER::PLAYER_ID(), 1);
  MISC::SET_STUNT_JUMPS_CAN_TRIGGER(1);
  MISC::_0xC54A08C85AE4D410(0f);
  if (Global_30891 != 0)
  {
    EVENT::REMOVE_SHOCKING_EVENT(Global_30891);
  }
}