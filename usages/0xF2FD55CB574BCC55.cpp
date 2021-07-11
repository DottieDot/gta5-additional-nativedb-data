// fmmc_launcher.ysc @ L518236
void func_7699(var uParam0)
{
  struct<16> Var0;
  bool bVar1;
  bool bVar2;
  
  Var0 = { func_6060((func_5679() - 1)) };
  bVar1 = false;
  bVar2 = false;
  if (func_750(uParam0->f_439))
  {
    bVar1 = NETWORK::NETWORK_GAMER_HAS_HEADSET(&(uParam0->f_439));
    if (!uParam0->f_482)
    {
      if (func_6372(&(uParam0->f_439)))
      {
        bVar2 = true;
      }
    }
  }
  func_7700(3, uParam0->f_1185, &Var0, func_7701((func_5679() - 1)), &(Global_2449755.f_1.f_845[(func_5679() - 1) /*57*/].f_36), func_6061((func_5679() - 1)), &(uParam0->f_454), &(uParam0->f_471), Global_2449755.f_1.f_845[(func_5679() - 1) /*57*/].f_46, uParam0->f_482, bVar1, uParam0->f_475, uParam0->f_476, uParam0->f_477, bVar2);
  func_6633(3, 1);
}