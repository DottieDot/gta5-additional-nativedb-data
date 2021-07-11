// am_mp_creator_trailer.c @ L2204
var func_3()
{
  int iVar0;
  
  if (!ENTITY::DOES_ENTITY_EXIST(Global_2531497.f_302[0]))
  {
    if (ENTITY::DOES_ENTITY_EXIST(func_4()) && !ENTITY::IS_ENTITY_DEAD(func_4(), 0))
    {
      if (ENTITY::IS_ENTITY_ATTACHED_TO_ANY_VEHICLE(func_4()))
      {
        iVar0 = ENTITY::GET_ENTITY_ATTACHED_TO(func_4());
        if (ENTITY::IS_ENTITY_A_VEHICLE(iVar0))
        {
          Global_2531497.f_302[0] = ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(iVar0);
        }
      }
    }
  }
  return Global_2531497.f_302[0];
}