// gb_biker_contraband_sell.ysc @ L128416
void func_1481()
{
  int iVar0;
  
  if (func_17())
  {
    iVar0 = func_504(0);
    if (((ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0, 0)) && PED::IS_PED_IN_ANY_VEHICLE(iVar0, 0)) && !ENTITY::IS_ENTITY_IN_WATER(iVar0))
    {
      if (func_1483())
      {
        if (!GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(Local_219.f_306))
        {
          Local_219.f_306 = GRAPHICS::START_PARTICLE_FX_LOOPED_ON_PED_BONE("scr_bike_truck_weed_smoke_cabin", iVar0, 0f, 0f, 0f, 0f, 0f, 0f, 28422, 1f, 0, 0, 0);
          GRAPHICS::SET_PARTICLE_FX_LOOPED_EVOLUTION(Local_219.f_306, "smoke_fade", 0f, 0);
        }
      }
    }
    else
    {
      func_1482();
    }
  }
}