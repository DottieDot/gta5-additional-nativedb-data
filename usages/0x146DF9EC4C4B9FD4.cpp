// assassin_valet.ysc @ L1722
void func_1()
{
  int iVar0;
  
  if (PED::IS_PED_IN_ANY_VEHICLE(iLocal_938, 0))
  {
    iVar0 = PED::GET_VEHICLE_PED_IS_IN(iLocal_938, 0);
    if (ENTITY::GET_ENTITY_MODEL(iVar0) == joaat("TOWTRUCK") || ENTITY::GET_ENTITY_MODEL(iVar0) == joaat("towtruck2"))
    {
      bLocal_969 = true;
    }
  }
  else
  {
    bLocal_969 = false;
  }
  if (bLocal_969)
  {
    if (VEHICLE::IS_VEHICLE_ATTACHED_TO_TOW_TRUCK(iVar0, iLocal_1065))
    {
      VEHICLE::DETACH_VEHICLE_FROM_TOW_TRUCK(iVar0, iLocal_1065);
    }
  }
}