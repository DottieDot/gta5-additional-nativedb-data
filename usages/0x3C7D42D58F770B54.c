// benchmark.c @ L897
int func_31()
{
  int iVar0;
  
  if (iLocal_100 == 1)
  {
    return 1;
  }
  if (func_33())
  {
    MISC::CLEAR_AREA(vLocal_95[0 /*3*/], 10f, 1, 0, 0, false);
    iVar0 = 0;
    iVar0 = 0;
    while (iVar0 < 2)
    {
      iLocal_91[iVar0] = VEHICLE::CREATE_VEHICLE(iLocal_92[iVar0], vLocal_95[iVar0 /*3*/], fLocal_96[iVar0], true, true, false);
      VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_91[iVar0], 1084227584);
      iLocal_93[iVar0] = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_91[iVar0], 26, iLocal_94[iVar0], -1, 1, true);
      PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_93[iVar0], true);
      iVar0++;
    }
    ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_91[0], true, 1);
    iLocal_97 = VEHICLE::CREATE_VEHICLE(iLocal_98, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_91[0], 0f, -50f, 10f), fLocal_96[0], true, true, false);
    VEHICLE::ATTACH_VEHICLE_TO_TRAILER(iLocal_91[0], iLocal_97, 1065353216);
    VEHICLE::SET_TRAILER_LEGS_RAISED(iLocal_97);
    ENTITY::FREEZE_ENTITY_POSITION(iLocal_97, true);
    iLocal_100 = 1;
    func_32();
    return 1;
  }
  return 0;
}