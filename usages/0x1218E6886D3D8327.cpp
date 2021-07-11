// gb_security_van.ysc @ L777
void func_12()
{
  int iVar0;
  vector3 vVar1;
  
  iVar0 = 0;
  while (iVar0 < 3)
  {
    if (func_2((2 + iVar0)))
    {
      if (func_17(iVar0))
      {
        if (func_16(iVar0))
        {
          if (!ENTITY::IS_ENTITY_STATIC(func_15(iVar0)))
          {
            vVar1 = { ENTITY::GET_ENTITY_COORDS(func_15(iVar0), false) - ENTITY::GET_ENTITY_COORDS(func_14(iVar0), false) };
            vVar1 = { func_13(vVar1) };
            vVar1.x = (vVar1.x * 2.5f);
            vVar1.y = (vVar1.y * 2.5f);
            vVar1.z = (vVar1.z * 2.5f);
            ENTITY::APPLY_FORCE_TO_ENTITY(func_15(iVar0), 1, vVar1, 0f, 0f, 0f, 0, 0, 1, 1, 0, 1);
          }
        }
      }
    }
    iVar0++;
  }
}