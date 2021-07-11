// family_scene_f0.ysc @ L104504
int func_468()
{
  int iVar0;
  int iVar1;
  
  iVar0 = WEAPON::GET_SELECTED_PED_WEAPON(PLAYER::PLAYER_PED_ID());
  if (iVar0 == 0)
  {
    return 0;
  }
  iVar1 = WEAPON::GET_WEAPONTYPE_GROUP(iVar0);
  if (iVar1 == joaat("GROUP_THROWN"))
  {
    return 1;
  }
  return 0;
}