// am_casino_peds.ysc @ L105504
int func_1032()
{
  if (PAD::GET_CONTROL_VALUE(2, 195) != 127 || PAD::GET_CONTROL_VALUE(2, 196) != 127)
  {
    return 1;
  }
  return 0;
}