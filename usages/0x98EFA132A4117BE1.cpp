// abigail2.ysc @ L39873
int func_391(int iParam0, int iParam1, vector3 vParam2, float fParam3, char* sParam4, int iParam5)
{
  if (func_392(iParam0, iParam1, vParam2, fParam3, 1))
  {
    if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
    {
      if (!ENTITY::IS_ENTITY_DEAD(*iParam0, 0))
      {
        PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam0, true);
        PED::SET_PED_MONEY(*iParam0, 0);
        if (iParam5 == 1)
        {
          PED::SET_PED_CAN_BE_TARGETTED(*iParam0, false);
        }
      }
      PED::SET_PED_NAME_DEBUG(*iParam0, sParam4);
    }
    return 1;
  }
  return 0;
}