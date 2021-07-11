// abigail1.c @ L37826
void func_270(int iParam0)
{
  if (iParam0 == -1)
  {
    return;
  }
  if (func_265(&(Global_75396.f_555[0 /*21*/]), iParam0))
  {
    if (ENTITY::DOES_ENTITY_EXIST(Global_75396.f_139[iParam0]))
    {
      ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_75396.f_139[iParam0], true, 1);
      ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(Global_75396.f_139[iParam0]));
      Global_75396.f_139[iParam0] = 0;
    }
    if (MISC::IS_BIT_SET(Global_75396.f_555[0 /*21*/].f_9, 13))
    {
      func_227(iParam0, 0);
    }
  }
}