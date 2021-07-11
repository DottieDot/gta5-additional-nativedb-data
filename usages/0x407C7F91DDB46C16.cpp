// fm_mission_controller.ysc @ L662490
int func_10721()
{
  if (PLAYER::GET_NUMBER_OF_PLAYERS() > 1)
  {
    if (func_10718() != func_9028())
    {
      Global_2508007 = 1;
      return 1;
    }
  }
  Global_2508007 = 0;
  return 0;
}