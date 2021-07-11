// am_mp_armory_aircraft.ysc @ L281336
bool func_4110()
{
  struct<4> Var0;
  bool bVar1;
  
  func_4111(Local_578.f_3, &Var0, 0);
  bVar1 = ENTITY::IS_ENTITY_IN_AREA(PLAYER::PLAYER_PED_ID(), Var0, Var0.f_3, 0, 1, 0);
  return bVar1;
}