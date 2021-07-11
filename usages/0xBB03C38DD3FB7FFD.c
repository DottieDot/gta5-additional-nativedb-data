// barry3a.c @ L43943
void func_370(int iParam0, int iParam1)
{
  if (!iLocal_232)
  {
    iLocal_232 = 1;
    iLocal_231 = MISC::GET_GAME_TIMER();
  }
  if (func_204(Local_56[iParam0 /*29*/].f_1))
  {
    PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_56[iParam0 /*29*/].f_1, false);
    PED::SET_PED_HIGHLY_PERCEPTIVE(Local_56[iParam0 /*29*/].f_1, 1);
    func_368(&(Local_56[iParam0 /*29*/].f_1), 1, 0, 1);
  }
  if (func_204(Local_56[iParam0 /*29*/].f_2))
  {
    PED::SET_PED_AS_COP(Local_56[iParam0 /*29*/].f_2, 1);
    PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_56[iParam0 /*29*/].f_2, false);
    PED::SET_PED_HIGHLY_PERCEPTIVE(Local_56[iParam0 /*29*/].f_2, 1);
    func_368(&(Local_56[iParam0 /*29*/].f_2), 1, 0, 1);
  }
  if (iParam1 && func_204(Local_56[iParam0 /*29*/]))
  {
    VEHICLE::SET_VEHICLE_ENGINE_ON(Local_56[iParam0 /*29*/], true, true, 0);
    func_371(&(Local_56[iParam0 /*29*/]));
  }
  if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) < 2)
  {
    PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 2, 0);
    PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), 0);
  }
  PLAYER::_0xDC64D2C53493ED12(PLAYER::PLAYER_ID());
  Local_56[iParam0 /*29*/].f_24 = 3;
}