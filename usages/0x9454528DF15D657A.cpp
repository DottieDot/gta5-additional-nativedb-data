// fanatic3.ysc @ L39252
void func_348()
{
  if (func_276())
  {
    func_274();
    func_286(&uLocal_164, "FAN3AUD", "FAN3_SCARED", 9, 1, 0);
  }
  else
  {
    func_244(&uLocal_164, "FAN3AUD", "FAN3_SCARED", 9, 1, 0, 0);
  }
  func_10(&iLocal_96);
  PED::SET_PED_KEEP_TASK(iLocal_106, true);
  if (PED::IS_PED_IN_ANY_VEHICLE(iLocal_106, 0))
  {
    TASK::TASK_VEHICLE_MISSION_PED_TARGET(iLocal_106, PED::GET_VEHICLE_PED_IS_IN(iLocal_106, 0), PLAYER::PLAYER_PED_ID(), 8, 30f, 786469, 100f, 0.1f, 1);
    PED::SET_PED_FLEE_ATTRIBUTES(iLocal_106, 2, true);
    func_9("Setting Mary Ann Use Vehicle flee attribute");
  }
  else
  {
    TASK::TASK_SMART_FLEE_PED(iLocal_106, PLAYER::PLAYER_PED_ID(), 100f, -1, 0, 0);
  }
  if (func_524(iLocal_72))
  {
    PED::SET_PED_FLEE_ATTRIBUTES(iLocal_72, 130, true);
    PED::SET_PED_KEEP_TASK(iLocal_106, true);
    TASK::TASK_SMART_FLEE_PED(iLocal_106, PLAYER::PLAYER_PED_ID(), 100f, -1, 0, 0);
  }
  func_278(7);
}