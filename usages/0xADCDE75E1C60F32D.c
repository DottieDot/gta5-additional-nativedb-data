// am_heist_int.c @ L3731
void func_93()
{
  if (!MISC::IS_BIT_SET(vLocal_181[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_2, 2))
  {
    if (!func_7(&uLocal_189))
    {
      func_6(&uLocal_189, 0, 0);
    }
    else if (func_5(&uLocal_189, 5000, 0))
    {
      if (MISC::IS_POSITION_OCCUPIED(718.3742f, -977.444f, 23.1256f, 3f, 0, 1, 0, 0, 0, 0, 0))
      {
        MISC::SET_BIT(&(vLocal_181[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_2), 2);
      }
      func_4(&uLocal_189);
    }
  }
  else if (!MISC::IS_POSITION_OCCUPIED(718.3742f, -977.444f, 23.1256f, 3f, 0, 1, 0, 0, 0, 0, 0))
  {
    MISC::CLEAR_BIT(&(vLocal_181[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_2), 2);
  }
}