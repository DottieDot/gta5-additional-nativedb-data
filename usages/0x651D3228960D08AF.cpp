// am_mp_arcade.ysc @ L326727
void func_4982()
{
  if (func_148(Local_823.f_344) && !ENTITY::DOES_ENTITY_EXIST(Local_823.f_794))
  {
    STREAMING::REQUEST_MODEL(joaat("prop_radio_01"));
    if (STREAMING::HAS_MODEL_LOADED(joaat("prop_radio_01")))
    {
      Local_823.f_794 = OBJECT::CREATE_OBJECT_NO_OFFSET(joaat("prop_radio_01"), 2715.445f, -363.413f, -55.228f, false, false, true);
      ENTITY::SET_ENTITY_HEADING(Local_823.f_794, -111.015f);
      AUDIO::_LINK_STATIC_EMITTER_TO_ENTITY("DLC_H3_Arcade_Planning_Room_Radio_Emitter", Local_823.f_794);
    }
  }
}