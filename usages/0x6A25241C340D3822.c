// agency_heist3b.c @ L122542
void func_773(bool bParam0)
{
  if (WEAPON::HAS_PED_GOT_WEAPON(func_116(), iLocal_219, 0))
  {
    WEAPON::SET_CURRENT_PED_WEAPON(func_116(), iLocal_219, false);
    if (WEAPON::GET_AMMO_IN_PED_WEAPON(func_116(), iLocal_219) < 240)
    {
      WEAPON::SET_PED_AMMO(func_116(), iLocal_219, 240, 0);
    }
  }
  else
  {
    WEAPON::GIVE_WEAPON_TO_PED(func_116(), iLocal_219, 240, true, true);
  }
  if (bParam0)
  {
    TASK::TASK_PUT_PED_DIRECTLY_INTO_COVER(func_116(), vLocal_238, 1000, true, 0.5f, true, 0, Local_440[0 /*20*/].f_1, 0);
  }
  else
  {
    ENTITY::SET_ENTITY_COORDS(func_116(), vLocal_238, 1, false, 0, 1);
    ENTITY::SET_ENTITY_HEADING(func_116(), 339.1769f);
    TASK::TASK_PUT_PED_DIRECTLY_INTO_COVER(func_116(), vLocal_238, 1000, true, 0f, true, 0, Local_440[0 /*20*/].f_1, 0);
  }
  PED::_0x2208438012482A1A(func_116(), 1, 0);
  PED::SET_PED_SPHERE_DEFENSIVE_AREA(func_116(), 150.5477f, -761.1173f, 257.1522f, 1.5f, 0, 0);
  iLocal_442[6] = CAM::CREATE_CAMERA_WITH_PARAMS(26379945, 150.9026f, -762.486f, 258.6959f, -5.6055f, -3.5952f, -172.9336f, 10f, 0, 2);
  CAM::SHAKE_CAM(iLocal_442[6], "HAND_SHAKE", 0.1f);
  vLocal_1393 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_443[2 /*2*/], vLocal_1394) };
  CAM::POINT_CAM_AT_COORD(iLocal_442[6], vLocal_1393);
  iLocal_1392 = 3;
}