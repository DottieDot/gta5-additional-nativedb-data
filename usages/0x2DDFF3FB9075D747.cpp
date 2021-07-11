// golf.ysc @ L110615
void func_717(var uParam0)
{
  if (func_528(uParam0, 128))
  {
    STREAMING::CLEAR_FOCUS();
    func_674(uParam0, 128);
  }
  if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_3))
  {
    if (STREAMING::IS_ENTITY_FOCUS(uParam0->f_3))
    {
      STREAMING::CLEAR_FOCUS();
    }
    if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(uParam0->f_3))
    {
      OBJECT::DELETE_OBJECT(&(uParam0->f_3));
    }
  }
  uParam0->f_3 = 0;
}