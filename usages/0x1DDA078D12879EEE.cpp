// fm_race_creator.ysc @ L224012
void func_2250(int iParam0)
{
  vector3 vVar0;
  int iVar1;
  
  if (SCRIPT::GET_EVENT_DATA(1, iParam0, &vVar0, 3))
  {
    if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
    {
      iVar1 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
      if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar1))
      {
        if (func_40(vVar0.y, 1, 1) && func_1958(PLAYER::GET_PLAYER_PED(vVar0.y), iVar1, 0))
        {
          if (vVar0.z)
          {
            VEHICLE::_SET_VEHICLE_CAN_BE_LOCKED_ON(iVar1, 0, 0);
          }
          else
          {
            VEHICLE::_SET_VEHICLE_CAN_BE_LOCKED_ON(iVar1, 1, 0);
          }
        }
      }
    }
  }
}