// agency_heist1.c @ L107149
void func_518(int iParam0, int iParam1)
{
  int iVar0;
  
  iVar0 = 0;
  while (iVar0 < 9)
  {
    if (ENTITY::DOES_ENTITY_EXIST(Global_96030[iVar0]))
    {
      if (iParam0 == 145 || Global_96040[iVar0] == iParam0)
      {
        if (iParam1 == 0 || ENTITY::GET_ENTITY_MODEL(Global_96030[iVar0]) == func_519(iParam0, iParam1))
        {
          if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Global_96030[iVar0], 0))
          {
            ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_96030[iVar0], false, 1);
            VEHICLE::DELETE_VEHICLE(&(Global_96030[iVar0]));
            Global_96040[iVar0] = 145;
          }
        }
      }
    }
    iVar0++;
  }
}