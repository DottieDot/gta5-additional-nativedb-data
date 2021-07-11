// hunting1.ysc @ L42358
void func_391()
{
  OBJECT::SET_FORCE_OBJECT_THIS_FRAME(vLocal_359, fLocal_315);
  OBJECT::SET_FORCE_OBJECT_THIS_FRAME(vLocal_360, fLocal_315);
  VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0.5f);
  func_390();
  if (!bLocal_283)
  {
    func_8(&iLocal_263);
    iLocal_262 = func_392(vLocal_357, 5, 1);
    func_319("HT_NXTLOC");
    iLocal_254 = 9;
  }
  if (func_361())
  {
    func_318(5);
  }
}