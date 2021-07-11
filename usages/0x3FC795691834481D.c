// ob_vend1.c @ L70955
void func_242(bool bParam0)
{
  func_243();
  if (ENTITY::DOES_ENTITY_EXIST(iLocal_55))
  {
    if (ENTITY::IS_ENTITY_ATTACHED(iLocal_55))
    {
      ENTITY::DETACH_ENTITY(iLocal_55, 1, true);
      if (bParam0)
      {
        ENTITY::APPLY_FORCE_TO_ENTITY(iLocal_55, 1, vLocal_56, 0f, 0f, 0f, 0, 1, 1, 0, 0, 1);
      }
    }
    if (Global_76577)
    {
      NETWORK::_0x3FC795691834481D(iLocal_55, 0);
    }
    ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&iLocal_55);
  }
  iLocal_52 = 0;
  bLocal_53 = false;
}