// agency_heist1.ysc @ L114157
void func_629()
{
  if ((VEHICLE::GET_RANDOM_VEHICLE_IN_SPHERE(-86.58f, -17.64f, 65.77f, 12f, 0, 4) != 0 || VEHICLE::GET_RANDOM_VEHICLE_BACK_BUMPER_IN_SPHERE(-86.58f, -17.64f, 65.77f, 12f, 0, 4, 0) != 0) || VEHICLE::GET_RANDOM_VEHICLE_FRONT_BUMPER_IN_SPHERE(-86.58f, -17.64f, 65.77f, 12f, 0, 4, 0) != 0)
  {
    TASK::TASK_SMART_FLEE_PED(iLocal_171, PLAYER::PLAYER_PED_ID(), 200f, 20000, 1, 0);
    func_11("S1_JSPOOK");
  }
}