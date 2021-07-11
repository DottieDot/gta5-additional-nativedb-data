// fm_mission_controller.ysc @ L738381
int func_12132(int iParam0, int iParam1)
{
  int iVar0;
  int iVar1;
  
  if (PED::IS_PED_IN_ANY_VEHICLE(iParam0, 0))
  {
    iVar0 = PED::GET_VEHICLE_PED_IS_IN(iParam0, 0);
    iVar1 = HUD::GET_BLIP_FROM_ENTITY(iVar0);
    if ((HUD::DOES_BLIP_EXIST(iVar1) && (HUD::GET_BLIP_ALPHA(iVar1) > 1 || iParam1)) && !iVar1 == Global_2416074.f_1493)
    {
      return 1;
    }
  }
  return 0;
}