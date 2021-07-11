// abigail1.c @ L29620
struct<2> func_157(int iParam0)
{
  struct<2> Var0;
  char[] cVar1[8];
  
  StringCopy(&Var0, "", 8);
  cVar1 = { func_158(iParam0) };
  if (MISC::IS_STRING_NULL_OR_EMPTY(&cVar1))
  {
  }
  else
  {
    StringCopy(&Var0, "RC_", 8);
    StringConCat(&Var0, &cVar1, 8);
  }
  return Var0;
}