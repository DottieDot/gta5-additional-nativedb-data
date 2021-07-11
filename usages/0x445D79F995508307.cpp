// arena_carmod.ysc @ L304564
void func_2781()
{
  if (iLocal_144)
  {
    if (ENTITY::DOES_ENTITY_EXIST(iLocal_145) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_145, 0))
    {
      VEHICLE::RELEASE_PRELOAD_MODS(iLocal_145);
    }
    iLocal_144 = 0;
    iLocal_145 = 0;
  }
}