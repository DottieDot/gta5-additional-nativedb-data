// fm_mission_controller.c @ L663072
void func_10736()
{
  if (CAM::DOES_CAM_EXIST(Global_2508006))
  {
    if (CAM::IS_CAM_ACTIVE(Global_2508006))
    {
      if (func_9525())
      {
        if (func_574(Global_4456448.f_190930) || func_3217(Global_4456448.f_190930))
        {
          if (OBJECT::_GET_PICKUP_GENERATION_RANGE_MULTIPLIER() < 20f)
          {
            OBJECT::SET_PICKUP_GENERATION_RANGE_MULTIPLIER(20f);
          }
        }
        else if (OBJECT::_GET_PICKUP_GENERATION_RANGE_MULTIPLIER() < 4f)
        {
          OBJECT::SET_PICKUP_GENERATION_RANGE_MULTIPLIER(4f);
        }
        OBJECT::_0x394CD08E31313C28();
      }
    }
  }
}