// abigail2.c @ L38850
void func_360()
{
  HUD::REQUEST_ADDITIONAL_TEXT("ABGAIL2", 0);
  STREAMING::REQUEST_MODEL(iLocal_55);
  if ((!func_229() && HUD::HAS_ADDITIONAL_TEXT_LOADED(0)) && STREAMING::HAS_MODEL_LOADED(iLocal_55))
  {
    PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0.1f);
    VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(iLocal_55, true);
    if (func_463(Local_54.f_35[0]))
    {
      iLocal_56 = Local_54.f_35[0];
      ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_56, true, 1);
      STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_55);
    }
    iLocal_59 = 1;
  }
  else
  {
    func_361();
  }
}