// freemode.ysc @ L843205
void func_12058(var uParam0, int iParam1)
{
  int iVar0;
  
  if (!func_9225())
  {
    if (OBJECT::DOES_PICKUP_EXIST((uParam0[iParam1 /*7*/])->f_4))
    {
      OBJECT::REMOVE_PICKUP((uParam0[iParam1 /*7*/])->f_4);
    }
    if (HUD::DOES_BLIP_EXIST((uParam0[iParam1 /*7*/])->f_3))
    {
      HUD::REMOVE_BLIP(&((uParam0[iParam1 /*7*/])->f_3));
    }
    if (!OBJECT::DOES_PICKUP_EXIST((uParam0[iParam1 /*7*/])->f_4))
    {
      if (!func_43(*(uParam0[iParam1 /*7*/])))
      {
        iVar0 = 0;
        MISC::SET_BIT(&iVar0, 3);
        MISC::SET_BIT(&iVar0, 4);
        MISC::SET_BIT(&iVar0, 2);
        MISC::SET_BIT(&iVar0, 0);
        MISC::SET_BIT(&iVar0, 5);
        MISC::SET_BIT(&iVar0, 8);
        func_7902(&iVar0);
        (uParam0[iParam1 /*7*/])->f_4 = OBJECT::CREATE_PICKUP_ROTATE((uParam0[iParam1 /*7*/])->f_5, *(uParam0[iParam1 /*7*/]) + Vector(0.1f, 0f, 0f), 0f, 360f, 0f, iVar0, func_9223((uParam0[iParam1 /*7*/])->f_5), 3, 0, 0);
        OBJECT::SET_PICKUP_REGENERATION_TIME((uParam0[iParam1 /*7*/])->f_4, 120000);
        (uParam0[iParam1 /*7*/])->f_6 = 1;
      }
    }
  }
}