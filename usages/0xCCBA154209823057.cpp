// ob_huffing_gas.ysc @ L2771
int func_73()
{
  if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
  {
    return 0;
  }
  if (!iLocal_278)
  {
    if (!func_74())
    {
      return 0;
    }
    if (!BRAIN::IS_OBJECT_WITHIN_BRAIN_ACTIVATION_RANGE(iLocal_41))
    {
      return 0;
    }
  }
  return 1;
}