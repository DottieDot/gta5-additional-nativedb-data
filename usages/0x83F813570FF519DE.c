// fm_race_creator.c @ L386448
void func_5447(int iParam0)
{
  vector3 vVar0;
  int iVar1;
  
  if (SCRIPT::GET_EVENT_DATA(1, iParam0, &vVar0, 3))
  {
    iVar1 = vVar0.y;
    if (ENTITY::DOES_ENTITY_EXIST(Global_2437549.f_594[iVar1]))
    {
      if (!ENTITY::IS_ENTITY_DEAD(Global_2437549.f_594[iVar1], 0))
      {
        if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(Global_2437549.f_594[iVar1]))
        {
          VEHICLE::_DISABLE_VEHICLE_NEON_LIGHTS(Global_2437549.f_594[iVar1], vVar0.z);
        }
      }
    }
  }
}