// completionpercentage_controller.c @ L30269
void func_150()
{
  if (!MISC::IS_BIT_SET(Global_111560.f_10189.f_3856, 15))
  {
    if (STATS::_0x5EAD2BF6484852E4())
    {
      MISC::SET_BIT(&(Global_111560.f_10189.f_3856), 15);
      STATS::_UPDATE_STAT_INT(joaat("SP_VEHICLE_MODELS_DRIVEN"), 200, 0);
    }
  }
}