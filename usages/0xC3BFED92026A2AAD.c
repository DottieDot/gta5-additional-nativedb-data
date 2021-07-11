// agency_heist3b.c @ L143028
void func_1027(int iParam0)
{
  int iVar0;
  char* sVar1;
  int iVar2;
  
  iVar0 = func_1038();
  if (Global_1312873)
  {
    sVar1 = func_1037(iParam0);
    iVar2 = MISC::GET_HASH_KEY(sVar1);
    func_1036(&Global_2461259, 1, 0);
    NETWORK::_NETWORK_TRANSITION_TRACK(iVar2, 1, iVar0, iParam0, 0);
  }
  if (iParam0 == 2)
  {
    func_1028();
  }
  Global_1312808 = iParam0;
}