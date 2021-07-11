// agency_heist3a.c @ L2802
void func_4()
{
  if (ENTITY::DOES_ENTITY_EXIST(Local_121))
  {
    if (ENTITY::IS_ENTITY_ATTACHED(Local_121))
    {
      ENTITY::DETACH_ENTITY(Local_121, 1, true);
      PED::RESET_PED_WEAPON_MOVEMENT_CLIPSET(PLAYER::PLAYER_PED_ID());
      PED::RESET_PED_MOVEMENT_CLIPSET(PLAYER::PLAYER_PED_ID(), 1048576000);
    }
  }
  if (ENTITY::DOES_ENTITY_EXIST(Local_127))
  {
    if (ENTITY::IS_ENTITY_ATTACHED(Local_127))
    {
      ENTITY::DETACH_ENTITY(Local_127, 1, true);
    }
  }
  if (func_23())
  {
    func_22(0);
    func_20(760.5546f, -983.6993f, 24.7744f, 82.4206f);
    func_17();
    func_5();
  }
}