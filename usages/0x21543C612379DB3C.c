// armenian1.c @ L45556
float func_399(vector3 vParam0, int iParam1, char* sParam2, int iParam3)
{
  int iVar0;
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  
  iVar0 = VEHICLE::GET_VEHICLE_RECORDING_ID(iParam1, sParam2);
  fVar1 = VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING_ID(iVar0);
  fVar2 = (fVar1 / 2f);
  fVar3 = (fVar1 / 2f);
  iVar4 = 0;
  while (iVar4 <= iParam3)
  {
    if (SYSTEM::VDIST2(vParam0, VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_ID_AT_TIME(iVar0, func_400((fVar2 - fVar3), 0f, fVar1))) < SYSTEM::VDIST2(vParam0, VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_ID_AT_TIME(iVar0, func_400((fVar2 + fVar3), 0f, fVar1))))
    {
      fVar3 = (fVar3 / 2f);
      fVar2 = (fVar2 - fVar3);
    }
    if (SYSTEM::VDIST2(vParam0, VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_ID_AT_TIME(iVar0, func_400((fVar2 - fVar3), 0f, fVar1))) > SYSTEM::VDIST2(vParam0, VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_ID_AT_TIME(iVar0, func_400((fVar2 + fVar3), 0f, fVar1))))
    {
      fVar3 = (fVar3 / 2f);
      fVar2 = (fVar2 + fVar3);
    }
    iVar4++;
  }
  return fVar2;
}