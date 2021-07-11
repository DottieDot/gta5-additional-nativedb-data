// agency_heist1.c @ L33792
int func_209(int iParam0, int iParam1, vector3 vParam2, float fParam3, bool bParam4, bool bParam5, bool bParam6)
{
  int iVar0;
  
  if (func_26(iParam1))
  {
    iVar0 = func_28(iParam1);
    STREAMING::REQUEST_MODEL(iVar0);
    if (STREAMING::HAS_MODEL_LOADED(iVar0))
    {
      if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
      {
        PED::DELETE_PED(iParam0);
      }
      *iParam0 = PED::CREATE_PED(26, iVar0, vParam2, fParam3, 0, false);
      func_420(*iParam0, iParam1, bParam5);
      PED::_0xE861D0B05C7662B8(*iParam0, 0, 0);
      func_413(*iParam0);
      func_398(*iParam0, 1, 0);
      func_397(*iParam0);
      func_394(*iParam0);
      func_211(*iParam0, bParam6);
      func_210(*iParam0);
      if (bParam4)
      {
        STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0);
      }
      return 1;
    }
  }
  return 0;
}