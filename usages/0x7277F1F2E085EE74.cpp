// gb_biker_criminal_mischief.ysc @ L1063
int func_34(int iParam0)
{
  if (Local_270.f_16 == -1 || Local_270.f_16 == iParam0)
  {
    Local_270.f_16 = iParam0;
    if (func_185(Local_270.f_12))
    {
      func_43(iParam0, func_184());
    }
    else if (func_41(func_42(Local_270.f_6[iParam0 /*4*/].f_3)))
    {
      if (func_41(func_39(Local_270.f_6[iParam0 /*4*/].f_3)))
      {
        if (NETWORK::CAN_REGISTER_MISSION_VEHICLES(1))
        {
          if (func_36(&(Local_270.f_6[iParam0 /*4*/].f_2), func_39(Local_270.f_6[iParam0 /*4*/].f_3), Local_270.f_12, Local_270.f_15, 1, 1, 1, 0, 1, 1, 0, 0, 0, 0))
          {
            if (NETWORK::CAN_REGISTER_MISSION_PEDS(1))
            {
              if (func_35(&(Local_270.f_6[iParam0 /*4*/]), Local_270.f_6[iParam0 /*4*/].f_2, 6, func_42(Local_270.f_6[iParam0 /*4*/].f_3), -1, 1, 1, 1))
              {
                STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(func_39(Local_270.f_6[iParam0 /*4*/].f_3));
                STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(func_42(Local_270.f_6[iParam0 /*4*/].f_3));
                return 1;
              }
            }
          }
        }
      }
    }
  }
  return 0;
}