// agency_heist3b.ysc @ L4789
void func_40()
{
  int iVar0;
  
  func_42(1);
  iVar0 = 0;
  while (iVar0 < Local_448)
  {
    if (Local_448[iVar0 /*6*/].f_3 != joaat("v_ilev_fib_sprklr") && !func_41(Local_448[iVar0 /*6*/]))
    {
      if (OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(Local_448[iVar0 /*6*/], 0.25f, Local_448[iVar0 /*6*/].f_3, 0))
      {
        ENTITY::REMOVE_MODEL_SWAP(Local_448[iVar0 /*6*/], 0.25f, joaat("v_ilev_fib_sprklr"), Local_448[iVar0 /*6*/].f_3, 0);
      }
    }
    Local_448[iVar0 /*6*/].f_3 = joaat("v_ilev_fib_sprklr");
    iVar0++;
  }
}