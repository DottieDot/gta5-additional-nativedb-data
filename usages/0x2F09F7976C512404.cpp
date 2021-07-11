// family3.ysc @ L131934
int func_904(int iParam0, int iParam1, float fParam2)
{
  int iVar0;
  vector3 vVar1;
  var uVar2;
  
  if (!PED::IS_PED_INJURED(iParam0))
  {
    if (ENTITY::DOES_ENTITY_EXIST(iParam1))
    {
      if (!ENTITY::IS_ENTITY_DEAD(iParam1, 0))
      {
        if (WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &iVar0, 1))
        {
          if (iVar0 == joaat("WEAPON_PETROLCAN"))
          {
            vVar1 = { ENTITY::GET_ENTITY_COORDS(iParam1, true) };
            if (MISC::GET_GROUND_Z_FOR_3D_COORD(vVar1, &uVar2, 0, 0))
            {
              vVar1.z = uVar2;
            }
            if (PED::IS_PED_SHOOTING(iParam0) && GRAPHICS::GET_IS_PETROL_DECAL_IN_RANGE(vVar1, fParam2))
            {
              return 1;
            }
          }
        }
      }
    }
  }
  return 0;
}