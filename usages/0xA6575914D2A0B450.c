// fm_capture_creator.c @ L271134
void func_2756(int iParam0)
{
  struct<4> Var0;
  int iVar1;
  
  if ((!func_31() || !ENTITY::DOES_ENTITY_EXIST(iParam0)) || !ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
  {
    return;
  }
  Var0 = { func_2757(195) };
  iVar1 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(Var0, Var0.f_3);
  iVar1 = INTERIOR::GET_INTERIOR_AT_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true));
  if (INTERIOR::IS_VALID_INTERIOR(iVar1) && INTERIOR::IS_INTERIOR_READY(iVar1))
  {
    if (INTERIOR::GET_INTERIOR_FROM_ENTITY(iParam0) != iVar1)
    {
      INTERIOR::_0x82EBB79E258FA2B7(iParam0, iVar1);
      INTERIOR::FORCE_ROOM_FOR_ENTITY(iParam0, iVar1, INTERIOR::GET_ROOM_KEY_FOR_GAME_VIEWPORT());
    }
  }
}