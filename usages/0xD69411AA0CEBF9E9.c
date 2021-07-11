// agency_heist3a.c @ L130922
void func_904()
{
  switch (iLocal_2123)
  {
    case 0:
      if (((func_593(iLocal_2203[0], 119.9168f, -740.3616f, 253.1524f, "V_FIB03_IT3_hall", "v_fib03") || func_593(iLocal_2203[0], 119.9168f, -740.3616f, 253.1524f, "V_FIB03_IT3_cor1", "v_fib03")) || func_593(iLocal_2203[0], 119.9168f, -740.3616f, 253.1524f, "V_FIB03_IT3_open", "v_fib03")) || func_593(iLocal_2203[0], 135.3519f, -731.3309f, 249.5521f, "V_FIB02_IT2_elev", "v_fib02"))
      {
        fLocal_2146 = (fLocal_2146 + (MISC::GET_FRAME_TIME() * 0.1f));
        if (fLocal_2146 > fLocal_2148)
        {
          fLocal_2146 = fLocal_2148;
        }
        fLocal_2147 = (fLocal_2147 + (MISC::GET_FRAME_TIME() * 1f));
        if (fLocal_2147 > fLocal_2149)
        {
          fLocal_2147 = fLocal_2149;
        }
        PED::_0x110F526AB784111F(iLocal_2203[0], fLocal_2146);
        PED::SET_PED_ENVEFF_SCALE(iLocal_2203[0], fLocal_2147);
        PED::SET_PED_ENVEFF_COLOR_MODULATOR(iLocal_2203[0], 87, 81, 68);
        PED::SET_ENABLE_PED_ENVEFF_SCALE(iLocal_2203[0], 1);
        if (fLocal_2146 == fLocal_2148 && fLocal_2147 == fLocal_2149)
        {
          iLocal_2123++;
        }
      }
      break;
    
    case 1:
      break;
  }
}