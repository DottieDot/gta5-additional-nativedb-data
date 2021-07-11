// fanatic3.ysc @ L45446
void func_455()
{
  if (func_524(PLAYER::PLAYER_PED_ID()) && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
  {
    if (func_524(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0)))
    {
      if (!iLocal_162)
      {
        if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), -162.9305f, 6574.679f, 11.03543f, -166.7214f, 6578.559f, 15.14065f, 3.5f, 0, true, 0))
        {
          RECORDING::_0x48621C9FCA3EBD28(3);
          iLocal_162 = 1;
          func_9("*** Started tracking jump replay");
        }
      }
      else if ((ENTITY::IS_ENTITY_IN_ANGLED_AREA(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), -152.1211f, 6592.195f, 8.325163f, -149.1945f, 6588.718f, 13.28955f, 5.25f, 0, true, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), -183.9688f, 6611.616f, -1.050815f, -146.163f, 6575.147f, 7.485405f, 46.5f, 0, true, 0)) || !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), -182.5904f, 6607.474f, 0.027168f, -143.88f, 6571.712f, 37.02929f, 70.75f, 0, true, 0))
      {
        RECORDING::_0x81CBAE94390F9F89();
        iLocal_162 = 0;
        func_9("*** Stopped tracking jump replay");
      }
    }
  }
  else if (iLocal_162)
  {
    func_9("*** Stopped tracking jump replay (player not in vehicle)");
    iLocal_162 = 0;
    RECORDING::_0x81CBAE94390F9F89();
  }
}