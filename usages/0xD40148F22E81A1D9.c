// barry3c.c @ L540
int func_2()
{
  if (func_415(iLocal_114) && func_415(Local_97.f_4))
  {
    if (func_3())
    {
      if (VEHICLE::DOES_CARGOBOB_HAVE_PICK_UP_ROPE(iLocal_114) && VEHICLE::IS_VEHICLE_ATTACHED_TO_CARGOBOB(iLocal_114, Local_97.f_4))
      {
        bLocal_110 = true;
        return 1;
      }
    }
    else if (VEHICLE::IS_VEHICLE_ATTACHED_TO_TOW_TRUCK(iLocal_114, Local_97.f_4))
    {
      bLocal_110 = true;
      return 1;
    }
  }
  return 0;
}