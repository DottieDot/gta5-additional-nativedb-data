// selector.ysc @ L2157
int func_22()
{
  if (((((((((((((((((((((((((((((Global_22211.f_134 || PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())) || !PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID())) || STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS()) || func_59()) || func_37(8, -1)) || CUTSCENE::IS_CUTSCENE_PLAYING()) || func_35()) || (!PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()) && SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("GOLF")) == 0)) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1)) || func_34()) || func_44()) || func_33()) || func_32()) || func_44()) || func_31()) || func_30()) || !func_28()) || func_27(0)) || HUD::IS_PAUSE_MENU_ACTIVE()) || PLAYER::IS_SYSTEM_UI_BEING_DISPLAYED()) || SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("appcamera")) > 0) || SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("creator")) > 0) || func_26()) || Global_61462) || func_25()) || !RECORDING::_0xDF4B952F7D381B95()) || !RECORDING::_0x4282E08174868BE3()) || func_24(Global_110585, 256)) || (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && func_23(PLAYER::PLAYER_ID())))
  {
    return 0;
  }
  return 1;
}