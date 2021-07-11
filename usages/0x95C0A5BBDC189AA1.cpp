// agency_heist3b.ysc @ L143430
void func_1040(bool bParam0, bool bParam1)
{
  int iVar0;
  
  func_1041(&Global_22131, bParam1);
  GRAPHICS::_0x22A249A53034450A(0);
  iVar0 = 1;
  if (bParam0)
  {
    if (iVar0 == 1)
    {
      STREAMING::STOP_PLAYER_SWITCH();
      func_1044(0);
      if (ENTITY::DOES_ENTITY_EXIST(Global_1315655))
      {
        if (ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(Global_1315655, 0))
        {
          if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(Global_1315655))
          {
            ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_1315655, false, 0);
          }
          PED::DELETE_PED(&Global_1315655);
        }
      }
    }
  }
}