// rural_bank_heist.ysc @ L125479
int func_884()
{
  if ((MISC::GET_GAME_TIMER() - iLocal_1151) > 500)
  {
    if (OBJECT::HAS_CLOSEST_OBJECT_OF_TYPE_BEEN_BROKEN(-183.6612f, 6371.806f, 31.68116f, 4f, joaat("prop_fncwood_01b"), 1))
    {
      iLocal_1144 = 1;
      return 1;
    }
    iLocal_1151 = MISC::GET_GAME_TIMER();
  }
  return 0;
}