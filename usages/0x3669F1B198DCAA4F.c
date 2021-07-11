// am_mp_property_ext.c @ L260966
int func_3512(bool bParam0)
{
  struct<50> Var0;
  
  Var0 = 1;
  Var0.f_16 = 1;
  Var0.f_25 = 3;
  Var0.f_35 = 1;
  Var0.f_40 = 1;
  Var0.f_49 = 1;
  if (!func_3531(func_3913(iLocal_245), &Var0))
  {
    return 1;
  }
  if (iLocal_245 == 23)
  {
    GRAPHICS::DISABLE_OCCLUSION_THIS_FRAME();
  }
  if (iLocal_245 == 40 || iLocal_245 == 41)
  {
    func_3530();
  }
  if (func_3513(bParam0, &Var0))
  {
    if (ENTITY::DOES_ENTITY_EXIST(iLocal_258))
    {
      OBJECT::DELETE_OBJECT(&iLocal_258);
    }
    return 1;
  }
  return 0;
}