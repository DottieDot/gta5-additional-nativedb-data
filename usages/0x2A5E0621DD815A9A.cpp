// business_battles.ysc @ L203350
void func_2875(int iParam0)
{
  int iVar0;
  
  if (!func_2877(iParam0))
  {
    return;
  }
  if (func_1235(uLocal_809.f_624[iParam0 /*7*/]))
  {
    iVar0 = NETWORK::NET_TO_VEH(uLocal_809.f_624[iParam0 /*7*/]);
    if (!ENTITY::IS_ENTITY_DEAD(iVar0, 0))
    {
      if (func_2876(iVar0))
      {
        NETWORK::_0x2A5E0621DD815A9A(iVar0, 1, 0, 0);
      }
    }
  }
}