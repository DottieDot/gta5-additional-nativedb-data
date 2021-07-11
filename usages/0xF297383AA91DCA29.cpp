// pm_gang_attack.ysc @ L1582
int func_43(int iParam0)
{
  int iVar0;
  
  iVar0 = 0;
  while (iVar0 <= 5)
  {
    if ((ENTITY::DOES_ENTITY_EXIST(uLocal_221[iVar0]) && !PED::IS_PED_INJURED(uLocal_221[iVar0])) && uLocal_222[iVar0] > 0)
    {
      iLocal_219 = 1;
    }
    iVar0++;
  }
  if (((((((((((func_44(Global_110270.f_35, 134217728) || PED::CAN_PED_SEE_HATED_PED(uLocal_221[iParam0], PLAYER::PLAYER_PED_ID())) || PLAYER::CAN_PED_HEAR_PLAYER(PLAYER::PLAYER_ID(), uLocal_221[iParam0])) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_PED(uLocal_221[iParam0])) || MISC::IS_BULLET_IN_AREA(ENTITY::GET_ENTITY_COORDS(uLocal_221[iParam0], true), 15f, 1)) || MISC::HAS_BULLET_IMPACTED_IN_AREA(ENTITY::GET_ENTITY_COORDS(uLocal_221[iParam0], true), 15f, 1, 1)) || FIRE::IS_EXPLOSION_IN_SPHERE(21, ENTITY::GET_ENTITY_COORDS(uLocal_221[iParam0], true), 15f)) || FIRE::IS_EXPLOSION_IN_SPHERE(10, ENTITY::GET_ENTITY_COORDS(uLocal_221[iParam0], true), 15f)) || FIRE::IS_EXPLOSION_IN_SPHERE(7, ENTITY::GET_ENTITY_COORDS(uLocal_221[iParam0], true), 15f)) || FIRE::IS_EXPLOSION_IN_SPHERE(0, ENTITY::GET_ENTITY_COORDS(uLocal_221[iParam0], true), 15f)) || FIRE::IS_EXPLOSION_IN_SPHERE(1, ENTITY::GET_ENTITY_COORDS(uLocal_221[iParam0], true), 15f)) || iLocal_219)
  {
    return 1;
  }
  return 0;
}