// fm_mission_controller.ysc @ L362792
void func_5238(int iParam0)
{
  int iVar0;
  
  iVar0 = HUD::GET_BLIP_FROM_ENTITY(iParam0);
  if (HUD::DOES_BLIP_EXIST(iVar0))
  {
    HUD::REMOVE_BLIP(&iVar0);
  }
}