// carsteal4.ysc @ L104335
void func_479()
{
  if (ENTITY::DOES_ENTITY_EXIST(iLocal_383))
  {
    if (!ENTITY::IS_ENTITY_DEAD(iLocal_383, 0))
    {
      if (!CAM::IS_GAMEPLAY_HINT_ACTIVE())
      {
        CAM::SET_GAMEPLAY_HINT_FOV(35f);
        CAM::SET_GAMEPLAY_ENTITY_HINT(iLocal_383, -1f, 0f, 0.5f, 1, -1, 2500, 2000, 0);
        CAM::_SET_GAMEPLAY_HINT_ANIM_CLOSEUP(1);
        CAM::_SET_GAMEPLAY_HINT_ANIM_OFFSETX(-0.75f);
        CAM::_SET_GAMEPLAY_HINT_ANIM_OFFSETY(0.05f);
        CAM::_SET_GAMEPLAY_HINT_ANIM_OFFSETZ(0.35f);
        CAM::_SET_GAMEPLAY_HINT_ANGLE(-4f);
      }
    }
  }
}