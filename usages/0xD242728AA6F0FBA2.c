// agency_heist1.c @ L116511
void func_683(var uParam0, int iParam1, char* sParam2)
{
  float fVar0;
  float fVar1;
  int iVar2;
  
  if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iParam1, sParam2))
  {
    fVar0 = VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(iParam1, sParam2);
    fVar1 = (fVar0 / 199f);
    *(uParam0[199 /*3*/]) = { VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_AT_TIME(iParam1, fVar0, sParam2) };
    iVar2 = 0;
    while (iVar2 < *uParam0)
    {
      *(uParam0[iVar2 /*3*/]) = { VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_AT_TIME(iParam1, (fVar1 * IntToFloat(iVar2)), sParam2) };
      iVar2++;
    }
  }
}