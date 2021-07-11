// fm_mission_controller.c @ L616762
void func_9837(int iParam0, int iParam1, int iParam2)
{
  if ((!func_1015(iParam1) && MISC::IS_BIT_SET(Local_4814.f_1, 14)) && OBJECT::_0x0378C08504160D0D(iParam0))
  {
    OBJECT::SET_TEAM_PICKUP_OBJECT(iParam0, iParam2, 0);
    if (Local_4814.f_1578[iParam1] == iLocal_1075)
    {
      if (iParam2 == Local_6942[iLocal_1074 /*287*/].f_1)
      {
        if (ENTITY::IS_ENTITY_ATTACHED_TO_ANY_PED(iParam0))
        {
          OBJECT::DETACH_PORTABLE_PICKUP_FROM_PED(iParam0);
          if ((!func_4082(iParam1) || MISC::IS_BIT_SET(Global_4456448.f_60691[iParam1 /*219*/].f_49, 18)) || Global_1312791)
          {
            ENTITY::SET_ENTITY_VISIBLE(iParam0, false, 0);
            ENTITY::SET_ENTITY_COLLISION(iParam0, false, 0);
            OBJECT::_HIDE_PICKUP(iParam0, true);
          }
        }
      }
    }
  }
}