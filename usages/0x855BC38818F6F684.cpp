// appcontacts.ysc @ L12609
int func_231(var uParam0, char* sParam1)
{
  if (Global_2537824.f_1)
  {
    if (NETWORK::NETWORK_SESSION_IS_IN_VOICE_SESSION())
    {
      NETWORK::NETWORK_SESSION_VOICE_CONNECT_TO_PLAYER(&(uParam0->f_2963));
      Global_2537824.f_20 = { uParam0->f_2963 };
      StringCopy(&(Global_2537824.f_4), sParam1, 64);
      return 1;
    }
  }
  return 0;
}