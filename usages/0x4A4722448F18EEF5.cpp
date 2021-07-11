// barry3.ysc @ L34709
void func_236(bool bParam0)
{
  if (ENTITY::DOES_ENTITY_EXIST(Local_39.f_41[0]))
  {
    if (bParam0)
    {
      if (!ENTITY::IS_ENTITY_ATTACHED(Local_39.f_41[0]))
      {
        ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_39.f_41[0], iLocal_45, PED::GET_PED_BONE_INDEX(iLocal_45, 60309), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
      }
    }
    else if (ENTITY::IS_ENTITY_ATTACHED(Local_39.f_41[0]))
    {
      ENTITY::DETACH_ENTITY(Local_39.f_41[0], 1, true);
      ENTITY::SET_ENTITY_HAS_GRAVITY(Local_39.f_41[0], 1);
    }
  }
}