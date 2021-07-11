// am_mp_business_hub.c @ L20196
int func_224(var uParam0)
{
  int iVar0;
  
  if (func_225(Local_1038.f_478, &iVar0))
  {
    *uParam0 = iVar0;
  }
  else
  {
    iVar0 = VEHICLE::GET_CLOSEST_VEHICLE(Vector(-100f, -2992.434f, -1508.761f) + Vector(0f, 0f, IntToFloat(Local_1038.f_478 * 32)), 30f, func_148(), 131078);
    if (ENTITY::DOES_ENTITY_EXIST(iVar0))
    {
      if (func_217(iVar0, 1, 0) == Local_1038.f_478)
      {
        *uParam0 = iVar0;
      }
    }
  }
  if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
  {
    return 1;
  }
  return 0;
}