// cheat_controller.c @ L1658
void func_67()
{
  iLocal_79++;
  if (iLocal_79 > 1)
  {
    iLocal_61 = 9;
    return;
  }
  switch (iLocal_79)
  {
    case 1:
      func_16("CHEAT_GRAVITY_MOON");
      MISC::SET_GRAVITY_LEVEL(1);
      break;
    
    default:
      break;
  }
  iLocal_61 = 5;
}