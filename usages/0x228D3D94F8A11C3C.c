// agency_heist1.c @ L113313
bool func_625(char* sParam0)
{
  bool bVar0;
  
  bVar0 = CUTSCENE::HAS_THIS_CUTSCENE_LOADED(sParam0);
  if (!Global_76576)
  {
    if (!bVar0)
    {
      Global_76576 = 1;
    }
  }
  return bVar0;
}