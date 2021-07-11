// fm_capture_creator.ysc @ L183576
void func_1479(int iParam0, var uParam1)
{
  if (iParam0 != 0)
  {
    if (uParam1->f_26 != iParam0)
    {
      if (uParam1->f_26 != 0)
      {
        STREAMING::REMOVE_MODEL_FROM_CREATOR_BUDGET(uParam1->f_26);
      }
      uParam1->f_26 = iParam0;
      STREAMING::ADD_MODEL_TO_CREATOR_BUDGET(uParam1->f_26);
    }
  }
}