// fbi2.ysc @ L148229
void func_990()
{
  int iVar0;
  int iVar1;
  int iVar2;
  
  if (!bLocal_352)
  {
    if (!PED::IS_PED_INJURED(iLocal_123))
    {
      WEAPON::GET_CURRENT_PED_WEAPON(iLocal_123, &iVar2, 1);
      if (iVar2 == joaat("WEAPON_HEAVYSNIPER"))
      {
        iVar0 = WEAPON::GET_CURRENT_PED_WEAPON_ENTITY_INDEX(iLocal_123);
        if (ENTITY::DOES_ENTITY_EXIST(iVar0))
        {
          iVar1 = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(iVar0);
          ENTITY::SET_ENTITY_MOTION_BLUR(iVar1, 0);
        }
      }
    }
  }
}