// cheat_controller.ysc @ L2528
void func_87()
{
  switch (iLocal_47)
  {
    case 1:
      break;
    
    case 4:
      func_16("CHEAT_SUPER_JUMP");
      func_31(0, 1);
      iLocal_47 = 5;
      break;
    
    case 5:
      if ((((!PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) || func_27(23)) || func_27(22)) || func_27(0)) || INTERIOR::IS_INTERIOR_SCENE())
      {
        iLocal_47 = 9;
        return;
      }
      MISC::SET_SUPER_JUMP_THIS_FRAME(PLAYER::PLAYER_ID());
      PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 217, true);
      break;
    
    case 9:
      func_24("CHEAT_SUPER_JUMP");
      func_31(0, 0);
      iLocal_47 = 1;
      break;
    
    default:
      break;
  }
}