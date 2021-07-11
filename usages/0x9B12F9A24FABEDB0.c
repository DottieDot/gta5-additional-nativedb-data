// finale_heist2a.c @ L35145
void func_225(bool bParam0)
{
  if (bParam0)
  {
    func_226(40, 1);
    func_226(45, 1);
    func_226(41, 1);
    func_226(43, 1);
    func_226(42, 1);
    func_226(44, 1);
    OBJECT::_DOOR_CONTROL(joaat("v_ilev_mm_doorm_l"), -816.72f, 179.1f, 72.03f, true, 0f, 0f, 1f);
    OBJECT::_DOOR_CONTROL(joaat("v_ilev_mm_doorm_r"), -816.11f, 177.51f, 72.03f, true, 0f, 0f, -1f);
  }
  else
  {
    func_226(40, 0);
    func_226(45, 0);
    func_226(41, 0);
    func_226(43, 0);
    func_226(42, 0);
    func_226(44, 0);
    OBJECT::_DOOR_CONTROL(joaat("v_ilev_mm_doorm_l"), -816.72f, 179.1f, 72.03f, false, 0f, 0f, 0f);
    OBJECT::_DOOR_CONTROL(joaat("v_ilev_mm_doorm_r"), -816.11f, 177.51f, 72.03f, false, 0f, 0f, 0f);
    func_226(38, 4);
    func_226(39, 4);
  }
}