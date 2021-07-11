// fm_horde_controler.ysc @ L166706
void func_1762(int iParam0, var uParam1)
{
  int iVar0;
  vector3 vVar1;
  vector3 vVar2;
  int iVar3;
  
  if (!*uParam1)
  {
    iVar3 = ENTITY::GET_NEAREST_PLAYER_TO_ENTITY(iParam0);
    iVar0 = iVar3;
    if (func_2813(iVar0, 1, 1))
    {
      vVar1 = { ENTITY::GET_ENTITY_COORDS(iParam0, true) };
      vVar2 = { ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(iVar0), true) };
      if (SYSTEM::VDIST2(vVar1, vVar2) <= 400f)
      {
        if (MISC::GET_RANDOM_INT_IN_RANGE(0, 2) == 0)
        {
          func_1763(iParam0, "GENERIC_INSULT_HIGH", 9);
          *uParam1 = 1;
        }
        else
        {
          *uParam1 = 1;
        }
      }
    }
  }
}