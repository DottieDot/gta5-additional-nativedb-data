// am_pi_menu.c @ L192294
void func_1579()
{
  var uVar0;
  
  func_1080(func_1506());
  func_1076(0, "PI_BIK_0_0", 0, func_1581(&uVar0), 0, 0);
  func_1076(1, "PI_BIK_0_1", 0, 1, 0, 0);
  if (Global_2515605[Global_2509237 /*66*/][1] == 0)
  {
    func_1076(1, "PIM_DHIGH0", 0, !func_50(), 0, 0);
    func_1560(18);
    STATS::_0x44919CC079BB60BF(0);
  }
  else
  {
    func_1076(1, "PIM_DHIGH1", 0, !func_50(), 0, 0);
    func_612(18);
    func_1580(134);
    STATS::_0x44919CC079BB60BF(1);
  }
}