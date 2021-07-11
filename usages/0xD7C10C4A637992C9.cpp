// maintransition.ysc @ L142803
void func_1398(bool bParam0)
{
  if (Global_2460406 == 0)
  {
    if (bParam0)
    {
      DLC::ON_ENTER_MP();
      Global_2460406 = bParam0;
    }
  }
  else if (bParam0 == 0)
  {
    DLC::ON_ENTER_SP();
    Global_2460406 = bParam0;
    Global_37181 = 1;
  }
}