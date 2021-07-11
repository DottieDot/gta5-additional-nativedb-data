// am_mp_arcade_claw_crane.ysc @ L89568
void func_622()
{
  int iVar0;
  
  iVar0 = 1;
  PAD::_0x7F4724035FDCA1DD(2);
  PAD::ENABLE_CONTROL_ACTION(2, 201, 1);
  func_623(&(Local_206.f_1[2]), &(Local_206.f_1[3]), &(Local_206.f_1[0]), &(Local_206.f_1[1]), 0, 0);
  if (PAD::_IS_INPUT_DISABLED(0))
  {
    iVar0 = 5;
    Local_206.f_1[0] = (Local_206.f_1[0] * iVar0);
    Local_206.f_1[1] = (Local_206.f_1[1] * iVar0);
  }
}