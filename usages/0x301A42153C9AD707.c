// am_pass_the_parcel.c @ L10072
void func_263()
{
  if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_132.f_16))
  {
    if (!ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_VEH(Local_132.f_16), 0))
    {
      if ((10000 - func_8(&(Local_132.f_9), 0, 0)) >= 0)
      {
        if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), NETWORK::NET_TO_VEH(Local_132.f_16), 50f, 50f, 50f, 0, 1, 0))
        {
          func_265((Global_262145.f_10197 - func_8(&(Local_132.f_9), 0, 0)), "HTV_DESTR", 0, 1, -1, 0, 2, 0, 6, 0, 0, 0, 6, 0, 0, 0, 0, -1);
          func_264();
        }
      }
      else
      {
        if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), NETWORK::NET_TO_VEH(Local_132.f_16), 50f, 50f, 50f, 0, 1, 0))
        {
          func_265(0, "HTV_DESTR", 0, 1, -1, 0, 2, 0, 6, 0, 0, 0, 6, 0, 0, 0, 0, -1);
          func_264();
        }
        if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_132.f_16))
        {
          NETWORK::NETWORK_EXPLODE_VEHICLE(NETWORK::NET_TO_VEH(Local_132.f_16), 1, 0, -1);
        }
      }
    }
  }
  if (HUD::DOES_BLIP_EXIST(iLocal_118))
  {
    HUD::REMOVE_BLIP(&iLocal_118);
  }
}