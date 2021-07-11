// exile3.ysc @ L137064
void func_964(var uParam0)
{
  if (!PED::IS_PED_INJURED(*uParam0))
  {
    if (PED::IS_PED_DOING_DRIVEBY(*uParam0))
    {
      TASK::CLEAR_DRIVEBY_TASK_UNDERNEATH_DRIVING_TASK(*uParam0);
    }
    uParam0->f_1 = 0;
  }
}