// arena_carmod.c @ L240730
int func_2022()
{
  int iVar0;
  int iVar1;
  int iVar2;
  
  if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_105.f_408, 0))
  {
    if (VEHICLE::IS_TOGGLE_MOD_ON(Local_105.f_408, 20))
    {
      if (func_187(Local_105.f_408))
      {
        return 11;
      }
      VEHICLE::GET_VEHICLE_TYRE_SMOKE_COLOR(Local_105.f_408, &iVar0, &iVar1, &iVar2);
      return func_1273(iVar0, iVar1, iVar2);
    }
  }
  return 1;
}