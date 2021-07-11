// act_cinema.ysc @ L75265
void func_348(int iParam0)
{
  if (ENTITY::DOES_ENTITY_EXIST(iParam0))
  {
  }
  if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iParam0))
  {
    if (NETWORK::NETWORK_GET_ENTITY_IS_LOCAL(iParam0))
    {
      ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iParam0, false, 1);
    }
  }
  ENTITY::SET_ENTITY_VISIBLE(iParam0, false, 0);
  ENTITY::FREEZE_ENTITY_POSITION(iParam0, true);
  func_668(iParam0);
  Global_2405071.f_45.f_172 = iParam0;
  Global_1322988 = iParam0;
  if (Global_2405071.f_45.f_171)
  {
    func_378(iParam0, 1);
  }
  else
  {
    func_349(iParam0, func_377(PLAYER::PLAYER_ID()));
  }
  if (ENTITY::DOES_ENTITY_EXIST(iParam0))
  {
  }
  Global_2405071.f_45.f_174 = 1;
}