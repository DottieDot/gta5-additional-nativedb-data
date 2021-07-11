// abigail1.ysc @ L30555
void func_169()
{
  vector3 vVar0[24];
  
  if (MISC::IS_XBOX360_VERSION() || MISC::IS_DURANGO_VERSION())
  {
    NETWORK::NETWORK_SET_RICH_PRESENCE(StackVal, 0, 0, 0);
  }
  else if (MISC::IS_PS3_VERSION() || MISC::IS_ORBIS_VERSION())
  {
    StringCopy(&cVar0, "PRESENCE_0_STR", 24);
    NETWORK::NETWORK_SET_RICH_PRESENCE_STRING(0, &cVar0);
  }
}