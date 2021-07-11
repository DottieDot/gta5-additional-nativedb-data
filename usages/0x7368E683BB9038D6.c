// am_mp_property_int.c @ L245172
void func_2510()
{
  int iVar0;
  vector3 vVar1;
  int iVar2;
  int iVar3;
  
  if (((func_3853(iLocal_522) && !MISC::IS_BIT_SET(Local_5451[PLAYER::PLAYER_ID() /*37*/].f_7, 17)) && Local_5543.f_503[8] != 0) && !MISC::IS_BIT_SET(iLocal_1195, 17))
  {
    MISC::SET_BIT(&iLocal_1195, 17);
  }
  if ((func_3853(iLocal_522) && !MISC::IS_BIT_SET(Local_5451[PLAYER::PLAYER_ID() /*37*/].f_7, 17)) && !MISC::IS_BIT_SET(iLocal_1195, 17))
  {
    STREAMING::REQUEST_ANIM_DICT("anim@safehouse@wine");
    if (STREAMING::HAS_ANIM_DICT_LOADED("anim@safehouse@wine"))
    {
      NETWORK::_RESERVE_NETWORK_LOCAL_OBJECTS(NETWORK::GET_NUM_RESERVED_MISSION_OBJECTS(false, 1) + 1);
      iLocal_2306 = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(Global_3932160.f_146.f_82[7 /*102*/].f_7, 10f, joaat("prop_wine_bot_01"), 1, 0, 1);
      if (ENTITY::DOES_ENTITY_EXIST(iLocal_2306))
      {
        iVar0 = NETWORK::OBJ_TO_NET(iLocal_2306);
        vVar1 = { PED::GET_ANIM_INITIAL_OFFSET_ROTATION("anim@safehouse@wine", "drink_wine_stage1_bottle", Global_3932160.f_146.f_82[7 /*102*/].f_7, Global_3932160.f_146.f_82[7 /*102*/].f_10, 0f, 2) };
        iVar2 = NETWORK::NETWORK_GET_ENTITY_FROM_NETWORK_ID(iVar0);
        ENTITY::SET_ENTITY_ROTATION(iVar2, vVar1, 2, 1);
        iVar3 = iVar2;
        ENTITY::SET_ENTITY_AS_NO_LONGER_NEEDED(&iVar3);
        NETWORK::NETWORK_UNREGISTER_NETWORKED_ENTITY(iVar2);
        MISC::SET_BIT(&iLocal_1195, 17);
      }
    }
  }
}