// am_casino_peds.c @ L103192
void func_946(int iParam0)
{
  if (Global_2508924)
  {
    ENTITY::CREATE_MODEL_HIDE(1104.572f, 229.4451f, -50.8409f, 0.1f, MISC::GET_HASH_KEY("vw_prop_casino_slot_04a"), 1);
    func_352(iParam0, 26);
  }
  else if (func_945(iParam0, 26))
  {
    ENTITY::REMOVE_MODEL_HIDE(1104.572f, 229.4451f, -50.8409f, 0.1f, MISC::GET_HASH_KEY("vw_prop_casino_slot_04a"), false);
    func_944(iParam0, 26);
  }
}