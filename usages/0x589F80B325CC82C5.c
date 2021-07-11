// fm_mission_controller.c @ L748810
int func_12316(int iParam0, vector3 vParam1, int iParam2)
{
  if (OBJECT::DOOR_SYSTEM_FIND_EXISTING_DOOR(vParam1, iParam0, iParam2))
  {
    return 0;
  }
  else
  {
    *iParam2 = func_12317(iParam0, vParam1);
  }
  return 1;
}