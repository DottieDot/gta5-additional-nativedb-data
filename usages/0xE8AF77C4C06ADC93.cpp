// appzit.ysc @ L329
void func_11()
{
  int iVar0;
  
  func_13(134, 1);
  iVar0 = AUDIO::GET_PLAYER_RADIO_STATION_INDEX();
  switch (func_12(iVar0))
  {
    case 1:
      func_13(82, 1);
      break;
    
    case 2:
      func_13(81, 1);
      break;
    
    default:
      func_13(83, 1);
      break;
  }
}