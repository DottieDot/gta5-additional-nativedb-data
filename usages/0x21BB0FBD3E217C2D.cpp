// fbi2.ysc @ L146767
void func_962(bool bParam0, bool bParam1)
{
  int iVar0;
  vector3 vVar1;
  
  if (bParam1)
  {
    iVar0 = 0;
    while (iVar0 < Local_509.f_91)
    {
      PHYSICS::UNPIN_ROPE_VERTEX(Local_509.f_5, iVar0);
      iVar0++;
    }
  }
  vVar1 = { PHYSICS::GET_ROPE_LAST_VERTEX_COORD(Local_509.f_5) };
  iLocal_133 = OBJECT::CREATE_OBJECT(func_18(22), vVar1, true, true, false);
  ENTITY::SET_ENTITY_VISIBLE(iLocal_133, false, 0);
  ENTITY::SET_ENTITY_COLLISION(iLocal_133, false, 0);
  func_982(bParam0);
  func_963(bParam0);
}