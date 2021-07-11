// fanatic2.c @ L38154
void func_321()
{
  if (func_28(Local_664.f_28[0]))
  {
    if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_664.f_28[0], 591.0933f, 1192.419f, 305.529f, 585.4529f, 1205.725f, 311.526f, 2f, 0, true, 0))
    {
      func_36("*** Setting Mary Ann to AvoidCars_Reckless (if this works)");
      TASK::SET_DRIVE_TASK_DRIVING_STYLE(Local_664.f_28[0], 786468);
    }
  }
}