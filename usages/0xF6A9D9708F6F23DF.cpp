// josh3.ysc @ L35278
void func_250()
{
  if (!FIRE::IS_ENTITY_ON_FIRE(PLAYER::PLAYER_PED_ID()) && func_251(PLAYER::PLAYER_PED_ID(), vLocal_331, 2f))
  {
    FIRE::START_ENTITY_FIRE(PLAYER::PLAYER_PED_ID());
  }
}