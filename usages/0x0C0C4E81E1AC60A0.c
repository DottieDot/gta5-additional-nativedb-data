// cellphone_controller.c @ L625
void func_4()
{
  iLocal_54 = GRAPHICS::GET_STATUS_OF_SAVE_HIGH_QUALITY_PHOTO();
  switch (iLocal_54)
  {
    case 0:
      if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
      {
        iLocal_50 = NETWORK::GET_NETWORK_TIME();
      }
      else
      {
        iLocal_49 = MISC::GET_GAME_TIMER();
      }
      Global_21840 = 11;
      SYSTEM::SETTIMERB(0);
      break;
    
    case 1:
      break;
    
    case 2:
      func_13();
      break;
  }
}