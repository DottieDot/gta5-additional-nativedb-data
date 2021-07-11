// pilot_school.ysc @ L97846
void func_370()
{
  int iVar0;
  var uVar1;
  
  if (ENTITY::DOES_ENTITY_EXIST(iLocal_3224))
  {
    if (!func_380(iLocal_3224) && !func_371(iLocal_3224, 0, 0, 0, 0, 0, 1, 0, 1))
    {
      iVar0 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_3224, -1, 0);
      PED::_0xF9ACF4A08098EA25(iVar0, 1);
      PED::DELETE_PED(&iVar0);
    }
    if (VEHICLE::IS_VEHICLE_ATTACHED_TO_TRAILER(iLocal_3224))
    {
      VEHICLE::GET_VEHICLE_TRAILER_VEHICLE(iLocal_3224, &uVar1);
      ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&uVar1);
    }
    ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_3224);
  }
  if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(iLocal_3226))
  {
    GRAPHICS::REMOVE_PARTICLE_FX(iLocal_3226, 0);
  }
}