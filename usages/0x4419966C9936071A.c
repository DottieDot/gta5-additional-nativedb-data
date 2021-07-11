// fm_race_creator.c @ L212579
void func_1941(int iParam0)
{
  if (ENTITY::DOES_ENTITY_EXIST(Global_2437549.f_594[iParam0]))
  {
    if (!ENTITY::IS_ENTITY_DEAD(Global_2437549.f_594[iParam0], 0))
    {
      if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(Global_2437549.f_594[iParam0]))
      {
        if (VEHICLE::_0x5BA68A0840D546AC(Global_2437549.f_594[iParam0], Global_2437549.f_593))
        {
          VEHICLE::_0x4419966C9936071A(Global_2437549.f_594[iParam0]);
        }
      }
    }
  }
}