// act_cinema.c @ L122179
void func_1168(var uParam0)
{
  int iVar0;
  int iVar1;
  int iVar2;
  vector3 vVar3;
  
  iVar0 = 0;
  while (iVar0 < SCRIPT::GET_NUMBER_OF_EVENTS(1))
  {
    iVar1 = SCRIPT::GET_EVENT_AT_INDEX(1, iVar0);
    if (iVar1 == 174)
    {
      SCRIPT::GET_EVENT_DATA(1, iVar0, &iVar2, 2);
      switch (iVar2)
      {
        case -1773456834:
          func_1169(iVar0);
          break;
        
        case -498955166:
          SCRIPT::GET_EVENT_DATA(1, iVar0, &vVar3, 4);
          if (vVar3.z == 1934809180)
          {
            *uParam0 = 1;
          }
          break;
        }
    }
    iVar0++;
  }
}