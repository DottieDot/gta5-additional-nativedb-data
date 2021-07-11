// fbi4_prep1.c @ L6140
void func_193(var uParam0, int iParam1)
{
  switch (uParam0->f_1)
  {
    case 0:
      break;
    
    case 1:
      *uParam0 = SHAPETEST::START_SHAPE_TEST_LOS_PROBE(uParam0->f_2, uParam0->f_5, 511, iParam1, 7);
      break;
    
    case 2:
      *uParam0 = SHAPETEST::START_SHAPE_TEST_BOUND(uParam0->f_17, 511, 4);
      break;
    
    case 3:
      *uParam0 = SHAPETEST::START_SHAPE_TEST_BOUNDING_BOX(uParam0->f_17, 511, 4);
      break;
    
    case 4:
      *uParam0 = SHAPETEST::START_SHAPE_TEST_BOX(uParam0->f_2, uParam0->f_8, uParam0->f_11, uParam0->f_14, 6, iParam1, 4);
      break;
    
    case 5:
      *uParam0 = SHAPETEST::START_SHAPE_TEST_CAPSULE(uParam0->f_2, uParam0->f_5, uParam0->f_15, 511, iParam1, 4);
      break;
  }
  uParam0->f_16 = *uParam0 != 0;
}