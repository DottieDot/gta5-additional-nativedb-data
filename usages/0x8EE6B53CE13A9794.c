// am_boat_taxi.c @ L2607
void func_34()
{
  vector3 vVar0;
  var uVar1;
  
  if ((Local_95.f_21 <= 2 || Local_95.f_20 == 2) || Local_95.f_20 == 3)
  {
    vVar0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
    if ((!WATER::GET_WATER_HEIGHT_NO_WAVES(vVar0, &uVar1) || func_36()) || func_35())
    {
      Local_95.f_1 = 4;
    }
  }
}