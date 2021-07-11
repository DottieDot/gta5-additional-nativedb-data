// paparazzo1.ysc @ L40722
void func_358()
{
  if (!iLocal_259)
  {
    if (func_68(Local_544))
    {
      if (!PED::IS_PED_SITTING_IN_ANY_VEHICLE(Local_544))
      {
        PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_544, false);
        if (ENTITY::GET_ENTITY_HEALTH(Local_544) > 50)
        {
          ENTITY::SET_ENTITY_HEALTH(Local_544, 50, 0);
        }
        PED::_0xEC4B4B3B9908052A(Local_544, 30000f);
        iLocal_259 = 1;
      }
    }
    else
    {
      iLocal_259 = 1;
    }
  }
}