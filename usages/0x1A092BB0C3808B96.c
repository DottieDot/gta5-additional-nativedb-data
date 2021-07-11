// am_ferriswheel.c @ L7204
void func_156()
{
  int iVar0;
  
  iVar0 = 0;
  Global_2538450 = 0f;
  iLocal_291 = OBJECT::CREATE_OBJECT(iLocal_287, 0f, 1f, 2f, false, false, false);
  ENTITY::SET_ENTITY_COORDS(iLocal_291, vLocal_293, 1, false, 0, 1);
  ENTITY::SET_ENTITY_ROTATION(iLocal_291, Global_2538450, 0f, 0f, 2, 1);
  ENTITY::FREEZE_ENTITY_POSITION(iLocal_291, true);
  ENTITY::SET_ENTITY_LOD_DIST(iLocal_291, 1000);
  ENTITY::SET_ENTITY_INVINCIBLE(iLocal_291, true);
  ENTITY::_0x1A092BB0C3808B96(iLocal_291, 0);
  if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("FAIRGROUND_RIDES_FERRIS_WHALE"))
  {
    AUDIO::START_AUDIO_SCENE("FAIRGROUND_RIDES_FERRIS_WHALE");
  }
  iVar0 = 0;
  while (iVar0 < 16)
  {
    func_157(&(Local_1071.f_36[iVar0 /*10*/]), iVar0);
    iVar0++;
  }
  if (!STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
  {
    func_22(64, 1, 0, 1, 0);
  }
}