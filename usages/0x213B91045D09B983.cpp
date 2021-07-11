// fm_mission_controller.ysc @ L527665
int func_8362(int iParam0)
{
  if (SYSTEM::VMAG2(ENTITY::GET_ENTITY_ROTATION_VELOCITY(iParam0)) < 0.07f)
  {
    return 1;
  }
  return 0;
}