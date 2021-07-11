// freemode.c @ L624860
int func_8467(int iParam0)
{
  struct<16> Var0;
  
  switch (Global_4194375)
  {
    case 0:
      Var0 = { func_8468(iParam0) };
      Global_4194376 = NETWORK::CLOUD_DELETE_MEMBER_FILE(&Var0);
      Global_4194377 = MISC::GET_GAME_TIMER();
      Global_4194375++;
      break;
    
    case 1:
      if (NETWORK::CLOUD_HAS_REQUEST_COMPLETED(Global_4194376) || (MISC::GET_GAME_TIMER() - Global_4194377) > 10000)
      {
        Global_4194375++;
        return 1;
      }
      break;
    
    case 2:
      return 1;
      break;
  }
  return 0;
}