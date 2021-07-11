// fmmc_launcher.ysc @ L488632
void func_7192(var uParam0, vector3 vParam1, float fParam2)
{
  var uVar0;
  vector3 vVar1;
  vector3 vVar2;
  
  if (func_6387(uParam0))
  {
    if (STREAMING::HAS_ANIM_DICT_LOADED("mp_intro_seq@ig_4_car_select@player"))
    {
      vVar1 = { PED::GET_ANIM_INITIAL_OFFSET_POSITION("mp_intro_seq@ig_4_car_select@player", "loop", vParam1, 0f, 0f, fParam2, 0, 2) };
      vVar2 = { PED::GET_ANIM_INITIAL_OFFSET_ROTATION("mp_intro_seq@ig_4_car_select@player", "loop", vParam1, 0f, 0f, fParam2, 0f, 2) };
      if (func_4162())
      {
        vVar1 = { -212.08f, 308.45f, 96.95f };
        vVar2 = { 0f, 0f, -63.74f };
      }
      if (MISC::GET_GROUND_Z_FOR_3D_COORD(vVar1, &uVar0, 0, 0))
      {
        vVar1.z = uVar0;
      }
      ENTITY::SET_ENTITY_COORDS(*uParam0, vVar1, 0, false, 0, 1);
      ENTITY::SET_ENTITY_ROTATION(*uParam0, vVar2, 2, 1);
      ENTITY::SET_ENTITY_COLLISION(*uParam0, true, 0);
      PED::SET_PED_DESIRED_HEADING(*uParam0, ENTITY::GET_ENTITY_HEADING(*uParam0));
      PED::SET_PED_ALTERNATE_MOVEMENT_ANIM(*uParam0, 0, "mp_intro_seq@ig_4_car_select@player", "loop", 1000f, 1);
      PED::FORCE_PED_MOTION_STATE(*uParam0, -1871534317, true, 0, 1);
      PED::SET_PED_RESET_FLAG(*uParam0, 321, true);
    }
  }
}