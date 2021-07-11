// business_battles.ysc @ L140367
void func_1175(int iParam0, int iParam1)
{
  if (!func_38(iParam0, 105))
  {
    if (iParam0 != 7 && iParam0 != 12)
    {
      PED::SET_PED_ANGLED_DEFENSIVE_AREA(iParam1, -30.72565f, -1097.897f, 25.31641f, -58.61979f, -1087.733f, 29.9798f, 25.75f, 0, 0);
    }
    PED::SET_PED_COMBAT_ATTRIBUTES(iParam1, 46, true);
  }
  else
  {
    if (iParam0 == 0)
    {
      ENTITY::SET_ENTITY_INVINCIBLE(iParam1, true);
    }
    PED::SET_PED_CAN_BE_TARGETTED(iParam1, false);
  }
}