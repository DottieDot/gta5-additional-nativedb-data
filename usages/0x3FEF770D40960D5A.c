// abigail1.c @ L34438
void func_233(vector3 vParam0, float fParam1, int iParam2, int iParam3)
{
  vector3 vVar0;
  var uVar1;
  
  if (ENTITY::DOES_ENTITY_EXIST(Global_102125.f_4))
  {
    if (VEHICLE::IS_VEHICLE_DRIVEABLE(Global_102125.f_4, 0))
    {
      if (func_281(24) != Global_102125.f_4)
      {
        if (iParam2 == 1)
        {
          if (func_278(ENTITY::GET_ENTITY_COORDS(Global_102125.f_4, true), iParam3, &vVar0, &uVar1))
          {
            vParam0 = { vVar0 };
            fParam1 = uVar1;
          }
        }
        func_234(Global_102125.f_4, vParam0, fParam1, 24, 0);
      }
    }
  }
}