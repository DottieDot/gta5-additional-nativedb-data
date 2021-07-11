// extreme1.ysc @ L45602
void func_488()
{
  if (func_164(iLocal_97))
  {
    func_490(iLocal_97, &iLocal_96, iLocal_88[0], -1);
    STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_88[0]);
    func_489(iLocal_96);
    PED::SET_PED_STAY_IN_VEHICLE_WHEN_JACKED(iLocal_96, 1);
    PED::SET_PED_CONFIG_FLAG(iLocal_96, 134, true);
    func_163(&uLocal_102, 4, iLocal_96, "EXT1HELIPILOT", 0, 1);
  }
}