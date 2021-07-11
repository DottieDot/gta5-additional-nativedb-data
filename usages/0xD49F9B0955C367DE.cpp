// abigail2.ysc @ L39895
int func_392(int iParam0, int iParam1, vector3 vParam2, float fParam3, bool bParam4)
{
  int iVar0;
  
  if (!func_160(iParam1))
  {
    iVar0 = func_498(iParam1);
    STREAMING::REQUEST_MODEL(iVar0);
    if (STREAMING::HAS_MODEL_LOADED(iVar0))
    {
      if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
      {
        PED::DELETE_PED(iParam0);
      }
      *iParam0 = PED::CREATE_PED(26, iVar0, vParam2, fParam3, 0, false);
      PED::SET_PED_DEFAULT_COMPONENT_VARIATION(*iParam0);
      if (iVar0 == joaat("ig_lamardavis"))
      {
        if (PED::GET_PED_DRAWABLE_VARIATION(*iParam0, 3) == 0)
        {
          PED::SET_PED_COMPONENT_VARIATION(*iParam0, 5, 2, 0, 0);
        }
      }
      func_393(*iParam0, iParam1);
      if (bParam4)
      {
        STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0);
      }
      return 1;
    }
  }
  return 0;
}