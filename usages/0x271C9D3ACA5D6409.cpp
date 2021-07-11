// mission_triggerer_a.ysc @ L4129
void func_52(var uParam0)
{
  if (PHYSICS::DOES_ROPE_EXIST(uParam0))
  {
    if (PHYSICS::_DOES_ROPE_BELONG_TO_THIS_SCRIPT(*uParam0))
    {
      PHYSICS::DELETE_ROPE(uParam0);
    }
  }
}