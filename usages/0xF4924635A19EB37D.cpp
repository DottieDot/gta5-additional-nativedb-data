// barry3.ysc @ L34728
int func_237()
{
  vector3 vVar0;
  float fVar1;
  
  if ((!ENTITY::DOES_ENTITY_EXIST(iLocal_46) && STREAMING::HAS_MODEL_LOADED(iLocal_49)) && STREAMING::HAS_MODEL_LOADED(iLocal_50))
  {
    vVar0 = { vLocal_235 };
    fVar1 = fLocal_240;
    if (func_238(PLAYER::PLAYER_PED_ID(), vLocal_235, 1) < func_238(PLAYER::PLAYER_PED_ID(), vLocal_236, 1))
    {
      vVar0 = { vLocal_236 };
      fVar1 = fLocal_241;
    }
    iLocal_46 = VEHICLE::CREATE_VEHICLE(iLocal_49, vVar0, fVar1, true, true, false);
    iLocal_47[0] = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_46, 6, iLocal_50, -1, 1, true);
    WEAPON::GIVE_DELAYED_WEAPON_TO_PED(iLocal_47[0], joaat("WEAPON_PISTOL"), -1, true);
    WEAPON::SET_PED_INFINITE_AMMO(iLocal_47[0], 1, joaat("WEAPON_PISTOL"));
    iLocal_47[1] = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_46, 6, iLocal_50, 0, 1, true);
    WEAPON::GIVE_DELAYED_WEAPON_TO_PED(iLocal_47[1], joaat("WEAPON_PISTOL"), -1, true);
    WEAPON::SET_PED_INFINITE_AMMO(iLocal_47[1], 1, joaat("WEAPON_PISTOL"));
    VEHICLE::SET_VEHICLE_SIREN(iLocal_46, true);
    VEHICLE::SET_VEHICLE_FORWARD_SPEED(iLocal_46, 20f);
    TASK::TASK_VEHICLE_DRIVE_TO_COORD(iLocal_47[0], iLocal_46, vLocal_237, 20f, 1, iLocal_49, 786603, 5f, 5f);
    return 1;
  }
  return 0;
}