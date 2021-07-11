// fm_race_creator.c @ L431552
void func_6965(var uParam0)
{
  struct<13> Var0;
  
  if (func_5646() || func_5645())
  {
    func_6967(uParam0);
  }
  if (func_355())
  {
    if (uParam0->f_16 != func_31())
    {
      if (func_40(uParam0->f_16, 0, 1))
      {
        Var0 = { func_135(uParam0->f_16) };
        if (func_1423(Var0))
        {
          NETWORK::NETWORK_REMOVE_TRANSITION_INVITE(&Var0);
          if (func_6966(&Var0, ""))
          {
            func_5709();
          }
        }
      }
    }
  }
}