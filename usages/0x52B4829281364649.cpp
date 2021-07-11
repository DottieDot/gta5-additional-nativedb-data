// agency_heist3a.ysc @ L111360
void func_554(var uParam0)
{
  if (uParam0->f_57)
  {
    if (PHYSICS::DOES_ROPE_EXIST(&(uParam0->f_5)))
    {
      PHYSICS::DELETE_ROPE(&(uParam0->f_5));
    }
    if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_7))
    {
      OBJECT::DELETE_OBJECT(&(uParam0->f_7));
    }
    if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_8))
    {
      OBJECT::DELETE_OBJECT(&(uParam0->f_8));
    }
    uParam0->f_57 = 0;
  }
}