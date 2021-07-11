// fmmc_launcher.ysc @ L514400
void func_7648(var uParam0, int iParam1, bool bParam2)
{
  int iVar0;
  int iVar1;
  int iVar2;
  
  iVar0 = func_221(385, iParam1);
  if (bParam2)
  {
    iVar1 = func_218(2151, iParam1);
    iVar2 = func_218(2158, iParam1);
  }
  else
  {
    iVar1 = func_39(2151, iParam1, 0);
    iVar2 = func_39(2158, iParam1, 0);
  }
  Global_76389[1 /*14*/] = { func_328(ENTITY::GET_ENTITY_MODEL(*uParam0), 2, iVar0, -1) };
  PED::SET_PED_COMPONENT_VARIATION(*uParam0, 2, Global_76389[1 /*14*/].f_3, Global_76389[1 /*14*/].f_4, 0);
  if (iVar1 == -1)
  {
    iVar1 = func_39(2151, iParam1, 0);
  }
  if (iVar2 == -1)
  {
    iVar2 = func_39(2158, iParam1, 0);
  }
  PED::_SET_PED_HAIR_COLOR(*uParam0, iVar1, iVar2);
}