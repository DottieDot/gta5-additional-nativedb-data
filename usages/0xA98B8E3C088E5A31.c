// agency_heist3b.c @ L114107
void func_669(var uParam0, vector3 vParam1, float fParam2, int iParam3, int iParam4, int iParam5)
{
  if (*uParam0 != 0)
  {
    TASK::REMOVE_COVER_POINT(*uParam0);
  }
  if (!TASK::DOES_SCRIPTED_COVER_POINT_EXIST_AT_COORDS(vParam1))
  {
    *uParam0 = TASK::ADD_COVER_POINT(vParam1, fParam2, iParam3, iParam4, iParam5, 0);
  }
}