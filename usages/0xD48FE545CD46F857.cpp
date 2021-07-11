// freemode.ysc @ L853787
void func_12308(int iParam0)
{
  int iVar0;
  
  if (HUD::IS_MP_GAMER_TAG_ACTIVE(iParam0))
  {
    if (Global_1383618.f_265 == 1)
    {
      if (MISC::IS_BIT_SET(Global_2424073[iParam0 /*421*/].f_229, 17))
      {
        iVar0 = func_2190(&(Global_1383618.f_266), 0, 0);
        iVar0 = (iVar0 + SYSTEM::ROUND((-177f / 0.8f)));
        if (iVar0 > SYSTEM::ROUND((190f * 4f)))
        {
          func_17302(&(Global_1383618.f_266));
          func_101(&(Global_1383618.f_266), 0, 0);
          iVar0 = func_2190(&(Global_1383618.f_266), 0, 0);
        }
        else if (iVar0 > 190)
        {
          iVar0 = 190;
        }
        else if (iVar0 < 0)
        {
          iVar0 = 0;
        }
        HUD::SET_MP_GAMER_TAG_ALPHA(iParam0, 17, iVar0);
      }
    }
  }
}