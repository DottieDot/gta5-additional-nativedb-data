// act_cinema.ysc @ L76616
void func_383(vector3 vParam0)
{
  vector3 vVar0;
  
  vVar0.x = 623353069;
  vVar0.y = PLAYER::PLAYER_ID();
  vVar0.z = vParam0.x;
  vVar0.f_2.f_1 = vParam0.y;
  vVar0.f_2.f_2 = vParam0.z;
  SCRIPT::TRIGGER_SCRIPT_EVENT(1, &vVar0, 5, func_384(1, 1));
}