// am_mp_property_int.ysc @ L243494
void func_2483(var uParam0)
{
  if (ENTITY::DOES_ENTITY_EXIST(NETWORK::NET_TO_ENT(Local_5543[iLocal_5546 /*21*/].f_5)))
  {
    if (uParam0->f_289[iLocal_5546] == 0)
    {
      GRAPHICS::USE_PARTICLE_FX_ASSET("scr_mp_cig_plane");
      uParam0->f_295[iLocal_5546] = GRAPHICS::START_NETWORKED_PARTICLE_FX_LOOPED_ON_ENTITY_BONE("ent_anim_cig_smoke_plane", NETWORK::NET_TO_ENT(Local_5543[iLocal_5546 /*21*/].f_5), 0.004f, 0f, 0f, 0f, 0f, 0f, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(NETWORK::NET_TO_ENT(Local_5543[iLocal_5546 /*21*/].f_5), "VFX_Emitter"), 1065353216, 0, 0, 0, 1065353216, 1065353216, 1065353216, 0);
      GRAPHICS::SET_PARTICLE_FX_LOOPED_EVOLUTION(uParam0->f_295[iLocal_5546], "light_intensity", fLocal_5898, 0);
      GRAPHICS::SET_PARTICLE_FX_LOOPED_EVOLUTION(uParam0->f_295[iLocal_5546], "smoke_fade", fLocal_5899, 0);
      uParam0->f_289[iLocal_5546] = 1;
    }
    else if (!ENTITY::DOES_ENTITY_EXIST(NETWORK::NET_TO_ENT(Local_5543[iLocal_5546 /*21*/].f_5)))
    {
      GRAPHICS::STOP_PARTICLE_FX_LOOPED(uParam0->f_295[iLocal_5546], 0);
      uParam0->f_289[iLocal_5546] = 0;
    }
  }
}