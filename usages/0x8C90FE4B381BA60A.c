// ob_vend1.c @ L74120
int func_339(int iParam0)
{
  if (INTERIOR::GET_ROOM_KEY_FROM_ENTITY(iParam0) == MISC::GET_HASH_KEY("V_7_RecAreaRm") || INTERIOR::GET_ROOM_KEY_FROM_ENTITY(iParam0) == MISC::GET_HASH_KEY("V_7_GunSHopRm"))
  {
    if (OBJECT::IS_OBJECT_NEAR_POINT(joaat("v_ret_gc_chair02"), vLocal_66, 1f))
    {
      return 1;
    }
  }
  return 0;
}