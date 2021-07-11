// fm_capture_creator.ysc @ L323482
int func_3395(int iParam0)
{
  STREAMING::REQUEST_MODEL(iParam0);
  if (func_3392(PLAYER::PLAYER_ID(), 0, 0))
  {
    if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
    {
      if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == iParam0)
      {
        return 1;
      }
    }
  }
  if (func_3396(iParam0))
  {
    PLAYER::SET_PLAYER_MODEL(PLAYER::PLAYER_ID(), iParam0);
    STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iParam0);
    return 1;
  }
  return 0;
}