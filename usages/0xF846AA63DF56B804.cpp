// fm_race_creator.ysc @ L223984
void func_2249(int iParam0)
{
  struct<4> Var0;
  int iVar1;
  
  if (SCRIPT::GET_EVENT_DATA(1, iParam0, &Var0, 4))
  {
    if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
    {
      iVar1 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
      if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar1))
      {
        if (func_40(Var0.f_1, 1, 1) && func_1958(PLAYER::GET_PLAYER_PED(Var0.f_1), iVar1, 0))
        {
          if (Var0.f_2)
          {
            VEHICLE::_SET_VEHICLE_BOMB_COUNT(iVar1, (VEHICLE::_GET_VEHICLE_BOMB_COUNT(iVar1) - 1));
          }
          else if (Var0.f_3)
          {
            VEHICLE::_SET_VEHICLE_COUNTERMEASURE_COUNT(iVar1, (VEHICLE::_GET_VEHICLE_COUNTERMEASURE_COUNT(iVar1) - 1));
          }
        }
      }
    }
  }
}