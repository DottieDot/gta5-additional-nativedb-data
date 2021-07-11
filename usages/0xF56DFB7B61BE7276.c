// tennis.c @ L23050
int func_547(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, bool bParam6, float fParam7, float fParam8, var uParam9)
{
  float fVar0;
  vector3 vVar1;
  vector3 vVar2;
  float fVar3;
  var uVar4;
  vector3 vVar5;
  
  fVar0 = 0f;
  MISC::_0xF56DFB7B61BE7276(*uParam1, *uParam2, uParam0->f_37, uParam0->f_40, &fVar0);
  if (fVar0 < 0f || fVar0 > 1f)
  {
    return 0;
  }
  vVar1 = { *uParam1 + *uParam2 - *uParam1 * Vector(fVar0, fVar0, fVar0) };
  vVar2 = { vVar1 - uParam0->f_37 };
  fVar3 = func_202(vVar2, uParam0->f_43);
  if (MISC::ABSF(fVar3) < 2.85f)
  {
    return 0;
  }
  uVar4 = vVar2.z;
  vVar5 = { fVar3, 0f, uVar4 };
  *fParam7 = MISC::_0x7F8F6405F4777AF6(vVar5, *uParam5, *uParam3, 0);
  *fParam8 = MISC::_0x7F8F6405F4777AF6(vVar5, func_498(bParam6, *uParam5, *uParam4), func_498(bParam6, *uParam4, *uParam5), 0);
  if (((*fParam7 < 0f || *fParam7 > 2f) || *fParam8 < 0f) || *fParam8 > 2f)
  {
    return 0;
  }
  *uParam9 = { vVar1 };
  return 2;
}