// am_mp_ie_warehouse.ysc @ L25206
void func_322()
{
  int iVar0;
  
  iVar0 = func_300();
  if (iVar0 == joaat("MP_M_ExecPA_01"))
  {
    CUTSCENE::SET_CUTSCENE_ENTITY_STREAMING_FLAGS("Male_PA", 0, 1);
  }
  else
  {
    CUTSCENE::SET_CUTSCENE_ENTITY_STREAMING_FLAGS("Female_PA_02", 0, 1);
  }
}