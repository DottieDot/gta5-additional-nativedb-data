// director_mode.c @ L153393
void func_1128()
{
  float fVar0;
  float fVar1;
  float fVar2;
  var uVar3;
  vector3 vVar4;
  char cVar5[16];
  
  if (!CAM::_0x5C48A1D6E3B33179(iLocal_425))
  {
    fVar0 = func_813(Local_362.f_6, Local_362.f_6.f_1);
    fVar1 = PAD::GET_CONTROL_NORMAL(2, 220);
    fVar2 = PAD::GET_CONTROL_NORMAL(2, 221);
    if (fVar1 != 0f)
    {
      fLocal_429 = (((fLocal_429 - (fVar1 * fLocal_434)) + 360f) % 360f);
    }
    MISC::GET_MODEL_DIMENSIONS(Local_362.f_10, &vVar4, &uVar3);
    fLocal_430 = func_25((fLocal_430 - (fVar2 * fLocal_434)), vVar4.z, fLocal_432);
    StringCopy(&cVar5, "Min Z ", 16);
    StringIntConCat(&cVar5, SYSTEM::ROUND((vVar4.z * 10f)), 16);
    GRAPHICS::DRAW_DEBUG_TEXT_2D(&cVar5, 0.1f, 0.3f, 0f, 0, 0, 255, 255);
    fLocal_431 = (fVar0 + (fLocal_375 * fLocal_434));
  }
}