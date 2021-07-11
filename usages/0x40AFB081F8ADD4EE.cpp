// cellphone_controller.ysc @ L573
void func_1()
{
  iLocal_54 = GRAPHICS::_RETURN_TWO(Global_21844);
  switch (iLocal_54)
  {
    case 0:
      Global_21840 = 4;
      break;
    
    case 1:
      break;
    
    case 2:
      MISC::SET_BIT(&Global_7357, 15);
      func_13();
      break;
  }
}