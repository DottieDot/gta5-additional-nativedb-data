// country_race.ysc @ L18592
void func_303(var uParam0)
{
  int iVar0;
  vector3 vVar1;
  vector3 vVar2;
  
  TASK::WAYPOINT_RECORDING_GET_CLOSEST_WAYPOINT(Local_47.f_64, ENTITY::GET_ENTITY_COORDS(uParam0->f_5, true), &iVar0);
  TASK::WAYPOINT_RECORDING_GET_COORD(Local_47.f_64, iVar0, &vVar1);
  TASK::WAYPOINT_RECORDING_GET_COORD(Local_47.f_64, iVar0 + 1, &vVar2);
  if (!CAM::IS_SPHERE_VISIBLE(vVar1, 3f))
  {
    if (!VEHICLE::IS_ANY_VEHICLE_NEAR_POINT(vVar1, 5f) || func_234(uParam0->f_5, vVar1, 1) < 5f)
    {
      func_23(uParam0->f_5, vVar1, func_232(vVar1, vVar2), 0, 1);
      if (!PED::IS_PED_IN_VEHICLE(*uParam0, uParam0->f_5, 0))
      {
        PED::SET_PED_INTO_VEHICLE(*uParam0, uParam0->f_5, -1);
      }
      iLocal_60 = MISC::GET_GAME_TIMER() + 1000;
    }
  }
}