// agency_heist3a.ysc @ L139686
void func_1020(var uParam0, int iParam1)
{
  int iVar0;
  
  if (iParam1 == 0)
  {
    return;
  }
  iVar0 = uParam0->f_10[iParam1 /*57*/].f_27;
  if (uParam0->f_10[iVar0 /*57*/].f_4 || uParam0->f_10[iVar0 /*57*/].f_2 == 2)
  {
    uParam0->f_10[iParam1 /*57*/].f_6 = { CAM::GET_GAMEPLAY_CAM_COORD() + uParam0->f_10[iParam1 /*57*/].f_24 };
    uParam0->f_10[iParam1 /*57*/].f_9 = { CAM::GET_GAMEPLAY_CAM_ROT(2) };
  }
  else
  {
    uParam0->f_10[iParam1 /*57*/].f_6 = { uParam0->f_10[iVar0 /*57*/].f_6 + uParam0->f_10[iParam1 /*57*/].f_24 };
    uParam0->f_10[iParam1 /*57*/].f_9 = { uParam0->f_10[iVar0 /*57*/].f_9 };
  }
  uParam0->f_10[iParam1 /*57*/].f_21 = uParam0->f_10[iVar0 /*57*/].f_21;
  if (uParam0->f_10[iParam1 /*57*/].f_21 == 0f)
  {
    uParam0->f_10[iParam1 /*57*/].f_21 = CAM::GET_GAMEPLAY_CAM_FOV();
  }
  uParam0->f_10[iParam1 /*57*/].f_18 = uParam0->f_10[iVar0 /*57*/].f_18;
  uParam0->f_10[iParam1 /*57*/].f_12 = uParam0->f_10[iVar0 /*57*/].f_12;
  uParam0->f_10[iParam1 /*57*/].f_13 = { uParam0->f_10[iVar0 /*57*/].f_13 };
  uParam0->f_10[iParam1 /*57*/].f_19 = uParam0->f_10[iVar0 /*57*/].f_19;
  uParam0->f_10[iParam1 /*57*/].f_20 = uParam0->f_10[iVar0 /*57*/].f_20;
}