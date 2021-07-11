// pb_prostitute.ysc @ L4010
void func_98(var uParam0)
{
  if (!func_547())
  {
    if (ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), func_50(PLAYER::PLAYER_PED_ID(), 0, 0), func_100(1), 3))
    {
      return;
    }
  }
  if (func_487(iLocal_49, 16))
  {
    if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
    {
      PLAYER::SET_PLAYER_CAN_DO_DRIVE_BY(PLAYER::PLAYER_ID(), 1);
      func_5(&iLocal_49, 16);
    }
  }
  if (func_487(iLocal_49, 2))
  {
    func_99(1);
    func_488("RESETTING INTERFACE FLAG TO FALSE - PROSTITUTE SCRIPT TERMINATING");
  }
  func_538();
  if (func_547())
  {
    func_532(uParam0);
  }
}