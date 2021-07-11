// savegame_bed.ysc @ L99379
int func_426()
{
  if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("context_controller")) < 1)
  {
    return 0;
  }
  if (PED::IS_ANY_PED_SHOOTING_IN_AREA(Local_87.f_2 - Vector(10f, 10f, 10f), Local_87.f_2 + Vector(10f, 10f, 10f), 0, 1))
  {
    return 0;
  }
  if ((!func_51(Local_87) || func_16(0)) || PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
  {
    return 0;
  }
  if (Global_95621 != -1)
  {
    if (MISC::IS_BIT_SET(Global_89487[Global_95621 /*34*/].f_15, 26))
    {
      return 0;
    }
  }
  if ((PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0 && PED::IS_COP_PED_IN_AREA_3D(Local_87.f_2 - Vector(10f, 10f, 10f), Local_87.f_2 + Vector(10f, 10f, 10f))) || PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 3)
  {
    return 0;
  }
  return func_427(0);
}