// fm_hideout_controler.ysc @ L143446
void func_1510(int iParam0)
{
  if (PED::GET_PED_ACCURACY(NETWORK::NET_TO_PED(Local_330.f_5[iParam0])) < (Local_330.f_288 - 2) || PED::GET_PED_ACCURACY(NETWORK::NET_TO_PED(Local_330.f_5[iParam0])) > Local_330.f_288 + 2)
  {
    if (func_1511(Local_330.f_5[iParam0]))
    {
      PED::SET_PED_ACCURACY(NETWORK::NET_TO_PED(Local_330.f_5[iParam0]), Local_330.f_288);
    }
  }
}