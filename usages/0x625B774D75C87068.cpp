// agency_heist3a.ysc @ L12524
int func_136(int iParam0, var uParam1, int iParam2)
{
  int iVar0;
  
  if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
  {
    if (!PED::IS_PED_INJURED(*iParam0))
    {
      iVar0 = ENTITY::GET_ENTITY_HEALTH(*iParam0);
      if (((ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(*iParam0, PLAYER::PLAYER_PED_ID(), 1) || iVar0 < *uParam1) || PED::IS_PED_RESPONDING_TO_EVENT(*iParam0, 17)) || (iParam2 && PED::IS_PED_RAGDOLL(*iParam0)))
      {
        return 1;
      }
    }
    else
    {
      return 1;
    }
  }
  return 0;
}