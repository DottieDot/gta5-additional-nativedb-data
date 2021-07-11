// drunk.ysc @ L4526
void func_144()
{
  if (!ENTITY::DOES_ENTITY_EXIST(Local_43.f_1))
  {
    return;
  }
  if (!PED::IS_PED_INJURED(Local_43.f_1))
  {
    PED::RESET_PED_MOVEMENT_CLIPSET(Local_43.f_1, 1048576000);
    PED::RESET_PED_STRAFE_CLIPSET(Local_43.f_1);
    PED::CLEAR_PED_ALTERNATE_MOVEMENT_ANIM(Local_43.f_1, 0, -8f);
    vLocal_52.z = "";
    PED::CLEAR_FACIAL_IDLE_ANIM_OVERRIDE(Local_43.f_1);
    PED::SET_PED_RESET_FLAG(Local_43.f_1, 200, false);
    PED::SET_PED_RESET_FLAG(Local_43.f_1, 46, false);
    PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(Local_43.f_1, 1);
    PED::SET_PED_FLEE_ATTRIBUTES(Local_43.f_1, 262144, false);
    AUDIO::SET_PED_IS_DRUNK(Local_43.f_1, 0);
  }
  if (!bLocal_47)
  {
    return;
  }
  bLocal_47 = false;
}