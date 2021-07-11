// freemode.c @ L769920
void func_11184(var uParam0)
{
  bool bVar0;
  int iVar1;
  
  bVar0 = false;
  if ((ENTITY::DOES_ENTITY_EXIST(uParam0->f_31) && !ENTITY::IS_ENTITY_DEAD(uParam0->f_31, 0)) && NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(uParam0->f_31))
  {
    iVar1 = ENTITY::GET_ENTITY_MODEL(uParam0->f_31);
    if ((iVar1 == joaat("volatol") || iVar1 == joaat("BOMBUSHKA")) || iVar1 == joaat("akula"))
    {
      bVar0 = true;
      func_11186(uParam0->f_31, iVar1, 0);
      func_11186(uParam0->f_31, iVar1, 1);
      func_11186(uParam0->f_31, iVar1, 2);
      if (!func_11110(&(uParam0->f_36), 0))
      {
        func_11109(&(uParam0->f_36), 0);
        uParam0->f_37 = uParam0->f_31;
        VEHICLE::_0x78CEEE41F49F421F(uParam0->f_31, 0);
      }
    }
  }
  if (!bVar0 && func_11110(&(uParam0->f_36), 0))
  {
    if (((((ENTITY::DOES_ENTITY_EXIST(uParam0->f_37) && !ENTITY::IS_ENTITY_DEAD(uParam0->f_37, 0)) && NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(uParam0->f_37)) && !func_11185(uParam0->f_37, 0)) && !func_11185(uParam0->f_37, 1)) && !func_11185(uParam0->f_37, 2))
    {
      VEHICLE::_0x78CEEE41F49F421F(uParam0->f_37, 1);
    }
    func_11111(&(uParam0->f_36), 0);
    uParam0->f_37 = -1;
  }
}