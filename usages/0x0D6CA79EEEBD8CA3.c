// cellphone_controller.c @ L766
void func_10()
{
  iLocal_54 = GRAPHICS::GET_STATUS_OF_TAKE_HIGH_QUALITY_PHOTO();
  switch (iLocal_54)
  {
    case 0:
      Global_21840 = 4;
      iLocal_55 = 2;
      break;
    
    case 1:
      break;
    
    case 2:
      Global_19486.f_1 = 3;
      func_13();
      break;
  }
}