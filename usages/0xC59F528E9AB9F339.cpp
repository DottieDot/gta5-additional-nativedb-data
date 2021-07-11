// abigail1.ysc @ L38666
bool func_291()
{
  bool bVar0;
  
  bVar0 = CUTSCENE::HAS_CUTSCENE_LOADED();
  if (!Global_76576)
  {
    if (!bVar0)
    {
      Global_76576 = 1;
    }
  }
  return bVar0;
}