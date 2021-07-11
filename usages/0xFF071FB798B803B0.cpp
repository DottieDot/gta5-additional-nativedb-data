// agency_heist3a.ysc @ L137819
void func_974()
{
  vector3 vVar0;
  float fVar1;
  vector3 vVar2;
  vector3 vVar3;
  
  if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_61, 131.066f, -781.433f, 41.656f, 161.13f, -698.834f, 55.056f, 147.8f, 0, true, 0))
  {
    MISC::CLEAR_AREA(42.5287f, -782.1006f, 43.1106f, 10f, 1, 0, 0, false);
    ENTITY::SET_ENTITY_COORDS(Local_61, 42.5287f, -782.1006f, 43.1106f, 1, false, 0, 1);
    ENTITY::SET_ENTITY_HEADING(Local_61, 340.2707f);
  }
  else if (!VEHICLE::IS_VEHICLE_ON_ALL_WHEELS(Local_61) || ENTITY::GET_ENTITY_SPEED(Local_61) > 1f)
  {
    if (PATHFIND::GET_CLOSEST_VEHICLE_NODE_WITH_HEADING(ENTITY::GET_ENTITY_COORDS(Local_61, true), &vVar0, &fVar1, 12, 1077936128, 0))
    {
      MISC::CLEAR_AREA(vVar0, 10f, 1, 0, 0, false);
      ENTITY::SET_ENTITY_COORDS(Local_61, vVar0, 1, false, 0, 1);
      vVar2 = { -SYSTEM::SIN(fVar1), SYSTEM::COS(fVar1), 0f };
      vVar3 = { Vector(43.2027f, -743.6381f, 56.7573f) - vVar0 };
      if (MISC::GET_ANGLE_BETWEEN_2D_VECTORS(vVar2.x, vVar2.y, vVar3.x, vVar3.y) > 90f)
      {
        ENTITY::SET_ENTITY_HEADING(Local_61, (fVar1 + 180f));
      }
      else
      {
        ENTITY::SET_ENTITY_HEADING(Local_61, fVar1);
      }
      VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_61, 1084227584);
    }
  }
}