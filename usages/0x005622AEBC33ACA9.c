// mission_triggerer_a.c @ L106087
int func_551(int iParam0, char* sParam1, var uParam2, float fParam3)
{
  vector3 vVar0;
  vector3 vVar1;
  float fVar2;
  int iVar3;
  
  if (TASK::WAYPOINT_RECORDING_GET_COORD(sParam1, *uParam2, &vVar0))
  {
    if (!func_40(Global_31111[iParam0 /*23*/][0 /*3*/], vVar0, 0.1f, 0))
    {
      fVar2 = func_69(((func_553(0.2f, (TASK::WAYPOINT_RECORDING_GET_SPEED_AT_POINT(sParam1, *uParam2) * fParam3)) * SYSTEM::TIMESTEP()) / MISC::GET_DISTANCE_BETWEEN_COORDS(Global_31111[iParam0 /*23*/][0 /*3*/], vVar0, true)), 0f, 1f);
      vVar1 = { func_552(Global_31111[iParam0 /*23*/][0 /*3*/], vVar0, fVar2) };
    }
    else
    {
      vVar1 = { vVar0 };
      *uParam2++;
    }
    func_550(iParam0, vVar1);
    TASK::WAYPOINT_RECORDING_GET_NUM_POINTS(sParam1, &iVar3);
    if (*uParam2 >= iVar3)
    {
      *uParam2 = (*uParam2 - 1);
      return 0;
    }
    else
    {
      return 1;
    }
  }
  return 0;
}