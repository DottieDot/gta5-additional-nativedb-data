// agency_heist3b.c @ L148805
void func_1109(int iParam0, vector3 vParam1, int iParam2, bool bParam3)
{
  vector3 vVar0[24];
  
  if (iParam0 == -1)
  {
    return;
  }
  StringCopy(&cVar0, "AH3B_DOOR_", 24);
  StringIntConCat(&cVar0, iParam0, 24);
  Local_507[iParam0 /*8*/] = MISC::GET_HASH_KEY(&cVar0);
  if (!OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(Local_507[iParam0 /*8*/]))
  {
    OBJECT::ADD_DOOR_TO_SYSTEM(Local_507[iParam0 /*8*/], iParam2, vParam1, 0, 1, 0);
  }
  if (bParam3)
  {
    OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(Local_507[iParam0 /*8*/], 0f, 0, 1);
    OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(Local_507[iParam0 /*8*/], 6, 1, 0);
    OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(Local_507[iParam0 /*8*/], 4, 1, 0);
  }
}