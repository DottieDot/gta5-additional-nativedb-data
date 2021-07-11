// armenian1.ysc @ L52454
void func_498(int iParam0, float fParam1, float fParam2)
{
  int iVar0;
  vector3 vVar1;
  vector3 vVar2;
  vector3 vVar3;
  vector3 vVar4;
  float fVar5;
  
  if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
  {
    vVar4 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
  }
  if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
  {
    if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iParam0))
    {
      iVar0 = VEHICLE::GET_CURRENT_PLAYBACK_FOR_VEHICLE(iParam0);
      vVar1 = { VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_ID_AT_TIME(iVar0, fParam1) };
      vVar2 = { ENTITY::GET_ENTITY_COORDS(iParam0, true) };
      vVar3 = { vVar2 - vVar1 };
      fVar5 = SYSTEM::VMAG(vVar3);
      if (fVar5 > fParam2)
      {
        fVar5 = fParam2;
      }
      func_490(vVar1, vVar4, fVar5);
    }
  }
}