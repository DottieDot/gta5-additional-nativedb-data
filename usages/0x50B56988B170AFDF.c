// act_cinema.c @ L10403
void func_166(int iParam0, int iParam1, bool bParam2)
{
  float fVar0;
  
  if (!bParam2)
  {
    fVar0 = func_180(157, iParam1);
  }
  else
  {
    fVar0 = func_178(157, iParam1);
  }
  if (*iParam0 == PLAYER::PLAYER_PED_ID())
  {
  }
  PED::_SET_PED_EYE_COLOR(*iParam0, SYSTEM::ROUND(fVar0));
}