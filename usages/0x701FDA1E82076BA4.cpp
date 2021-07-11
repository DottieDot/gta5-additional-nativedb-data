// am_doors.ysc @ L746
void func_23()
{
  if (func_24())
  {
    if (!iLocal_66)
    {
      OBJECT::_0xC7F29CA00F46350E(1);
      iLocal_66 = 1;
    }
  }
  else if (iLocal_66 == 1)
  {
    iLocal_66 = 0;
    OBJECT::_0x701FDA1E82076BA4();
  }
}