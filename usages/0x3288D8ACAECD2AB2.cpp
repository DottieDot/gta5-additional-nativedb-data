// ambient_diving.ysc @ L1638
void func_37(var uParam0)
{
  if (OBJECT::DOES_PICKUP_EXIST(*uParam0))
  {
    OBJECT::REMOVE_PICKUP(*uParam0);
  }
}