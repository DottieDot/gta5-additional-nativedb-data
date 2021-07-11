// agency_heist3a.c @ L145471
void func_1114(int iParam0, int iParam1, int iParam2, vector3 vParam3, float fParam4)
{
  int iVar0;
  
  if (!ENTITY::DOES_ENTITY_EXIST(*iParam0))
  {
    if (STREAMING::HAS_MODEL_LOADED(iParam0->f_1))
    {
      if (!func_1116(PLAYER::GET_PLAYERS_LAST_VEHICLE(), iParam0->f_3, iParam2, vParam3, fParam4))
      {
        func_637(iParam0, iParam1, iParam0->f_3, iParam0->f_6, 0, 0);
        VEHICLE::SET_VEHICLE_AUTOMATICALLY_ATTACHES(*iParam0, false, 0);
        func_1115(&Local_2442, *iParam0);
      }
      else
      {
        iVar0 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
        VEHICLE::SET_VEHICLE_AUTOMATICALLY_ATTACHES(iVar0, false, 0);
        func_1115(&Local_2442, iVar0);
      }
    }
  }
}