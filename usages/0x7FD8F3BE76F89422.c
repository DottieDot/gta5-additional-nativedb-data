// am_hold_up.c @ L883
void func_20()
{
  if (Local_103.f_30 == 0)
  {
    if (Local_103.f_3 >= 2 && Local_103.f_3 != 9)
    {
      Local_103.f_30 = EVENT::ADD_SHOCKING_EVENT_FOR_ENTITY(101, PLAYER::PLAYER_PED_ID(), 60000f);
    }
  }
}