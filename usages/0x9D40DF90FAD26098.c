// am_casino_peds.c @ L155663
bool func_1465()
{
  int iVar0;
  
  iVar0 = SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("am_mp_smpl_interior_int"));
  return (iVar0 > 0 || NETWORK::NETWORK_IS_SCRIPT_ACTIVE("AM_MP_SMPL_INTERIOR_INT", Global_1676879.f_2905, 1, 0));
}