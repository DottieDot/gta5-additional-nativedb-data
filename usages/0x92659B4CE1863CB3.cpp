// am_crate_drop.ysc @ L50153
void func_328()
{
  int iVar0;
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
  {
    iVar0 = SYSTEM::ROUND((50f * Global_262145.f_111));
    func_146(816, iVar0, -1, 1, 0);
    iVar1 = PLAYER::GET_PLAYER_MAX_ARMOUR(PLAYER::PLAYER_ID());
    iVar2 = PED::GET_PED_ARMOUR(PLAYER::PLAYER_PED_ID());
    iVar3 = (iVar1 - iVar2);
    PED::SET_PED_ARMOUR(PLAYER::PLAYER_PED_ID(), (iVar2 + iVar3));
  }
}