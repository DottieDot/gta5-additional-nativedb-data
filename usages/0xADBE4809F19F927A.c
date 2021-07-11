// abigail1.c @ L39801
void func_333(int iParam0, bool bParam1)
{
  if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
  {
    if (ENTITY::IS_ENTITY_ATTACHED_TO_ANY_PED(*iParam0))
    {
      ENTITY::DETACH_ENTITY(*iParam0, 1, true);
    }
    if (!bParam1)
    {
      ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(iParam0);
    }
    else
    {
      OBJECT::_MARK_OBJECT_FOR_DELETION(*iParam0);
    }
  }
}