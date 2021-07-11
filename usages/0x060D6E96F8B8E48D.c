// am_casino_peds.c @ L86067
bool func_659(var uParam0, int iParam1)
{
  char* sVar0;
  char* sVar1;
  
  if (!ENTITY::DOES_ENTITY_EXIST(*uParam0))
  {
    return 0;
  }
  if (!ENTITY::DOES_ENTITY_HAVE_DRAWABLE(*uParam0))
  {
    return 0;
  }
  sVar0 = func_660(4);
  sVar1 = uParam0->f_22;
  if (!ENTITY::IS_ENTITY_PLAYING_ANIM(*uParam0, sVar0, sVar1, 3))
  {
    return 0;
  }
  return ENTITY::HAS_ANIM_EVENT_FIRED(*uParam0, iParam1);
}