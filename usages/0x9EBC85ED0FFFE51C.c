// am_mp_drone.c @ L10043
void func_343()
{
  int iVar0;
  
  if ((func_27() || func_9()) || func_29())
  {
    iVar0 = 1000;
    if (func_9() || func_29())
    {
      iVar0 = 7000;
    }
    if (!MISC::IS_BIT_SET(Local_117.f_5, 29))
    {
      if (CAM::DOES_CAM_EXIST(Local_117.f_131) && CAM::IS_CAM_RENDERING(Local_117.f_131))
      {
        if (func_25(func_88()))
        {
          if (func_7(&(Local_117.f_198), iVar0, 0))
          {
            ENTITY::SET_ENTITY_COMPLETELY_DISABLE_COLLISION(func_88(), true, 0);
            ENTITY::SET_ENTITY_COLLISION(func_88(), true, 0);
            MISC::SET_BIT(&(Local_117.f_5), 29);
          }
        }
      }
    }
  }
}