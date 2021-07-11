// am_mp_smpl_interior_int.ysc @ L270503
void func_3977()
{
  func_1104();
  func_1094(0, 1, 0, 1060320051, 1086324736, 1065353216, 1088421888, 1084227584, 0, 1066192077, 0, 0, 1, 0, 1109393408);
  func_3974(0);
  Global_1676879.f_447 = 1;
  func_3981(0);
  func_3980(0);
  func_3979(0);
  func_3978(1);
  if (Local_312.f_485 != -1)
  {
    if (MISC::DOES_POP_MULTIPLIER_SPHERE_EXIST(Local_312.f_485))
    {
      MISC::REMOVE_POP_MULTIPLIER_SPHERE(Local_312.f_485, 1);
    }
  }
  TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
  MISC::CLEAR_BIT(&Local_312, 9);
  MISC::CLEAR_BIT(&Local_312, 17);
  func_4(1);
}