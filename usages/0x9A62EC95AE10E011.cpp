// selector.ysc @ L110546
int func_821()
{
  if (!Global_1312373[0] && !STATS::STAT_SLOT_IS_LOADED(0))
  {
    if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
    {
      if (((STATS::_0xDEAAF77EB3687E97(2, &Global_2460672) == 0 || STATS::_0xDEAAF77EB3687E97(0, &Global_2460794) == 0) || STATS::_0xDEAAF77EB3687E97(1, &Global_2461038) == 0) || STATS::_0xDEAAF77EB3687E97(3, &Global_2460916) == 0)
      {
        return 1;
      }
      if (STATS::_0x9A62EC95AE10E011() == 13)
      {
        return 0;
      }
    }
  }
  return 1;
}