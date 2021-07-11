// maintransition.ysc @ L142776
int func_1397(var uParam0, bool bParam1, bool bParam2)
{
  switch (uParam0->f_1253)
  {
    case 0:
      if (bParam2 == 0 || CAM::IS_SCREEN_FADED_OUT())
      {
        if (bParam2)
        {
          func_432(0, 0, 1);
        }
        func_1398(bParam1);
        uParam0->f_1253++;
      }
      break;
    
    case 1:
      if (PED::_HAS_STREAMED_PED_ASSETS_LOADED(PLAYER::PLAYER_PED_ID()) && DLC::_0x241FCA5B1AA14F75() == 0)
      {
        Global_2460407 = bParam1;
        return 1;
      }
      break;
  }
  return 0;
}