// am_hunt_the_beast.ysc @ L161464
void func_1523()
{
  CAM::SET_WIDESCREEN_BORDERS(false, -1);
  func_1524();
  if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
  {
    WEAPON::HIDE_PED_WEAPON_FOR_SCRIPTED_CUTSCENE(PLAYER::PLAYER_PED_ID(), false);
    if (!Global_76577)
    {
      PLAYER::SET_EVERYONE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), 0);
      PED::CLEAR_FACIAL_IDLE_ANIM_OVERRIDE(PLAYER::PLAYER_PED_ID());
    }
  }
  Global_100757 = 0;
  func_580(0, 1, 1, 0, 0, 0);
}