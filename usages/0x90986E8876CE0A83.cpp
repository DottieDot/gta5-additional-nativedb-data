// am_casino_limo.ysc @ L15162
void func_286()
{
  vector3 vVar0;
  float fVar1;
  
  if (!func_291())
  {
    return;
  }
  if ((!func_290(NETWORK::PARTICIPANT_ID(), 3) && !func_16(7)) && func_288(func_8()))
  {
    vVar0 = { func_270() };
    fVar1 = 0f;
    if (func_135(vVar0, &vVar0, &fVar1))
    {
      ENTITY::FREEZE_ENTITY_POSITION(func_7(), false);
      ENTITY::SET_ENTITY_VISIBLE(func_7(), true, 0);
      ENTITY::SET_ENTITY_COLLISION(func_7(), true, 0);
      ENTITY::SET_ENTITY_INVINCIBLE(func_7(), false);
      ENTITY::SET_ENTITY_COORDS(func_7(), vVar0, 1, false, 0, 1);
      ENTITY::SET_ENTITY_HEADING(func_7(), fVar1);
      func_131(vVar0, fVar1, func_273(), func_7());
      func_287(3);
    }
  }
}