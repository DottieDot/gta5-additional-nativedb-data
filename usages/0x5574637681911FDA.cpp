// apparcadebusiness.ysc @ L2650
void func_79(int iParam0, int iParam1)
{
  struct<10> Var0;
  
  Var0.f_8 = func_83(0);
  Var0.f_6 = func_83(0);
  Var0 = MISC::GET_HASH_KEY(func_82(iLocal_209));
  Var0.f_1 = 0;
  Var0.f_2 = func_83(func_81(PLAYER::PLAYER_ID()));
  Var0.f_3 = 0;
  Var0.f_4 = func_83(func_80(PLAYER::PLAYER_ID()));
  Var0.f_5 = 0;
  switch (iParam1)
  {
    case 8:
      Var0.f_8 = 94815133;
      Var0.f_9 = iParam0;
      break;
    
    case 7:
      Var0.f_6 = 94815133;
      Var0.f_7 = iParam0;
      break;
    
    default:
      return;
  }
  MONEY::_0x5574637681911FDA(iParam0, 0, 1, &Var0);
}