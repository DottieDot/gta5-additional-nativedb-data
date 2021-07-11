// gb_casino.ysc @ L387169
void func_6574()
{
  vector3 vVar0;
  vector3 vVar1;
  
  if (func_7337(107))
  {
    return;
  }
  if (func_6575(&vVar0, &vVar1))
  {
    TASK::ADD_COVER_BLOCKING_AREA(vVar0, vVar1, 0, 0, 0, 0);
    func_7338(107);
  }
}