// director_mode.ysc @ L147423
void func_1027()
{
  int iVar0;
  int iVar1;
  
  iVar0 = 0;
  while (iVar0 < 50)
  {
    if (ENTITY::DOES_ENTITY_EXIST(Local_346[iVar0 /*13*/].f_11))
    {
      iVar1 = func_8(Local_346[iVar0 /*13*/]);
      if (!Local_342[iVar1 /*15*/].f_6)
      {
        ENTITY::FREEZE_ENTITY_POSITION(Local_346[iVar0 /*13*/].f_11, false);
        PHYSICS::ACTIVATE_PHYSICS(Local_346[iVar0 /*13*/].f_11);
      }
      ENTITY::SET_ENTITY_INVINCIBLE(Local_346[iVar0 /*13*/].f_11, false);
      ENTITY::SET_ENTITY_PROOFS(Local_346[iVar0 /*13*/].f_11, false, false, false, false, false, false, 0, false);
      ENTITY::SET_ENTITY_COLLISION(Local_346[iVar0 /*13*/].f_11, true, 0);
      if (ENTITY::DOES_ENTITY_HAVE_PHYSICS(Local_346[iVar0 /*13*/].f_11) && PHYSICS::_GET_HAS_OBJECT_FRAG_INST(Local_346[iVar0 /*13*/].f_11))
      {
        PHYSICS::_0xCC6E963682533882(Local_346[iVar0 /*13*/].f_11);
        PHYSICS::SET_DISABLE_FRAG_DAMAGE(Local_346[iVar0 /*13*/].f_11, 0);
      }
    }
    iVar0++;
  }
}