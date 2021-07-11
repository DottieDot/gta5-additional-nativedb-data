// triathlonsp.c @ L104505
void func_618(bool bParam0)
{
  if (bParam0)
  {
    if (Local_327 < (Local_327.f_1 / 2))
    {
      PLAYER::RESTORE_PLAYER_STAMINA(PLAYER::PLAYER_ID(), 0.33f);
    }
  }
  else
  {
    Local_327 = Local_327.f_1;
  }
}