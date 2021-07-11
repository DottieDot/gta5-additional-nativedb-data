// fm_horde_controler.c @ L148360
void func_1335()
{
  struct<8> Var0[1];
  struct<6> Var1[1];
  
  if (func_5979(PLAYER::PLAYER_ID(), 0))
  {
    return;
  }
  if (!MISC::ARE_STRINGS_EQUAL(&(Global_4456448.f_154647), ""))
  {
    StringCopy(&(Var0[0 /*8*/]), "Mission", 32);
    Var1[0 /*6*/] = { Global_4456448.f_154647 };
    if (func_1337(791, &Var1, &Var0, 1, -1, 1, 0))
    {
      func_1336(791, 131, Local_6679[NETWORK::PARTICIPANT_ID_TO_INT() /*12*/].f_6, 0f, 0);
      func_1336(791, 125, Local_5831.f_1295, 0f, 0);
      func_1336(791, 92, Local_6679[NETWORK::PARTICIPANT_ID_TO_INT() /*12*/].f_2, 0f, 0);
      func_1336(791, 80, Local_6679[NETWORK::PARTICIPANT_ID_TO_INT() /*12*/].f_5, 0f, 0);
      STATS::LEADERBOARDS_WRITE_ADD_COLUMN_LONG(156, Local_5831.f_1508[1], Local_5831.f_1508[0]);
    }
  }
}