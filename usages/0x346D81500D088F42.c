// am_casino_peds.c @ L65459
int func_470(int iParam0, int iParam1, var uParam2)
{
  int iVar0;
  
  if (!func_472(iParam0, iParam1))
  {
    return 0;
  }
  iVar0 = uParam2->f_1[iParam1->f_217[iParam0 /*71*/].f_5];
  if (!func_945(iParam1, 24))
  {
    if (func_362(PLAYER::PLAYER_PED_ID(), iParam1->f_217[iParam0 /*71*/], 6f, 1))
    {
      func_471(iParam0, iParam1, 1);
      if (func_17(iParam0, iVar0, &(iParam1->f_217[iParam0 /*71*/])))
      {
        func_352(iParam1, 24);
        return 1;
      }
    }
  }
  else if (!ENTITY::IS_ENTITY_PLAYING_ANIM(iParam1->f_217[iParam0 /*71*/], "ANIM@AMB@CASINO@PEDS@", "anim_amb_prop_human_seat_bar_female_elbows_on_bar_idle_e", 3) || ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iParam1->f_217[iParam0 /*71*/], "ANIM@AMB@CASINO@PEDS@", "anim_amb_prop_human_seat_bar_female_elbows_on_bar_idle_e") >= 0.96f)
  {
    func_471(iParam0, iParam1, 0);
    if (func_17(iParam0, iVar0, &(iParam1->f_217[iParam0 /*71*/])))
    {
      return 1;
    }
  }
  return 0;
}