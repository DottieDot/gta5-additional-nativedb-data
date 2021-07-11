// golf.c @ L126566
int func_1195(vector3 vParam0, float fParam1)
{
  int iVar0;
  
  if (func_984(vParam0, 0f, 0f, 0f, 1056964608, 0))
  {
    return 0;
  }
  iVar0 = OBJECT::CREATE_OBJECT(joaat("prop_golf_ball"), vParam0, true, true, false);
  OBJECT::_0xC6033D32241F6FB5(iVar0, 1);
  ENTITY::_SET_ENTITY_SOMETHING(iVar0, false);
  ENTITY::SET_ENTITY_HEADING(iVar0, fParam1);
  if (bLocal_45)
  {
  }
  return iVar0;
}