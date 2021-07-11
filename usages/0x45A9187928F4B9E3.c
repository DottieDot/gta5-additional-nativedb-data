// act_cinema.c @ L99322
bool func_639()
{
  return MISC::IS_BIT_SET(Global_4456448.f_184550, 12);
}

Vector3 func_640(int iParam0, vector3 vParam1)
{
  vector3 vVar0;
  vector3 vVar1;
  
  if (VEHICLE::IS_THIS_MODEL_A_BOAT(iParam0))
  {
    return vParam1;
  }
  func_84(iParam0, &vVar0, &vVar1, 1086324736, 1080033280, 1077936128);
  vParam1.z = (vParam1.z + ((vVar1.z - vVar0.z) * 0.5f));
  return vParam1;
}