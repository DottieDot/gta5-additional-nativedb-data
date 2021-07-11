// fm_intro.ysc @ L2144
void func_44(int iParam0)
{
  int iVar0;
  var uVar1;
  
  if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
  {
    iVar0 = func_58(PLAYER::PLAYER_ID());
    if (iVar0 < iParam0)
    {
      if (func_57())
      {
        func_45(1734805203, (iParam0 - iVar0), &uVar1, 0, 0, 0);
      }
      else
      {
        MONEY::NETWORK_EARN_FROM_HOLDUPS((iParam0 - iVar0));
      }
    }
  }
}