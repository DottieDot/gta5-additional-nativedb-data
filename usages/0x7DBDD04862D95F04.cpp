// am_backup_heli.ysc @ L919
void func_27(int iParam0)
{
  int iVar0;
  
  if (!func_29(PLAYER::PLAYER_ID(), 0, 0) && !func_28())
  {
    iVar0 = Global_1575012[5];
  }
  else
  {
    iVar0 = PED::GET_PED_RELATIONSHIP_GROUP_HASH(PLAYER::PLAYER_PED_ID());
  }
  PED::SET_PED_RELATIONSHIP_GROUP_HASH(NETWORK::NET_TO_PED(iParam0), iVar0);
}