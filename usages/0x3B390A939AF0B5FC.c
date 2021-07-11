// epsilon4.c @ L35650
void func_254()
{
  if (func_231(iLocal_303))
  {
    if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Artefact_Detector", 0))
    {
      if (iLocal_283 < 2)
      {
        func_402("*** Detector exit");
        WEAPON::GIVE_WEAPON_OBJECT_TO_PED(iLocal_303, PLAYER::PLAYER_PED_ID());
        func_5(&iLocal_303);
        if (!ENTITY::DOES_ENTITY_EXIST(Local_301))
        {
          func_402("*** Recreating gDetector.hObj after cutscene...");
          Local_301 = WEAPON::GET_CURRENT_PED_WEAPON_ENTITY_INDEX(PLAYER::PLAYER_PED_ID());
        }
      }
      else
      {
        func_402("*** Detector exit (end cutscene)");
        func_5(&iLocal_303);
      }
    }
  }
}