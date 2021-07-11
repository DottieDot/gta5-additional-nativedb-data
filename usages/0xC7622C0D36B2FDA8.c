// am_backup_heli.c @ L890
void func_26(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
  WEAPON::GIVE_DELAYED_WEAPON_TO_PED(iParam0, joaat("WEAPON_ASSAULTRIFLE"), 300, true);
  PED::SET_PED_COMBAT_ATTRIBUTES(iParam0, 5, true);
  PED::SET_PED_COMBAT_ATTRIBUTES(iParam0, 3, false);
  PED::SET_PED_COMBAT_MOVEMENT(iParam0, 2);
  PED::SET_PED_COMBAT_ABILITY(iParam0, 1);
  PED::SET_PED_COMBAT_RANGE(iParam0, 2);
  PED::SET_PED_TARGET_LOSS_RESPONSE(iParam0, 1);
  PED::SET_PED_HIGHLY_PERCEPTIVE(iParam0, 1);
  PED::SET_PED_CAN_BE_TARGETTED(iParam0, true);
  PED::SET_PED_SEEING_RANGE(iParam0, (fLocal_61[iParam1] + 100f));
  PED::SET_PED_VISUAL_FIELD_PERIPHERAL_RANGE(iParam0, 400f);
  PED::SET_COMBAT_FLOAT(iParam0, 10, 400f);
  if (!bParam2)
  {
    if (bParam3)
    {
      ENTITY::SET_ENTITY_MAX_HEALTH(iParam0, 250);
      ENTITY::SET_ENTITY_HEALTH(iParam0, 250, 0);
      PED::SET_PED_ARMOUR(iParam0, 250);
    }
  }
  else
  {
    ENTITY::SET_ENTITY_INVINCIBLE(iParam0, true);
  }
}