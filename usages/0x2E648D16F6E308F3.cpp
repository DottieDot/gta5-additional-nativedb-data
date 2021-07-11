// chinese1.ysc @ L107706
void func_535()
{
  int iVar0;
  
  if (!iLocal_479)
  {
    if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
    {
      iVar0 = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(1389.11f, 3600.43f, 39.51f, 2f, joaat("v_ret_ml_win5"), 1, 0, 1);
    }
    PHYSICS::BREAK_ENTITY_GLASS(iVar0, 1388.929f, 3600.903f, 40f, 1f, 0f, 1f, 0f, 1100f, 1, 1);
    ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&iVar0);
    iLocal_479 = 1;
  }
}