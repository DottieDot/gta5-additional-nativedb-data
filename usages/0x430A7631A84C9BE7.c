// fm_bj_race_controler.c @ L313034
void func_4306(var uParam0, var uParam1, var uParam2)
{
  Global_1574425 = 1;
  MISC::SET_BIT(&((uParam1[NETWORK::PARTICIPANT_ID_TO_INT() /*203*/])->f_128), 1);
  if (((!func_232(uParam0, 0) && MISC::IS_BIT_SET(Global_4456448.f_30, 12)) && !func_232(uParam0, 0)) && !func_135(PLAYER::PLAYER_ID(), 0))
  {
    func_3231();
  }
  func_4307(uParam1, uParam2);
  if (GRAPHICS::ANIMPOSTFX_IS_RUNNING("MP_job_load"))
  {
    GRAPHICS::ANIMPOSTFX_STOP("MP_job_load");
  }
  func_4213(uParam0, uParam1);
  if (func_243(uParam0))
  {
    func_3813(&(uParam2->f_8430));
  }
  if (MISC::IS_BIT_SET(Global_4456448.f_26, 5))
  {
    VEHICLE::_0x430A7631A84C9BE7(true);
  }
}