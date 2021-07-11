// appmedia.c @ L155
void func_3()
{
  int iVar0;
  
  func_7(Global_19467, "SET_DATA_SLOT_EMPTY", 18f, -1082130432, -1082130432, -1082130432, -1082130432);
  iLocal_21 = GRAPHICS::GET_MAXIMUM_NUMBER_OF_PHOTOS();
  iLocal_22 = 0;
  iVar0 = 0;
  while (iLocal_22 < iLocal_21)
  {
    if (GRAPHICS::_0xE791DF1F73ED2C8B(iLocal_22))
    {
      func_6(Global_19467, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(18), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(0), -1f, -1f, &(Local_27[iLocal_22 /*6*/]), 0, 0, 0, 0);
      iLocal_26[iVar0] = iLocal_22;
      iVar0++;
    }
    iLocal_22++;
  }
  func_7(Global_19467, "DISPLAY_VIEW", 18f, -1082130432, -1082130432, -1082130432, -1082130432);
  func_4(Global_19467, "SET_HEADER", "CELL_MSMENU_1", 0, 0, 0, 0);
  if (Global_19474)
  {
    func_6(Global_19467, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_205", 0, 0, 0, 0);
    func_6(Global_19467, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
  }
  else
  {
    func_6(Global_19467, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
    func_6(Global_19467, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
  }
  func_6(Global_19467, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
  MISC::CLEAR_BIT(&Global_7356, 17);
}