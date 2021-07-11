// fm_mission_controller.c @ L326484
void func_4496()
{
  int iVar0;
  int iVar1;
  
  iVar0 = VEHICLE::_GET_ALL_VEHICLES(&Global_1315843);
  iVar1 = 0;
  while (iVar1 < iVar0)
  {
    if ((ENTITY::DOES_ENTITY_EXIST(Global_1315843[iVar1]) && DECORATOR::DECOR_EXIST_ON(Global_1315843[iVar1], "Player_Vehicle")) && DECORATOR::DECOR_GET_INT(Global_1315843[iVar1], "Player_Vehicle") == -1)
    {
      if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(Global_1315843[iVar1]))
      {
        if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(Global_1315843[iVar1]))
        {
          func_4497(Global_1315843[iVar1]);
        }
      }
    }
    iVar1++;
  }
}