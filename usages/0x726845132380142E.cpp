// business_battles_sell.ysc @ L325078
void func_4900(int iParam0, int iParam1)
{
  if (func_5579() != 4 || func_5727() != 19)
  {
    return;
  }
  if (!func_14(NETWORK::PARTICIPANT_ID(), 34) && !func_5578(45))
  {
    if (iParam0 == 0 && !ENTITY::IS_ENTITY_DEAD(iParam1, 0))
    {
      if (func_4901(iParam1))
      {
        GRAPHICS::SET_PARTICLE_FX_LOOPED_ALPHA(iLocal_959, 0.3f);
        func_5685(34);
      }
    }
  }
  else if (func_43())
  {
    if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(iLocal_959))
    {
      GRAPHICS::STOP_PARTICLE_FX_LOOPED(iLocal_959, 0);
    }
  }
}