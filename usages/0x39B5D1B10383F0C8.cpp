// am_mp_arena_box.ysc @ L115159
void func_1254()
{
  if (((((((func_1251() && !MISC::IS_BIT_SET(Global_1695602, 3)) && !MISC::IS_BIT_SET(Global_1695602, 2)) && !MISC::IS_BIT_SET(Global_1695602, 4)) && !func_887(PLAYER::PLAYER_ID())) && !func_1257(PLAYER::PLAYER_ID())) && !(func_1255(PLAYER::PLAYER_ID()) == 1 && func_1250())) && !(Global_2509232 && !CAM::IS_GAMEPLAY_CAM_RENDERING()))
  {
    if (!MISC::IS_BIT_SET(Local_202.f_38, 9))
    {
      ENTITY::CREATE_MODEL_HIDE(2799.999f, -3915.813f, 179.9695f, 50f, MISC::GET_HASH_KEY("xs_propintarena_structure_s_05b"), 0);
      ENTITY::REMOVE_MODEL_HIDE(2800.957f, -3930.407f, 180.493f, 50f, MISC::GET_HASH_KEY("xs_x18intvip_vip_light_dummy"), false);
      MISC::SET_BIT(&(Local_202.f_38), 9);
    }
  }
  else if (MISC::IS_BIT_SET(Local_202.f_38, 9))
  {
    ENTITY::CREATE_MODEL_HIDE(2800.957f, -3930.407f, 180.493f, 50f, MISC::GET_HASH_KEY("xs_x18intvip_vip_light_dummy"), 0);
    ENTITY::REMOVE_MODEL_HIDE(2799.999f, -3915.813f, 179.9695f, 50f, MISC::GET_HASH_KEY("xs_propintarena_structure_s_05b"), false);
    MISC::CLEAR_BIT(&(Local_202.f_38), 9);
  }
}