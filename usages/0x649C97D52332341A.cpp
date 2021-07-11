// ambient_sonar.ysc @ L4279
void func_127()
{
  int iVar0;
  
  PLAYER::SET_MAX_WANTED_LEVEL(5);
  func_5();
  iVar0 = 0;
  while (iVar0 < Local_48)
  {
    func_104(&(Local_48[iVar0 /*11*/].f_2));
    func_94(&(Local_48[iVar0 /*11*/].f_1));
    if (iLocal_58[iVar0] >= 0 && iLocal_58[iVar0] < 8)
    {
      GRAPHICS::_0x649C97D52332341A(iLocal_58[iVar0]);
    }
    iVar0++;
  }
  if (func_129(&(Local_42.f_1)))
  {
    func_128(13);
  }
  func_82();
  func_125(0);
  func_77(0);
  STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_42.f_7);
  SCRIPT::TERMINATE_THIS_THREAD();
}