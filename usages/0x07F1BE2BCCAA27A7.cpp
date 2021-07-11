// player_timetable_scene.ysc @ L4318
int func_26(char* sParam0, float fParam1, char* sParam2, char* sParam3, int iParam4)
{
  float fVar0;
  var uVar1;
  
  if (ENTITY::FIND_ANIM_EVENT_PHASE(sParam2, sParam3, sParam0, &fVar0, &uVar1))
  {
    if (fParam1 < fVar0)
    {
      *iParam4++;
    }
    else
    {
      *iParam4++;
      return 1;
    }
  }
  if (MISC::ARE_STRINGS_EQUAL(sParam0, "WalkInterruptible"))
  {
    if (func_26("END_IN_WALK", fParam1, sParam2, sParam3, iParam4))
    {
      return 1;
    }
  }
  return 0;
}