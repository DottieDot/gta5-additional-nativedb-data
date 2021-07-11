// act_cinema.c @ L100654
void func_686(int iParam0)
{
  ENTITY::FREEZE_ENTITY_POSITION(iParam0, true);
  ENTITY::SET_ENTITY_COLLISION(iParam0, false, 0);
  ENTITY::SET_ENTITY_INVINCIBLE(iParam0, true);
  VEHICLE::_0x1CF38D529D7441D9(iParam0, true);
}