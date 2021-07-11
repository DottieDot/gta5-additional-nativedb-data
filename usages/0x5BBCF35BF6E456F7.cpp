// fm_deathmatch_controler.ysc @ L521246
void func_8641(var uParam0)
{
  int iVar0;
  
  if (func_8241())
  {
    Global_1696138 = 0;
  }
  iVar0 = 0;
  while (iVar0 <= 31)
  {
    uParam0->f_633[iVar0] = -1;
    uParam0->f_666[iVar0] = -1;
    iVar0++;
  }
  if (!MISC::IS_BIT_SET(Global_4456448.f_31, 4))
  {
    PHYSICS::_0xAA6A6098851C396F(1);
  }
  if (!MISC::IS_BIT_SET(Global_1695546, 0))
  {
    GRAPHICS::SET_PARTICLE_FX_OVERRIDE("ent_amb_fbi_fire_lg", "scr_xs_oil_jack_fire");
    if (Global_4456448.f_184556 == 2)
    {
      GRAPHICS::SET_PARTICLE_FX_OVERRIDE("exp_grd_tankshell", "scr_xs_exp_mine_sf");
      MISC::SET_BIT(&Global_1695546, 3);
    }
    MISC::SET_BIT(&Global_1695546, 0);
  }
  VEHICLE::_0x5BBCF35BF6E456F7(1);
  MISC::SET_BIT(&(uParam0->f_1), 0);
}