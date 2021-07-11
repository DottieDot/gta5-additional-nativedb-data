// act_cinema.ysc @ L122212
void func_1169(int iParam0)
{
  vector3 vVar0;
  int iVar1;
  int iVar2;
  bool bVar3;
  
  if (SCRIPT::GET_EVENT_DATA(1, iParam0, &vVar0, 3))
  {
    if (func_35(vVar0.y, 1, 1))
    {
      iVar1 = PLAYER::GET_PLAYER_PED(vVar0.y);
      if (ENTITY::DOES_ENTITY_EXIST(iVar1))
      {
        if (PED::IS_PED_IN_ANY_VEHICLE(iVar1, 0))
        {
          iVar2 = PED::GET_VEHICLE_PED_IS_IN(iVar1, 0);
          if (VEHICLE::IS_VEHICLE_WINDOW_INTACT(iVar2, vVar0.z) && NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
          {
            if (func_97(iVar2, &bVar3))
            {
              VEHICLE::REMOVE_VEHICLE_WINDOW(iVar2, vVar0.z);
            }
            if (bVar3)
            {
              ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iVar2);
            }
          }
        }
      }
    }
  }
}