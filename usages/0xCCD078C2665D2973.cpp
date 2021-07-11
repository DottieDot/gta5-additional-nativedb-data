// mission_triggerer_b.ysc @ L123115
void func_961()
{
  if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
  {
    if (!CAM::IS_GAMEPLAY_HINT_ACTIVE())
    {
      if (func_962())
      {
        CAM::SET_GAMEPLAY_ENTITY_HINT(Global_95196.f_9[1], 0f, 0f, 0f, 1, 60000, 2000, 2000, 0);
        CAM::SET_GAMEPLAY_HINT_FOV(fLocal_1063);
        CAM::_SET_GAMEPLAY_HINT_ANIM_OFFSETZ(fLocal_1064);
        CAM::_SET_GAMEPLAY_HINT_ANGLE(fLocal_1065);
        CAM::_SET_GAMEPLAY_HINT_ANIM_OFFSETX(fLocal_1066);
        CAM::_SET_GAMEPLAY_HINT_ANIM_OFFSETY(fLocal_1067);
        CAM::_SET_GAMEPLAY_HINT_ANIM_CLOSEUP(1);
        iLocal_1069 = MISC::GET_GAME_TIMER();
      }
    }
    else
    {
      CAM::_0xCCD078C2665D2973(1);
    }
  }
}