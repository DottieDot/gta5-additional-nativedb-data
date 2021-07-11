// am_crate_drop.c @ L53571
void func_406(int iParam0, int iParam1, int iParam2)
{
  int iVar0;
  int iVar1;
  int iVar2;
  
  if (iParam0 != 0)
  {
    iVar0 = (WEAPON::GET_MAX_AMMO_IN_CLIP(PLAYER::PLAYER_PED_ID(), iParam0, 1) * iParam1);
    WEAPON::GET_MAX_AMMO(PLAYER::PLAYER_PED_ID(), iParam0, &iVar1);
    iVar2 = (iVar1 - WEAPON::GET_AMMO_IN_PED_WEAPON(PLAYER::PLAYER_PED_ID(), iParam0));
    if (iVar0 > iVar2)
    {
      iVar0 = iVar2;
    }
    WEAPON::ADD_AMMO_TO_PED(PLAYER::PLAYER_PED_ID(), iParam0, iVar0);
    if (iParam2 == 1)
    {
      func_407(PLAYER::PLAYER_PED_ID(), iVar0);
    }
  }
}