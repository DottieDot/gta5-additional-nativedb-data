// agency_heist3a.c @ L111189
void func_543()
{
  vector3 vVar0;
  vector3 vVar1;
  float fVar2;
  
  fVar2 = ((vLocal_2159.z - fLocal_2550) / (fLocal_2549 - fLocal_2550));
  vVar0 = { vLocal_2545 + vLocal_2543 - vLocal_2545 * Vector(fVar2, fVar2, fVar2) };
  vVar1 = { vLocal_2546 + vLocal_2544 - vLocal_2546 * Vector(fVar2, fVar2, fVar2) };
  vLocal_2547 = { vLocal_2547 + vVar0 - vLocal_2547 * Vector(0.2f, 0.2f, 0.2f) };
  vLocal_2548 = { vLocal_2548 + vVar1 - vLocal_2548 * Vector(0.2f, 0.2f, 0.2f) };
  CAM::SET_CAM_COORD(iLocal_2185, vLocal_2547);
  CAM::SET_CAM_ROT(iLocal_2185, vLocal_2548, 2);
  CAM::_0x661B5C8654ADD825(iLocal_2185, 1);
}