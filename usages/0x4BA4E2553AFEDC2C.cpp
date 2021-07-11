// am_challenges.ysc @ L18913
bool func_525()
{
  return MISC::IS_BIT_SET(Global_1687880, 5);
}

Vector3 func_526(int iParam0)
{
  int iVar0;
  
  switch (HUD::GET_BLIP_INFO_ID_TYPE(iParam0))
  {
    case 1:
    case 2:
    case 3:
      iVar0 = HUD::GET_BLIP_INFO_ID_ENTITY_INDEX(iParam0);
      if (ENTITY::DOES_ENTITY_EXIST(iVar0))
      {
        return ENTITY::GET_ENTITY_COORDS(iVar0, false);
      }
      break;
  }
  return HUD::GET_BLIP_COORDS(iParam0);
}