// armenian1.c @ L52727
void func_508(bool bParam0)
{
  if (bParam0)
  {
    if (!iLocal_280)
    {
      ENTITY::CREATE_FORCED_OBJECT(-1052.49f, -476.15f, 36.6f, 5f, joaat("prop_sec_barrier_ld_01a"), 1);
      ENTITY::CREATE_FORCED_OBJECT(-1207.25f, -578.08f, 26.17f, 5f, joaat("prop_sec_barier_03b"), 1);
      ENTITY::CREATE_FORCED_OBJECT(-1208.322f, -579.1413f, 26.27f, 5f, joaat("prop_sec_barier_base_01"), 1);
      iLocal_280 = 1;
    }
  }
  else if (iLocal_280)
  {
    ENTITY::REMOVE_FORCED_OBJECT(-1052.49f, -476.15f, 36.6f, 5f, joaat("prop_sec_barrier_ld_01a"));
    ENTITY::REMOVE_FORCED_OBJECT(-1207.25f, -578.08f, 26.17f, 5f, joaat("prop_sec_barier_03b"));
    ENTITY::REMOVE_FORCED_OBJECT(-1208.322f, -579.1413f, 26.27f, 5f, joaat("prop_sec_barier_base_01"));
    iLocal_280 = 0;
  }
}