// fm_mission_controller.c @ L636821
void func_10173(int iParam0)
{
  if (!MISC::IS_BIT_SET(iLocal_4141, 22))
  {
    PED::CLEAR_PED_PROP(iLocal_1073, 0);
    PLAYER::REMOVE_PLAYER_HELMET(iLocal_1071, 1);
    func_10174(iParam0);
    MISC::SET_BIT(&iLocal_4141, 22);
  }
}