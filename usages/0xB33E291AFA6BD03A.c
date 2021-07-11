// extreme3.c @ L109639
void func_586()
{
  if (func_638(iLocal_3261))
  {
    TASK::OPEN_SEQUENCE_TASK(&iLocal_3263);
    TASK::TASK_PLAY_ANIM(0, "rcmextreme3", "jump_fall", 8f, -8f, -1, 8, 0, 0, 0, 0);
    TASK::TASK_PARACHUTE_TO_TARGET(0, 30.3356f, -795.6482f, 44.26f);
    TASK::CLOSE_SEQUENCE_TASK(iLocal_3263);
    TASK::TASK_PERFORM_SEQUENCE(iLocal_3261, iLocal_3263);
    TASK::CLEAR_SEQUENCE_TASK(&iLocal_3263);
    RECORDING::_0x293220DA1B46CEBC(3f, 5f, 1);
  }
}