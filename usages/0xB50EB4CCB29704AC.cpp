// animal_controller.ysc @ L109836
int func_580()
{
  int iVar0;
  
  if (!iLocal_364 && func_583())
  {
    iLocal_364 = 1;
    PED::CLEAR_PED_SCUBA_GEAR_VARIATION(PLAYER::PLAYER_PED_ID());
  }
  else if ((!iLocal_364 && !iLocal_363) && func_582(PLAYER::PLAYER_PED_ID()))
  {
    iLocal_363 = 1;
    func_413(PLAYER::PLAYER_PED_ID(), &uLocal_298, 1, -1);
    iVar0 = 431867;
    func_581(PLAYER::PLAYER_PED_ID(), &iVar0);
  }
  else if ((!iLocal_363 && !iLocal_364) || PED::_HAS_STREAMED_PED_ASSETS_LOADED(PLAYER::PLAYER_PED_ID()))
  {
    return 1;
  }
  return 0;
}