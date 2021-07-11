// gb_casino_heist.ysc @ L444278
void func_7699(int iParam0)
{
  if (Local_1883.f_9 != 0)
  {
    return;
  }
  if (!func_4(iParam0, 32) && !func_8195(iParam0, NETWORK::PARTICIPANT_ID(), 25))
  {
    if (func_4(iParam0, 0))
    {
      if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_1883[iParam0]))
      {
        if (func_1022(Local_1883[iParam0]))
        {
          OBJECT::_0xAA059C615DE9DD03(NETWORK::NET_TO_OBJ(Local_1883[iParam0]), 1);
          func_1917(iParam0, 25);
        }
      }
    }
  }
}