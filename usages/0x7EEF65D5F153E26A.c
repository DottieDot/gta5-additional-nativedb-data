// pb_prostitute.c @ L3614
bool func_90(vector3 vParam0, int iParam1)
{
  if (func_547())
  {
    return PED::IS_COP_PED_IN_AREA_3D(vParam0 - Vector(iParam1, iParam1, iParam1), vParam0 + Vector(iParam1, iParam1, iParam1));
  }
  return (VEHICLE::IS_COP_VEHICLE_IN_AREA_3D(vParam0 - Vector(iParam1, iParam1, iParam1), vParam0 + Vector(iParam1, iParam1, iParam1)) || PED::IS_COP_PED_IN_AREA_3D(vParam0 - Vector(iParam1, iParam1, iParam1), vParam0 + Vector(iParam1, iParam1, iParam1)));
}