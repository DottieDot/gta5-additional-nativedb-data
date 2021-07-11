// am_imp_exp.ysc @ L13288
void func_374()
{
  int iVar0;
  
  if (iLocal_306)
  {
  }
  iVar0 = 0;
  while (iVar0 < 10)
  {
    if (VEHICLE::DOES_SCRIPT_VEHICLE_GENERATOR_EXIST(iLocal_305[iVar0]))
    {
      VEHICLE::DELETE_SCRIPT_VEHICLE_GENERATOR(iLocal_305[iVar0]);
    }
    iLocal_305[iVar0] = 0;
    iVar0++;
  }
  iLocal_306 = 0;
}