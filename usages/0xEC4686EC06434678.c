// carsteal4.c @ L3829
int func_53(vector3 vParam0, float fParam1)
{
  if (!ENTITY::DOES_ENTITY_EXIST(iLocal_469[2]))
  {
    if (func_55(&(iLocal_469[2]), 2, vParam0, fParam1, 1, 0, 0))
    {
      PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(iLocal_469[2], 1);
      func_54(&Local_528, 2, iLocal_469[2], "TREVOR", 0, 1);
      PED::SET_PED_CAN_BE_TARGETTED(iLocal_469[2], false);
      PED::SET_PED_MAX_HEALTH(iLocal_469[2], 200);
      ENTITY::SET_ENTITY_HEALTH(iLocal_469[2], 200, 0);
      PED::SET_PED_SUFFERS_CRITICAL_HITS(iLocal_469[2], 0);
      PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_469[2], 1862763509);
      return 1;
    }
  }
  else
  {
    return 1;
  }
  return 0;
}