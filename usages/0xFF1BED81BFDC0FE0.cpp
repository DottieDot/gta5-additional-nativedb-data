// cheat_controller.ysc @ L1086
void func_44()
{
  switch (iLocal_60)
  {
    case 1:
      break;
    
    case 4:
      func_16("CHEAT_EXPLOSIVE_MELEE");
      func_31(13, 1);
      iLocal_60 = 5;
      break;
    
    case 5:
      if ((((!PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) || func_27(23)) || func_27(21)) || func_27(13)) || func_28())
      {
        iLocal_60 = 9;
        return;
      }
      MISC::SET_EXPLOSIVE_MELEE_THIS_FRAME(PLAYER::PLAYER_ID());
      break;
    
    case 9:
      func_24("CHEAT_EXPLOSIVE_MELEE");
      func_31(13, 0);
      iLocal_60 = 1;
      break;
    
    default:
      break;
  }
}