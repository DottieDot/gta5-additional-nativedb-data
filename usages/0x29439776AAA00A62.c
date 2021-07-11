// am_pi_menu.c @ L189713
int func_1520(int iParam0)
{
  int iVar0;
  int iVar1;
  
  iVar0 = PLAYER::GET_PLAYER_PED(iParam0);
  if (!PED::IS_PED_INJURED(iVar0))
  {
    if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(iVar0))
    {
      iVar1 = PED::GET_VEHICLE_PED_IS_IN(iVar0, 0);
      if ((((VEHICLE::GET_VEHICLE_CLASS(iVar1) == 8 || ENTITY::GET_ENTITY_MODEL(iVar1) == joaat("BLAZER")) || ENTITY::GET_ENTITY_MODEL(iVar1) == joaat("BLAZER3")) || ENTITY::GET_ENTITY_MODEL(iVar1) == joaat("BLAZER4")) || (Global_262145.f_2409 != 0 && ENTITY::GET_ENTITY_MODEL(iVar1) == Global_262145.f_2409))
      {
        if (func_1521(iVar0, iVar1) == -1)
        {
          return 1;
        }
      }
    }
  }
  return 0;
}