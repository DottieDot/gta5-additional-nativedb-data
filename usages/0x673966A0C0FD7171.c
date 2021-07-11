// am_ga_pickups.c @ L446
int func_7(int iParam0, int iParam1)
{
  vector3 vVar0;
  int iVar1;
  
  iVar1 = 0;
  MISC::SET_BIT(&iVar1, 3);
  MISC::SET_BIT(&iVar1, 4);
  if (NETWORK::CAN_REGISTER_MISSION_ENTITIES(0, 0, 0, 1))
  {
    if (!ENTITY::DOES_ENTITY_EXIST(Local_181.f_2[iParam0 /*15*/].f_10[iParam1]))
    {
      vVar0 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(Local_181.f_2[iParam0 /*15*/].f_2, Local_181.f_2[iParam0 /*15*/].f_5, 0f, (0.25f - (IntToFloat(iParam1) * 0.25f)), 0.1f) };
      Local_181.f_2[iParam0 /*15*/].f_10[iParam1] = OBJECT::CREATE_AMBIENT_PICKUP(joaat("PICKUP_GANG_ATTACK_MONEY"), vVar0, iVar1, Global_262145.f_4446, 0, 1, 1);
    }
    return 1;
  }
  return 0;
}