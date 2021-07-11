// shoprobberies.c @ L11088
void func_239(bool bParam0)
{
  Local_66.f_28.f_3 = 0;
  MISC::SET_BIT(&(Local_66.f_28.f_3), 3);
  MISC::SET_BIT(&(Local_66.f_28.f_3), 4);
  if (!bParam0)
  {
    iLocal_81 = MISC::GET_RANDOM_INT_IN_RANGE(Local_66.f_28.f_4, Local_66.f_28.f_5);
    if (!HUD::DOES_BLIP_EXIST(Local_66.f_28.f_2))
    {
      Local_66.f_28.f_2 = func_242(Local_66.f_28);
      HUD::SET_BLIP_COLOUR(Local_66.f_28.f_2, 2);
    }
    OBJECT::_0xA08FE5E49BDC39DD(Local_66.f_28, -0.2f, 1);
  }
  else
  {
    iLocal_81 = MISC::GET_RANDOM_INT_IN_RANGE(50, Local_66.f_28.f_4);
    Local_66.f_28.f_1 = OBJECT::CREATE_PICKUP(joaat("PICKUP_MONEY_VARIABLE"), ENTITY::GET_ENTITY_COORDS(Local_66.f_28, true), Local_66.f_28.f_3, iLocal_81, 1, 0);
    if (!HUD::DOES_BLIP_EXIST(Local_66.f_28.f_2))
    {
      Local_66.f_28.f_2 = func_240(Local_66.f_28.f_1);
    }
  }
  Local_66.f_28.f_14 = 1;
}