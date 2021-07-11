// am_mp_arcade.ysc @ L325690
void func_4930()
{
  if (func_84(&(Local_823.f_612)))
  {
    if (func_82(&(Local_823.f_612), func_4931(Local_823.f_660), 0))
    {
      func_75(&(Local_823.f_612));
      TASK::STOP_ANIM_PLAYBACK(Local_823.f_603, 1, 1);
      TASK::STOP_ANIM_PLAYBACK(Local_823.f_603, 0, 1);
      func_4926(4);
    }
  }
}