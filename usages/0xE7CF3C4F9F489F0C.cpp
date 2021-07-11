// am_casino_peds.ysc @ L310871
int func_3863(int iParam0, int iParam1, bool bParam2)
{
  int iVar0;
  
  if (func_3864(iParam0, 1) && VEHICLE::IS_VEHICLE_ATTACHED_TO_TRAILER(iParam0))
  {
    VEHICLE::GET_VEHICLE_TRAILER_VEHICLE(iParam0, &iVar0);
    if (func_978(iVar0, 1) && ENTITY::GET_ENTITY_MODEL(iVar0) == joaat("trailersmall2"))
    {
      if (!bParam2)
      {
        return 1;
      }
      else if (func_975(iVar0) == iParam1)
      {
        return 1;
      }
    }
  }
  return 0;
}