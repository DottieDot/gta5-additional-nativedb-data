// armenian1.ysc @ L1484
void func_4(bool bParam0)
{
  if (bParam0)
  {
    if (!CUTSCENE::HAS_CUTSCENE_FINISHED())
    {
      CUTSCENE::STOP_CUTSCENE(0);
    }
    CUTSCENE::REMOVE_CUTSCENE();
    while (CUTSCENE::IS_CUTSCENE_ACTIVE())
    {
      SYSTEM::WAIT(0);
    }
    func_57();
  }
  func_15(5, 1);
  func_12(2, 1);
  PLAYER::SPECIAL_ABILITY_UNLOCK(func_9(1));
  func_32();
  func_8(6, 0, 1);
  func_5(0, 0);
  func_910();
}