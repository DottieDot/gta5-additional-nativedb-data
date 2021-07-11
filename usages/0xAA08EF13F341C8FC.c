// agency_heist3b.c @ L139939
void func_998(var uParam0, int iParam1)
{
  int iVar0;
  
  iVar0 = 0;
  while (iVar0 < uParam0->f_202)
  {
    if (uParam0->f_202[iVar0 /*7*/])
    {
      if (uParam0->f_202[iVar0 /*7*/].f_4 == iParam1)
      {
        if (uParam0->f_202[iVar0 /*7*/].f_1)
        {
          WEAPON::REMOVE_WEAPON_ASSET(iParam1);
          func_46(&(uParam0->f_202[iVar0 /*7*/]));
          return;
        }
        else
        {
          uParam0->f_202[iVar0 /*7*/].f_2 = 1;
          uParam0->f_982 = 1;
          return;
        }
      }
    }
    iVar0++;
  }
}