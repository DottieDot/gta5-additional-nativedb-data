// agency_heist3a.c @ L138033
void func_984()
{
  if (CUTSCENE::IS_CUTSCENE_ACTIVE() || CUTSCENE::HAS_CUTSCENE_LOADED())
  {
    if (!iLocal_1945)
    {
      STREAMING::_0xF8155A7F03DDFC8E(1);
      STREAMING::_0xBEB2D9A1D9A8F55A(4, 4, 4, 4);
      iLocal_1945 = 1;
    }
  }
  else if (iLocal_1945)
  {
    iLocal_1945 = 0;
  }
}