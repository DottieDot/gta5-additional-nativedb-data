// exile3.ysc @ L125515
void func_777(bool bParam0)
{
  if (!PED::IS_PED_INJURED(iLocal_184[0]) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_190, 0))
  {
    iLocal_472 = PED::CREATE_SYNCHRONIZED_SCENE(0f, 0f, 0f, 0f, 0f, 0f, 2);
    PED::ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(iLocal_472, iLocal_190, 0);
    TASK::TASK_SYNCHRONIZED_SCENE(iLocal_184[0], iLocal_472, func_236(2), "ex03_attack_driver_outro_driver", 1000f, -8f, 0, 2, 1148846080, 0);
    if (!bParam0)
    {
      PED::SET_SYNCHRONIZED_SCENE_PHASE(iLocal_472, 0.277f);
    }
    else
    {
      PED::SET_SYNCHRONIZED_SCENE_PHASE(iLocal_472, 1f);
    }
    PED::_0x2208438012482A1A(iLocal_184[0], 0, 0);
  }
}