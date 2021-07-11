// fm_mission_controller.ysc @ L353876
void func_4951()
{
  struct<10> Var0;
  
  if (func_819(iLocal_4538) && !AUDIO::HAS_SOUND_FINISHED(iLocal_4538))
  {
    AUDIO::STOP_SOUND(iLocal_4538);
    AUDIO::RELEASE_SOUND_ID(iLocal_4538);
  }
  if (func_819(iLocal_4539) && !AUDIO::HAS_SOUND_FINISHED(iLocal_4539))
  {
    AUDIO::STOP_SOUND(iLocal_4539);
    AUDIO::RELEASE_SOUND_ID(iLocal_4539);
  }
  if (func_4965())
  {
    func_4964(0);
  }
  MISC::CLEAR_BIT(&(Global_2531497.f_4591), 17);
  func_4963(1, 0, 0);
  GRAPHICS::SEETHROUGH_RESET();
  MISC::CLEAR_BIT(&iLocal_4136, 27);
  if (func_13890())
  {
    Var0.f_1 = -1000;
    Var0.f_8 = -1;
    Var0.f_9 = -1;
    func_4952(&Var0);
  }
}