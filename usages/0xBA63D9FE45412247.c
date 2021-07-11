// business_battles.c @ L206160
void func_2950(int iParam0, int iParam1)
{
  if (func_2952(iParam0))
  {
    if (func_1235(uLocal_809.f_98[iParam0 /*15*/]))
    {
      if (PED::IS_PED_DEFENSIVE_AREA_ACTIVE(iParam1, 0))
      {
        PED::REMOVE_PED_DEFENSIVE_AREA(iParam1, 0);
        if (func_2951(iParam0))
        {
          PED::SET_PED_SPHERE_DEFENSIVE_AREA(iParam1, func_502(iParam0, func_3620(), func_461(), 0, 0), 20f, 0, 0);
        }
        func_2945(iParam0, 4);
      }
    }
  }
}