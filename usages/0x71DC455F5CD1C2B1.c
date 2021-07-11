// fmmc_launcher.c @ L538554
void func_8288(var uParam0)
{
  var uVar0;
  struct<14> Var1;
  int iVar2;
  char* sVar3;
  int iVar4;
  
  if (NETWORK::_0x71DC455F5CD1C2B1(uParam0))
  {
    uVar0 = NETWORK::_0x3855FB5EB2C5E8B2(uParam0);
    Var1.f_13 = uVar0;
    iVar2 = func_8290(&Var1);
    if (func_8289(iVar2))
    {
      func_6050(iVar2, &sVar3, &iVar4);
      if (func_750(*uParam0))
      {
        if (func_9946() >= 13 && func_9946() <= 19)
        {
          NETWORK::_0x0D77A82DC2D0DA59(uParam0, &sVar3);
        }
      }
    }
  }
}