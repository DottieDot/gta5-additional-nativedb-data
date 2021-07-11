// fm_bj_race_controler.c @ L279566
void func_3772()
{
  int iVar0;
  struct<14> Var1;
  
  if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
  {
    iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
    if (!ENTITY::IS_ENTITY_DEAD(iVar0, 0))
    {
      VEHICLE::_0x5E569EC46EC21CAE(iVar0, false);
      NETWORK::NETWORK_EXPLODE_VEHICLE(iVar0, 1, 0, PLAYER::PLAYER_ID());
    }
  }
  else if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
  {
    Var1.f_2 = 224946614;
    func_1621(Var1, func_1620(0));
    ENTITY::SET_ENTITY_HEALTH(PLAYER::PLAYER_PED_ID(), 0, 0);
  }
}