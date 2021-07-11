// am_mp_arcade.c @ L320622
void func_4727(char* sParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, struct<4> Param7)
{
  int iVar0;
  
  if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
  {
    return;
  }
  iVar0 = SYSTEM::ROUND((fParam3 * IntToFloat(iLocal_265)));
  fParam3 = (SYSTEM::TO_FLOAT(iVar0) * (1f / IntToFloat(iLocal_265)));
  iVar0 = SYSTEM::ROUND(((fParam5 * IntToFloat(iLocal_265)) / 4f)) * 4;
  fParam5 = (SYSTEM::TO_FLOAT(iVar0) * (1f / IntToFloat(iLocal_265)));
  GRAPHICS::_0x2D3B147AFAD49DE0(sParam0, sParam1, func_4728(fParam2), fParam3, (fParam4 * fLocal_263), fParam5, fParam6, Param7, Param7.f_1, Param7.f_2, Param7.f_3, 0);
}