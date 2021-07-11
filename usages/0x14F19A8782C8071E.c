// minute1.c @ L48525
void func_505()
{
  if (iLocal_369 == 0 && ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1987.803f, 3055.128f, 45.2153f, 1986.587f, 3053.184f, 48.21519f, 1.5f, 0, true, 0))
  {
    PED::SET_SCENARIO_PEDS_TO_BE_RETURNED_BY_NEXT_COMMAND(1);
    if (PED::GET_CLOSEST_PED(1983.41f, 3054.88f, 47.01f, 3f, 1, 1, &iLocal_368, 0, 0, -1) && func_36(iLocal_368))
    {
      if (ENTITY::GET_ENTITY_MODEL(iLocal_368) == joaat("ig_janet"))
      {
        func_501();
        func_26(&uLocal_108, 8, iLocal_368, "JANET", 0, 1);
        func_338(&uLocal_108, "MIN1AUD", "MIN1_BANNED", 3, 0, 0);
      }
      iLocal_369 = 1;
    }
  }
}