// ambient_ufos.ysc @ L454
void func_12()
{
  if (STREAMING::IS_IPL_ACTIVE("ufo"))
  {
    STREAMING::REMOVE_IPL("ufo");
  }
  func_4(&iLocal_90);
  func_4(&iLocal_89);
  func_4(&iLocal_80);
  AUDIO::SET_AMBIENT_ZONE_STATE_PERSISTENT("AZ_SPECIAL_UFO_01", 0, 1);
  AUDIO::SET_AMBIENT_ZONE_STATE_PERSISTENT("AZ_SPECIAL_UFO_02", 0, 1);
  func_1();
  SCRIPT::TERMINATE_THIS_THREAD();
}