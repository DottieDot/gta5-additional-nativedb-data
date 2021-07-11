// abigail1.ysc @ L33707
int func_198(char* sParam0)
{
  int iVar0;
  
  iVar0 = 1424;
  if (!SCRIPT::DOES_SCRIPT_EXIST(sParam0))
  {
    return 1;
  }
  if (MISC::ARE_STRINGS_EQUAL(sParam0, "controller_Races"))
  {
    if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("controller_races")) > 0)
    {
      return 1;
    }
    iVar0 = 128;
  }
  SCRIPT::REQUEST_SCRIPT(sParam0);
  if (SCRIPT::HAS_SCRIPT_LOADED(sParam0))
  {
    SYSTEM::START_NEW_SCRIPT(sParam0, iVar0);
    SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED(sParam0);
    return 1;
  }
  return 0;
}