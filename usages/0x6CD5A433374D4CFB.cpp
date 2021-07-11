// assassin_construction.ysc @ L4281
int func_75(int iParam0)
{
  float fVar0;
  
  if (ENTITY::DOES_ENTITY_EXIST(iParam0))
  {
    if (!PED::IS_PED_INJURED(iParam0))
    {
      if (func_76())
      {
        fVar0 = func_38(iParam0, 0);
        if ((fVar0 <= 33f && PED::CAN_PED_SEE_HATED_PED(iParam0, iLocal_1183)) || (PED::IS_PED_IN_ANY_VEHICLE(iLocal_1183, 0) && fVar0 <= 5f))
        {
          return 1;
        }
      }
    }
  }
  return 0;
}