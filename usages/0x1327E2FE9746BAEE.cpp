// business_battles.ysc @ L105981
void func_598(var uParam0, vector3 vParam1, int iParam2, var uParam3)
{
  if (!MISC::DOES_POP_MULTIPLIER_AREA_EXIST(*uParam0))
  {
    *uParam0 = MISC::ADD_POP_MULTIPLIER_AREA(vParam1 - Vector(uParam3, uParam3, uParam3), vParam1 + Vector(uParam3, uParam3, uParam3), 1f, 0.25f, iParam2, 1);
  }
}