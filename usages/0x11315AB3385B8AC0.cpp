// epsilon6.ysc @ L36694
void func_282()
{
  WEAPON::GIVE_WEAPON_TO_PED(Local_62, joaat("WEAPON_DIGISCANNER"), 0, true, true);
  PED::SET_PED_CAN_SWITCH_WEAPON(Local_62, false);
  AUDIO::STOP_PED_SPEAKING(Local_62, true);
  PED::SET_PED_DIES_WHEN_INJURED(Local_62, true);
  PED::SET_PED_CAN_BE_TARGETTED(Local_62, false);
  TASK::OPEN_SEQUENCE_TASK(&iLocal_125);
  TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_COORD(0, -2887.95f, 3194.88f, 10.06f, -2887.95f, 3194.88f, 10.06f, 1.2f, false, 0.5f, 4f, true, 0, 0, -957453492);
  TASK::TASK_PLAY_ANIM(0, "rcmepsilonism6", "cultist_idle_a", 2f, -2f, -1, 0, 0, 0, 0, 0);
  TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_COORD(0, -2888.92f, 3203.76f, 10.6f, -2888.92f, 3203.76f, 10.6f, 1.2f, false, 0.5f, 4f, true, 0, 0, -957453492);
  TASK::TASK_PLAY_ANIM(0, "rcmepsilonism6", "cultist_idle_a", 2f, -2f, -1, 0, 0, 0, 0, 0);
  TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_COORD(0, -2895.37f, 3199.37f, 10.03f, -2895.37f, 3199.37f, 10.03f, 1.2f, false, 0.5f, 4f, true, 0, 0, -957453492);
  TASK::TASK_PLAY_ANIM(0, "rcmepsilonism6", "cultist_idle_a", 2f, -2f, -1, 0, 0, 0, 0, 0);
  TASK::SET_SEQUENCE_TO_REPEAT(iLocal_125, 1);
  TASK::CLOSE_SEQUENCE_TASK(iLocal_125);
  TASK::TASK_PERFORM_SEQUENCE(Local_62, iLocal_125);
}