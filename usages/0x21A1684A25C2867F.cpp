// am_rollercoaster.ysc @ L3307
void func_60()
{
  if (iLocal_35 < Global_262145.f_7791)
  {
    if (NETWORK::NETWORK_PLAYER_HAS_HEADSET(PLAYER::PLAYER_ID()))
    {
      func_121(iLocal_32, 300, "AMRC_SCRM_L", 1, -1, 2, -1082130432, -1082130432, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 1, 0, 0, 1, -1, 0, -1);
      fLocal_34 = NETWORK::NETWORK_GET_PLAYER_LOUDNESS(PLAYER::PLAYER_ID());
      if (fLocal_34 > 0f)
      {
        iLocal_32++;
        if (iLocal_32 >= 300)
        {
          func_120(1);
          func_61(0, PLAYER::PLAYER_PED_ID(), "AMRC_SCRM_R", -875716015, -1915191729, Global_262145.f_7790, 1, -1, 0, 0, 0);
          iLocal_35 = (iLocal_35 + Global_262145.f_7790);
          iLocal_32 = 0;
        }
      }
    }
  }
}