// bailbond1.ysc @ L46326
int func_519(var uParam0, int iParam1, vector3 vParam2, int iParam3, int iParam4, bool bParam5)
{
  if (!OBJECT::DOES_PICKUP_EXIST(*uParam0))
  {
    if (func_57(iParam4))
    {
      *uParam0 = OBJECT::CREATE_PICKUP(iParam1, vParam2, iParam3, -1, 1, iParam4);
      if (OBJECT::DOES_PICKUP_EXIST(*uParam0))
      {
        if (OBJECT::DOES_PICKUP_OBJECT_EXIST(*uParam0))
        {
          if (bParam5)
          {
            func_56(iParam4, 1);
          }
          return 1;
        }
      }
    }
  }
  else if (OBJECT::DOES_PICKUP_OBJECT_EXIST(*uParam0))
  {
    if (bParam5)
    {
      func_56(iParam4, 0);
    }
    return 1;
  }
  return 0;
}