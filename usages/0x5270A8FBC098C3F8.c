// bailbond1.c @ L36819
int func_317(var uParam0)
{
  vector3 vVar0;
  
  if (func_24(*uParam0))
  {
    vVar0 = { ENTITY::GET_ENTITY_COORDS(*uParam0, false) };
    if (!func_318(uParam0))
    {
      if (MISC::IS_PROJECTILE_IN_AREA(vVar0 - Vector(7f, 7f, 7f), vVar0 + Vector(7f, 7f, 7f), 0))
      {
        return 1;
      }
    }
  }
  return 0;
}