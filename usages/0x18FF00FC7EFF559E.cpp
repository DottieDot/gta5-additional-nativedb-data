// am_mp_smpl_interior_int.ysc @ L274983
void func_4089()
{
  int iVar0;
  int iVar1;
  
  if (func_3389(PLAYER::PLAYER_PED_ID()))
  {
    if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
    {
      iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
      if (func_3389(iVar0))
      {
        if (VEHICLE::GET_VEHICLE_TRAILER_VEHICLE(iVar0, &iVar1))
        {
          if (func_3389(iVar1))
          {
            ENTITY::FREEZE_ENTITY_POSITION(iVar1, false);
            ENTITY::APPLY_FORCE_TO_ENTITY_CENTER_OF_MASS(iVar1, 0, 1f, 0f, 1f, 0, 1, 0, 0);
          }
        }
      }
    }
  }
}