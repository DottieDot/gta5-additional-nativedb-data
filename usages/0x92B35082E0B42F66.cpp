// armenian1.ysc @ L48950
void func_464(var uParam0, float fParam1)
{
  if (VEHICLE::IS_VEHICLE_DRIVEABLE(*uParam0, 0))
  {
    if ((((((((((fParam1 > 10000f && fParam1 < 12500f) || (fParam1 > 23000f && fParam1 < 25000f)) || (fParam1 > 42500f && fParam1 < 45000f)) || (fParam1 > 48000f && fParam1 < 50500f)) || (fParam1 > 60500f && fParam1 < 63500f)) || (fParam1 > 78750f && fParam1 < 80500f)) || (fParam1 > 95750f && fParam1 < 98000f)) || (fParam1 > 110750f && fParam1 < 113000f)) || (fParam1 > 119000f && fParam1 < 121000f)) || (fParam1 > 123750f && fParam1 < 126000f))
    {
      VEHICLE::SET_VEHICLE_BRAKE_LIGHTS(*uParam0, 1);
    }
    if (((((((fParam1 > 10000f && fParam1 < 12500f) || (fParam1 > 42500f && fParam1 < 45000f)) || (fParam1 > 48000f && fParam1 < 51000f)) || (fParam1 > 71250f && fParam1 < 73200f)) || (fParam1 > 74250f && fParam1 < 76000f)) || (fParam1 > 110750f && fParam1 < 113500f)) || (fParam1 > 119000f && fParam1 < 121250f))
    {
      VEHICLE::SET_VEHICLE_INDICATOR_LIGHTS(*uParam0, 0, 1);
    }
    else
    {
      VEHICLE::SET_VEHICLE_INDICATOR_LIGHTS(*uParam0, 0, 0);
    }
    if ((((((fParam1 > 23000f && fParam1 < 25000f) || (fParam1 > 61000f && fParam1 < 64000f)) || (fParam1 > 78500f && fParam1 < 81000f)) || (fParam1 > 95750f && fParam1 < 98500f)) || (fParam1 > 115000f && fParam1 < 115750f)) || (fParam1 > 123500f && fParam1 < 126500f))
    {
      VEHICLE::SET_VEHICLE_INDICATOR_LIGHTS(*uParam0, 1, 1);
    }
    else
    {
      VEHICLE::SET_VEHICLE_INDICATOR_LIGHTS(*uParam0, 1, 0);
    }
  }
}