// am_casino_peds.ysc @ L90793
char* func_758()
{
  return "anim_casino_b@amb@casino@games@threecardpoker@dealer";
}

Vector3 func_759(int iParam0)
{
  vector3 vVar0;
  
  vVar0 = { PED::GET_ANIM_INITIAL_OFFSET_POSITION(func_758(), "deck_pick_up_deck", func_757(iParam0), 0f, 0f, func_756(iParam0), 0.01f, 2) };
  return vVar0;
}