// appbikerbusiness.ysc @ L17559
void func_391(int iParam0, int iParam1, int iParam2)
{
  if (!NETWORK::NETWORK_IS_ACTIVITY_SESSION() && NETWORK::IS_STORE_AVAILABLE_TO_USER())
  {
    Global_73952 = iParam0;
    Global_73953 = iParam1;
    Global_73951 = 1;
    Global_4268270 = iParam2;
  }
}