// act_cinema.c @ L2576
void func_56(int iParam0, char* sParam1, int iParam2)
{
  char* sVar0;
  
  sVar0 = PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(2, iParam0, true);
  if (Global_22350.f_4769 >= 12)
  {
    StringCopy(&Global_4268271, sVar0, 64);
    StringCopy(&(Global_4268271.f_16), sParam1, 16);
    Global_4268271.f_20 = iParam2;
    return;
    return;
  }
  MISC::CLEAR_BIT(&(Global_22350.f_5052), Global_22350.f_4769);
  StringCopy(&(Global_22350.f_4771[Global_22350.f_4769 /*16*/]), sVar0, 64);
  StringCopy(&(Global_22350.f_4964[Global_22350.f_4769 /*4*/]), sParam1, 16);
  Global_22350.f_5013[Global_22350.f_4769] = iParam2;
  Global_22350.f_5026[Global_22350.f_4769] = iParam0;
  Global_22350.f_5039[Global_22350.f_4769] = 32;
  Global_22350.f_4769++;
}