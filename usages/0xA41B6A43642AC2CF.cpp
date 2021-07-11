// am_mp_property_int.ysc @ L243454
void func_2481(var uParam0)
{
  if (((iLocal_5546 > -1 && func_149(iLocal_5546)) && Local_5543[iLocal_5546 /*21*/].f_2 == 1) && STREAMING::HAS_NAMED_PTFX_ASSET_LOADED("scr_mp_cig_plane"))
  {
    func_2483(uParam0);
    if (uParam0->f_301[iLocal_5546] == 1)
    {
      func_2482(uParam0);
    }
    if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
    {
      if (!uParam0->f_307[iLocal_5546])
      {
        if (ENTITY::HAS_ANIM_EVENT_FIRED(PLAYER::PLAYER_PED_ID(), -2121855126))
        {
          GRAPHICS::USE_PARTICLE_FX_ASSET("scr_mp_cig_plane");
          GRAPHICS::START_NETWORKED_PARTICLE_FX_NON_LOOPED_ON_PED_BONE("ent_anim_cig_exhale_mth_plane", PLAYER::PLAYER_PED_ID(), -0.025f, 0.13f, 0f, 0f, 0f, 0f, 31086, 1065353216, 0, 0, 0);
          uParam0->f_301[iLocal_5546] = 0;
          uParam0->f_307[iLocal_5546] = 1;
        }
      }
      else if (ENTITY::HAS_ANIM_EVENT_FIRED(PLAYER::PLAYER_PED_ID(), 1376297906))
      {
        GRAPHICS::SET_PARTICLE_FX_LOOPED_EVOLUTION(uParam0->f_295[iLocal_5546], "light_intensity", (uParam0->f_313 * 1.5f), 0);
        uParam0->f_301[iLocal_5546] = 1;
        uParam0->f_307[iLocal_5546] = 0;
      }
    }
  }
}