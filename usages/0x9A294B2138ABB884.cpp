// agency_heist3a.ysc @ L136745
void func_964()
{
  if (!ENTITY::DOES_ENTITY_EXIST(Local_326))
  {
    STREAMING::REQUEST_MODEL(Local_326.f_2);
    if (STREAMING::HAS_MODEL_LOADED(Local_326.f_2))
    {
      Local_326 = OBJECT::CREATE_OBJECT_NO_OFFSET(Local_326.f_2, Local_326.f_3, true, true, false);
    }
  }
}