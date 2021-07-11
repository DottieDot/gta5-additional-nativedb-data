// am_hold_up.ysc @ L15905
void func_393()
{
  TASK::OPEN_SEQUENCE_TASK(&iLocal_119);
  TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
  TASK::TASK_PLAY_ANIM(0, "mp_am_hold_up", "handsup_enter", 8f, -8f, -1, 262192, 0, 0, 0, 0);
  TASK::TASK_PLAY_ANIM(0, "mp_am_hold_up", "handsup_base", 8f, -4f, -1, 262193, 0, 0, 0, 0);
  TASK::CLOSE_SEQUENCE_TASK(iLocal_119);
  TASK::OPEN_SEQUENCE_TASK(&iLocal_120);
  TASK::TASK_PLAY_ANIM(0, "mp_am_hold_up", "handsup_base", 4f, -4f, -1, 262193, 0, 0, 0, 0);
  TASK::CLOSE_SEQUENCE_TASK(iLocal_120);
  TASK::OPEN_SEQUENCE_TASK(&iLocal_121);
  TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, vLocal_112, 2f, -1, 0.25f, 0, fLocal_113);
  TASK::TASK_PLAY_ANIM(0, "mp_am_hold_up", "cower_intro", 8f, -4f, -1, 262144, 0, 0, 0, 0);
  TASK::TASK_PLAY_ANIM(0, "mp_am_hold_up", "cower_loop", 8f, -4f, -1, 270337, 0, 0, 0, 0);
  TASK::TASK_SMART_FLEE_COORD(0, vLocal_112, 250f, -1, 1, 0);
  TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, 0);
  TASK::CLOSE_SEQUENCE_TASK(iLocal_121);
  TASK::OPEN_SEQUENCE_TASK(&iLocal_123);
  TASK::TASK_PLAY_ANIM(0, "mp_am_hold_up", "cower_intro", 8f, -4f, -1, 262144, 0, 0, 0, 0);
  TASK::TASK_PLAY_ANIM(0, "mp_am_hold_up", "cower_loop", 8f, -4f, -1, 270337, 0, 0, 0, 0);
  TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, 0);
  TASK::CLOSE_SEQUENCE_TASK(iLocal_123);
  TASK::OPEN_SEQUENCE_TASK(&iLocal_122);
  TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, vLocal_112, 2f, -1, 0.25f, 0, (fLocal_113 - 180f));
  TASK::TASK_SWAP_WEAPON(0, 1);
  TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(0, 20f, 0);
  TASK::CLOSE_SEQUENCE_TASK(iLocal_122);
}