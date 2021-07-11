// extreme1.c @ L44987
void func_468()
{
  var uVar0;
  
  if (func_164(PLAYER::PLAYER_PED_ID()))
  {
    PED::GET_PED_PARACHUTE_TINT_INDEX(PLAYER::PLAYER_PED_ID(), &uVar0);
    func_42(PLAYER::PLAYER_PED_ID(), 8, 1, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
    func_42(PLAYER::PLAYER_PED_ID(), 14, 158, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
    PED::SET_PED_PARACHUTE_TINT_INDEX(PLAYER::PLAYER_PED_ID(), 1);
  }
}