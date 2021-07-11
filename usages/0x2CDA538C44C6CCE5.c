// business_battles_sell.c @ L15983
void func_346()
{
  vector3 vVar0;
  
  if (func_352())
  {
    if (func_351() != -1)
    {
      if (func_104(&(Local_915.f_1272)))
      {
        if (func_107(&(Local_915.f_1272), func_350(), 0))
        {
          if (Local_915.f_1271 > 0)
          {
            EVENT::REMOVE_SHOCKING_EVENT(Local_915.f_1271);
          }
          func_106(&(Local_915.f_1272));
        }
      }
      else
      {
        vVar0 = { func_349() };
        Local_915.f_1271 = EVENT::ADD_SHOCKING_EVENT_AT_POSITION(func_351(), vVar0, func_348());
        func_103(&(Local_915.f_1272), 0, 0);
      }
    }
  }
  else
  {
    func_347();
  }
}