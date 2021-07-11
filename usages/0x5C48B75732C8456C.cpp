// am_mp_arcade_claw_crane.ysc @ L89518
void func_620(bool bParam0)
{
  var uVar0;
  int iVar1;
  
  if (!bParam0)
  {
    if (((func_18(Local_206.f_25[3]) && func_18(Local_206.f_25[2])) && func_18(Local_206.f_25[0])) && func_18(Local_206.f_25[1]))
    {
      uVar0 = func_550(PLAYER::PLAYER_ID());
      StringCopy(&(Local_206.f_54), "CLAW_START_PLAY", 64);
      Local_206.f_54.f_36 = 12;
      Local_206.f_54.f_35 = uVar0;
      iVar1 = ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(Local_206.f_25[2], "claw_02");
      ENTITY::_ATTACH_ENTITY_BONE_TO_ENTITY_BONE(Local_206.f_25[3], Local_206.f_25[2], iVar1, iVar1, 1, 0);
      ENTITY::SET_ENTITY_COLLISION(Local_206.f_25[3], true, 0);
      ENTITY::SET_ENTITY_COLLISION(Local_206.f_25[2], false, 0);
      ENTITY::SET_ENTITY_VISIBLE(Local_206.f_25[3], false, 0);
      ENTITY::FREEZE_ENTITY_POSITION(Local_206.f_25[0], false);
      ENTITY::FREEZE_ENTITY_POSITION(Local_206.f_25[1], false);
      func_621();
      func_104(&(Local_206.f_54), 1);
      func_110(&(Local_206.f_100), 0, 0);
      func_27(2, 1);
    }
  }
}