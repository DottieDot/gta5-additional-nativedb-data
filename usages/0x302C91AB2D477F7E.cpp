// am_casino_peds.ysc @ L265474
void func_3006(int iParam0)
{
  vector3 vVar0;
  
  if (iParam0 == 92)
  {
    func_3010(0);
  }
  else if (iParam0 == 97)
  {
    ENTITY::REMOVE_MODEL_HIDE(1875.179f, 272.5103f, 161.3369f, 1f, joaat("csx_coastsmalrock_02_"), false);
  }
  else if (iParam0 == 94)
  {
    ENTITY::REMOVE_MODEL_HIDE(-2285.574f, 2334.016f, 15.0891f, 1f, joaat("ch1_04_dcl_23a"), true);
  }
  vVar0 = { func_3009(iParam0) };
  ENTITY::REMOVE_MODEL_HIDE(vVar0, 15f, func_3008(iParam0), false);
  GRAPHICS::_GRASS_LOD_RESET_SCRIPT_AREAS();
  if ((func_3007(iParam0) && Global_1676879.f_425 > -1) && GRAPHICS::_0x2C42340F916C5930(Global_1676879.f_425))
  {
    GRAPHICS::_0x649C97D52332341A(Global_1676879.f_425);
    Global_1676879.f_425 = -1;
  }
  GRAPHICS::_0x03FC694AE06C5A20();
}