// am_pi_menu.ysc @ L381793
void func_4966()
{
  int iVar0;
  int iVar1;
  
  if (ENTITY::DOES_ENTITY_EXIST(Global_1299849) && !ENTITY::IS_ENTITY_DEAD(Global_1299849, 0))
  {
    VEHICLE::GET_VEHICLE_LIGHTS_STATE(Global_1299849, &iVar0, &iVar1);
    if (iVar0 == 1 || iVar1 == 1)
    {
      MISC::SET_BIT(&Global_1299843, 5);
      Global_2515605[Global_2509237 /*66*/][Global_2509253.f_6343] = 0;
    }
    else
    {
      MISC::SET_BIT(&Global_1299843, 4);
      Global_2515605[Global_2509237 /*66*/][Global_2509253.f_6343] = 1;
    }
  }
}