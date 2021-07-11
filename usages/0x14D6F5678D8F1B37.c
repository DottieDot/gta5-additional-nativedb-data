// agency_heist3a.c @ L139178
void func_1004(var uParam0, int iParam1, int iParam2)
{
  int iVar0;
  
  iVar0 = 0;
  while (iVar0 < uParam0->f_10)
  {
    if ((iParam1 >= uParam0->f_1218 && iVar0 >= uParam0->f_1218) || iParam2)
    {
      if (uParam0->f_10[uParam0->f_10[iVar0 /*57*/].f_27 /*57*/].f_4 || uParam0->f_10[uParam0->f_10[iVar0 /*57*/].f_27 /*57*/].f_2 == 2)
      {
        CAM::SET_CAM_COORD(uParam0->f_10[iVar0 /*57*/].f_1, CAM::GET_GAMEPLAY_CAM_COORD() + uParam0->f_10[iVar0 /*57*/].f_24);
        CAM::SET_CAM_ROT(uParam0->f_10[iVar0 /*57*/].f_1, CAM::GET_GAMEPLAY_CAM_ROT(2), 2);
      }
    }
    iVar0++;
  }
}