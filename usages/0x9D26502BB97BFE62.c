// am_contact_requests.c @ L59294
void func_945()
{
  int iVar0;
  int iVar1;
  int iVar2;
  
  if (MISC::IS_BIT_SET(iLocal_226, 2))
  {
    if (Local_179.f_181.f_70[Local_179.f_181.f_69] > 3)
    {
      func_887();
      return;
    }
  }
  iVar0 = func_948(Local_179.f_181.f_70[Local_179.f_181.f_69]);
  iVar1 = func_947(iVar0);
  if (func_90())
  {
    func_78(-517447402, iVar1, &iVar2, 1, 1, 0);
  }
  else
  {
    MONEY::NETWORK_SPENT_REQUEST_HEIST(iVar1, 0, 0);
  }
  func_946(iVar0);
  func_72(&(Global_2449755.f_4310.f_191[50 /*2*/]), 1, 0);
  func_843(50, -1, -1);
  func_32(4);
  MISC::CLEAR_BIT(&(Local_179.f_359), 4);
}