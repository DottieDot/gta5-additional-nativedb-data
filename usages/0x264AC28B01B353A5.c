// armenian1.c @ L42586
void func_386(bool bParam0)
{
  if (bParam0)
  {
    if (iLocal_332 == -1)
    {
      iLocal_332 = MISC::_ADD_DISPATCH_SPAWN_BLOCKING_ANGLED_AREA(25.40665f, -664.5241f, 30.37865f, 10.39396f, -690.48f, 35.73986f, 19.25f);
    }
    if (iLocal_333 == -1)
    {
      iLocal_333 = MISC::_ADD_DISPATCH_SPAWN_BLOCKING_ANGLED_AREA(14.52216f, -684.6943f, 30.08809f, -85.90411f, -678.752f, 38.47314f, 52.5f);
    }
  }
  else
  {
    if (iLocal_332 != -1)
    {
      MISC::REMOVE_DISPATCH_SPAWN_BLOCKING_AREA(iLocal_332);
      iLocal_332 = -1;
    }
    if (iLocal_333 != -1)
    {
      MISC::REMOVE_DISPATCH_SPAWN_BLOCKING_AREA(iLocal_333);
      iLocal_333 = -1;
    }
  }
}