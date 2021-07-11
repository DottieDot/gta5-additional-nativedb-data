// fm_mission_controller.ysc @ L323285
int func_4433(var uParam0, vector3 vParam1)
{
  int iVar0;
  int iVar1;
  int iVar2;
  
  if (*uParam0 == joaat("WEAPON_UNARMED"))
  {
    return 0;
  }
  iVar0 = WEAPON::CREATE_WEAPON_OBJECT(*uParam0, uParam0->f_1, vParam1, 0, 1065353216, 0, 0, 1);
  WEAPON::SET_WEAPON_OBJECT_TINT_INDEX(iVar0, uParam0->f_3);
  WEAPON::_0x977CA98939E82E4B(iVar0, uParam0->f_4);
  iVar2 = func_4431(*uParam0, iVar1);
  while (iVar2 != 0)
  {
    if (MISC::IS_BIT_SET(uParam0->f_2, iVar1))
    {
      WEAPON::GIVE_WEAPON_COMPONENT_TO_WEAPON_OBJECT(iVar0, iVar2);
      func_4428(iVar0, iVar2);
    }
    iVar1++;
    iVar2 = func_4431(*uParam0, iVar1);
  }
  return iVar0;
}