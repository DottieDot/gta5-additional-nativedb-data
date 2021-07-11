// am_mp_armory_truck.ysc @ L297422
void func_4226()
{
  int iVar0;
  
  iVar0 = 0;
  while (iVar0 < 3)
  {
    if (!MISC::IS_STRING_NULL_OR_EMPTY(Local_1764.f_13[iVar0]))
    {
      AUDIO::SET_AMBIENT_ZONE_STATE(Local_1764.f_13[iVar0], 0, 1);
    }
    iVar0++;
  }
}