// pb_prostitute.ysc @ L17996
int func_506()
{
  vector3 vVar0;
  
  if (!func_487(iLocal_49, 4096))
  {
    if (func_413(iLocal_90, PLAYER::PLAYER_PED_ID(), 1) < 30f)
    {
      vVar0 = { ENTITY::GET_ENTITY_COORDS(iLocal_90, true) };
      if ((((((EVENT::IS_SHOCKING_EVENT_IN_SPHERE(88, vVar0, 30f) || EVENT::IS_SHOCKING_EVENT_IN_SPHERE(91, vVar0, 30f)) || EVENT::IS_SHOCKING_EVENT_IN_SPHERE(90, vVar0, 30f)) || EVENT::IS_SHOCKING_EVENT_IN_SPHERE(104, vVar0, 30f)) || EVENT::IS_SHOCKING_EVENT_IN_SPHERE(116, vVar0, 30f)) || (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(114, vVar0, 30f) && !func_547())) || PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
      {
        if (!func_547())
        {
          PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_90, false);
        }
        func_479(&iLocal_49, 4096);
        return 1;
      }
    }
  }
  return 0;
}