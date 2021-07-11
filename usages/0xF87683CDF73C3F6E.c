// business_battles.c @ L200828
int func_2740(vector3 vParam0, vector3 vParam1, float fParam2)
{
  vector3 vVar0;
  vector3 vVar1;
  int iVar2;
  
  vVar0 = { func_2754(vParam0, vParam1) };
  vVar1 = { func_2743(vParam0, vParam1) };
  iVar2 = HUD::_ADD_BLIP_FOR_AREA(vVar0, fParam2, func_2742(vVar1));
  if (HUD::DOES_BLIP_EXIST(iVar2))
  {
    HUD::SET_BLIP_ROTATION(iVar2, SYSTEM::ROUND(func_2741(vParam0, vParam1)));
    return iVar2;
  }
  return iVar2;
}