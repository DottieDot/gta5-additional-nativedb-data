// gb_airfreight.c @ L35282
void func_867(bool bParam0)
{
  float fVar0;
  int iVar1;
  
  if (func_870())
  {
    iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(0, 100);
    if (bParam0)
    {
      fVar0 = func_869();
    }
    else
    {
      fVar0 = func_868();
    }
    if (IntToFloat(iVar1) < fVar0)
    {
      if (func_917())
      {
        if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(func_32()) && NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(func_399()))
        {
          if (ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(func_31(), func_912()))
          {
            VEHICLE::_DETACH_ENTITY_FROM_CARGOBOB(func_31(), func_912());
          }
        }
      }
    }
  }
}