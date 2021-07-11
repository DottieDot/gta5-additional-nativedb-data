// agency_heist3a.c @ L143465
void func_1082()
{
  switch (iLocal_2092)
  {
    case 0:
      if (OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(Local_274.f_3, 1f, Local_274.f_2, 0))
      {
        ENTITY::CREATE_MODEL_HIDE(Local_274.f_3, 1f, Local_274.f_2, 0);
        Local_274 = OBJECT::CREATE_OBJECT_NO_OFFSET(Local_274.f_2, Local_274.f_3, true, true, false);
        ENTITY::SET_ENTITY_ROTATION(Local_274, Local_274.f_12, 2, 1);
        iLocal_2092++;
      }
      break;
    
    case 1:
      break;
  }
}