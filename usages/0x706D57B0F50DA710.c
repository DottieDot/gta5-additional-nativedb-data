// agency_heist3a.c @ L127771
int func_839()
{
  if (func_847())
  {
    iLocal_50 = 23;
    return 1;
  }
  func_834();
  func_846();
  func_845();
  func_844();
  func_843();
  func_842();
  func_145();
  func_836();
  func_840();
  func_137();
  func_134();
  func_728();
  if (!func_825("AH3A_EXIT"))
  {
    if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 115.022f, -759.32f, 44.757f, 117.679f, -751.774f, 46.7f, 2f, 0, true, 0))
    {
      AUDIO::TRIGGER_MUSIC_EVENT("AH3A_EXIT");
      func_827("AH3A_EXIT", 1);
    }
  }
  return 0;
}