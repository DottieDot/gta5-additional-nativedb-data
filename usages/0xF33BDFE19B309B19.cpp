// act_cinema.ysc @ L4863
void func_125(bool bParam0)
{
  struct<14> Var0;
  int iVar1;
  
  if (!PED::IS_PED_WEARING_HELMET(PLAYER::PLAYER_PED_ID()))
  {
    if (Global_4456448.f_190966 == 0)
    {
      if ((Global_2405071.f_2688 == -99 || Global_2405071.f_2688 == 0) || !func_338(ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()), 14, Global_2405071.f_2688, -1))
      {
        if (!bParam0)
        {
          iVar1 = func_337(588, -1, 0);
        }
      }
      else
      {
        iVar1 = Global_2405071.f_2688;
      }
      Var0 = { func_295(func_336(), 14, iVar1, -1) };
      func_294(PLAYER::PLAYER_PED_ID(), 14, iVar1);
      func_126(PLAYER::PLAYER_PED_ID(), 14, iVar1, 0, -1, 0, 0, 0, -1, -1, -1, 0, 1, 0);
      func_126(PLAYER::PLAYER_PED_ID(), 1, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 1, 0);
    }
    else
    {
      PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 380, true);
    }
  }
}