// pb_prostitute.c @ L5929
void func_162(int iParam0, int iParam1, int iParam2)
{
  if (ENTITY::IS_ENTITY_DEAD(iParam1, 0))
  {
    return;
  }
  if (func_547())
  {
    NETWORK::NETWORK_ATTACH_SYNCHRONISED_SCENE_TO_ENTITY(iParam0, iParam1, iParam2);
  }
  else
  {
    PED::ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(iParam0, iParam1, iParam2);
  }
}