// am_mp_property_ext.c @ L293834
int func_3878()
{
  if (func_3814())
  {
    if (!func_3879())
    {
      if (func_2191(Local_347.f_14))
      {
        iLocal_358 = OBJECT::CREATE_OBJECT_NO_OFFSET(Local_347.f_14, Local_347.f_8, false, false, true);
        ENTITY::SET_ENTITY_ROTATION(iLocal_358, Local_347.f_11, 2, 1);
        ENTITY::FREEZE_ENTITY_POSITION(iLocal_358, true);
        ENTITY::SET_ENTITY_PROOFS(iLocal_358, true, true, true, true, true, true, 0, false);
        ENTITY::SET_ENTITY_INVINCIBLE(iLocal_358, true);
        ENTITY::SET_ENTITY_DYNAMIC(iLocal_358, 0);
        PHYSICS::SET_DISABLE_FRAG_DAMAGE(iLocal_358, 1);
        PHYSICS::SET_DISABLE_BREAKING(iLocal_358, 1);
        STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_347.f_14);
        return 1;
      }
      return 0;
    }
  }
  else if (ENTITY::DOES_ENTITY_EXIST(iLocal_358))
  {
    OBJECT::DELETE_OBJECT(&iLocal_358);
  }
  return 1;
}