// golf.ysc @ L125976
void func_1169(var uParam0, var uParam1)
{
  float fVar0;
  char* sVar1;
  bool bVar2;
  char cVar3[32];
  char cVar4[32];
  
  sVar1 = func_997(uParam0, uParam1, &fVar0, 0, 0, 0, 0);
  bVar2 = !func_454(sVar1);
  StringCopy(&cVar3, func_835(uParam1, uParam0, 0, 1), 32);
  StringConCat(&cVar3, "idle", 32);
  cVar4 = { cVar3 };
  StringConCat(&cVar4, sVar1, 32);
  StringConCat(&cVar4, "_a", 32);
  StringConCat(&cVar3, "_a", 32);
  if (bVar2)
  {
  }
  func_990(func_1345(uParam0), &cVar3, &cVar4, bVar2, fVar0, 1f, 10, 0f, 0f, 0f, 0);
  if (!func_528(uParam0, 32768))
  {
    PED::_0x2208438012482A1A(func_1345(uParam0), 1, 0);
    PED::_0xED3C76ADFA6D07C4(func_1345(uParam0));
    func_1147(uParam0, 32768);
  }
}