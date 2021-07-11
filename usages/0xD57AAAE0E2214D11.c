// am_mp_property_int.c @ L194355
void func_1884(var uParam0)
{
  vector3 vVar0;
  
  AUDIO::FREEZE_MICROPHONE();
  if (func_3868(&(uParam0->f_63), 200, 0))
  {
    func_7058(&(uParam0->f_63), 0, 0);
    if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_21[0], 0) && !ENTITY::IS_ENTITY_DEAD(uParam0->f_19, 0))
    {
      vVar0 = { uParam0->f_12 + uParam0->f_66 * Vector(3f, 3f, 3f) + Vector(12f, 0f, 0f) };
      TASK::TASK_HELI_MISSION(uParam0->f_21[0], uParam0->f_19, 0, 0, vVar0, 4, 70f, 0.5f, uParam0->f_5, 0, 0, -1f, 8256);
    }
    ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_19, false);
    ENTITY::SET_ENTITY_COLLISION(uParam0->f_19, true, 0);
    func_1898(uParam0, PLAYER::PLAYER_PED_ID());
    func_1898(uParam0, uParam0->f_21[0]);
    if (func_7067())
    {
      func_1893(1, 0);
      MISC::SET_BIT(&(Global_1628955[PLAYER::PLAYER_ID() /*614*/].f_535), 8);
      Global_2459034.f_325 = 0;
    }
    CAM::DO_SCREEN_FADE_IN(500);
    func_1885(uParam0);
    STREAMING::_0xA76359FC80B2438E(1.6f);
    func_1853(uParam0, 12);
  }
}