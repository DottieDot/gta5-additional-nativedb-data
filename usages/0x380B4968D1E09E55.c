// am_mp_defunct_base.c @ L397759
void func_6004()
{
  if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
  {
    if (VEHICLE::IS_VEHICLE_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), joaat("khanjali")))
    {
      iLocal_4176 = 1;
      CAM::_0x380B4968D1E09E55();
    }
  }
  else
  {
    if (iLocal_4176)
    {
      func_293(&uLocal_4177, 0, 0);
      iLocal_4176 = 0;
    }
    if (func_195(&uLocal_4177))
    {
      if (func_193(&uLocal_4177, 500, 0))
      {
        func_192(&uLocal_4177);
      }
      CAM::_0x380B4968D1E09E55();
    }
  }
}