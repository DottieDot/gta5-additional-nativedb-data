// maintransition.c @ L124432
void func_1054(bool bParam0)
{
  int iVar0;
  int iVar1;
  char* sVar2;
  var uVar3;
  
  OBJECT::_0x66A49D021870FE88();
  iVar0 = 0;
  while (iVar0 < 3)
  {
    iVar1 = 0;
    while (func_1055(iVar0, iVar1, &sVar2, &uVar3))
    {
      OBJECT::ENABLE_SAVING_IN_GARAGE(MISC::GET_HASH_KEY(&sVar2), false);
      if (bParam0)
      {
        OBJECT::_0x190428512B240692(MISC::GET_HASH_KEY(&sVar2), 1, 0, 0, 0);
      }
      iVar1++;
    }
    iVar0++;
  }
}