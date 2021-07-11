// am_mp_defunct_base.ysc @ L58670
void func_948()
{
  int iVar0;
  
  iVar0 = joaat("xm_prop_base_slide_door");
  Local_1791.f_999.f_34 = OBJECT::CREATE_OBJECT_NO_OFFSET(iVar0, 343.2f, 4860.2f, -52.8f, false, true, true);
  Local_1791.f_999.f_35 = OBJECT::CREATE_OBJECT_NO_OFFSET(iVar0, 342.3f, 4858.7f, -51.9f, false, true, true);
  if (ENTITY::DOES_ENTITY_EXIST(Local_1791.f_999.f_34) && func_701(Local_1791.f_999.f_34))
  {
    OBJECT::_SET_OBJECT_TEXTURE_VARIATION(Local_1791.f_999.f_34, func_949(Local_1791.f_11));
    CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_1791.f_999.f_34, "Base_Door1", 0, 0, 64);
  }
  if (ENTITY::DOES_ENTITY_EXIST(Local_1791.f_999.f_35) && func_701(Local_1791.f_999.f_35))
  {
    OBJECT::_SET_OBJECT_TEXTURE_VARIATION(Local_1791.f_999.f_35, func_949(Local_1791.f_11));
    CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_1791.f_999.f_35, "Base_Door2", 0, 0, 64);
  }
}