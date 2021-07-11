// tattoo_shop.c @ L3711
void func_28()
{
  int iVar0;
  
  iVar0 = PLAYER::PLAYER_PED_ID();
  if (ENTITY::DOES_ENTITY_EXIST(vLocal_103.z) && !PED::IS_PED_INJURED(vLocal_103.z))
  {
    iVar0 = vLocal_103.z;
  }
  if (ENTITY::DOES_ENTITY_EXIST(iVar0))
  {
    PED::HIDE_PED_BLOOD_DAMAGE_BY_ZONE(iVar0, 1, 0);
    PED::HIDE_PED_BLOOD_DAMAGE_BY_ZONE(iVar0, 0, 0);
    PED::HIDE_PED_BLOOD_DAMAGE_BY_ZONE(iVar0, 4, 0);
    PED::HIDE_PED_BLOOD_DAMAGE_BY_ZONE(iVar0, 5, 0);
    PED::HIDE_PED_BLOOD_DAMAGE_BY_ZONE(iVar0, 2, 0);
    PED::HIDE_PED_BLOOD_DAMAGE_BY_ZONE(iVar0, 3, 0);
  }
}