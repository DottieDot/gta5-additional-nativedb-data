// family_scene_f0.c @ L34430
int func_202(int iParam0, int iParam1, int iParam2)
{
  if (INTERIOR::IS_VALID_INTERIOR(iParam1))
  {
    if (INTERIOR::IS_INTERIOR_READY(iParam1))
    {
      INTERIOR::FORCE_ROOM_FOR_ENTITY(iParam0, iParam1, iParam2);
      return 1;
    }
    else
    {
      INTERIOR::_0x82EBB79E258FA2B7(iParam0, iParam1);
      return 1;
    }
  }
  return 0;
}