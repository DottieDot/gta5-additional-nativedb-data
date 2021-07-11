// tennis.c @ L16639
void func_338(int iParam0, bool bParam1)
{
  if (ENTITY::DOES_ENTITY_EXIST(iParam0))
  {
    if ((ENTITY::IS_ENTITY_VISIBLE(iParam0) && !bParam1) || (!ENTITY::IS_ENTITY_VISIBLE(iParam0) && bParam1))
    {
      ENTITY::SET_ENTITY_VISIBLE(iParam0, bParam1, 0);
      OBJECT::_0xB2D0BDE54F0E8E5A(iParam0, bParam1);
    }
  }
}