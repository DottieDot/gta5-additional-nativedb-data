// am_casino_peds.ysc @ L267100
void func_3039(int iParam0, vector3 vParam1, vector3 vParam2)
{
  int iVar0;
  
  iVar0 = func_3052();
  if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
  {
    OBJECT::DELETE_OBJECT(iParam0);
  }
  *iParam0 = OBJECT::CREATE_OBJECT_NO_OFFSET(iVar0, vParam1, false, true, false);
  if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
  {
    ENTITY::SET_ENTITY_COORDS_NO_OFFSET(*iParam0, vParam1, 0, 0, 1);
    ENTITY::SET_ENTITY_ROTATION(*iParam0, vParam2, 2, 1);
    ENTITY::FREEZE_ENTITY_POSITION(*iParam0, true);
    ENTITY::SET_ENTITY_COLLISION(*iParam0, false, 0);
    ENTITY::SET_ENTITY_INVINCIBLE(*iParam0, true);
    OBJECT::_SET_OBJECT_TEXTURE_VARIATION(*iParam0, func_3040(func_3051(PLAYER::PLAYER_ID())));
  }
}