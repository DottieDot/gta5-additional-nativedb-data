// am_hunt_the_beast.ysc @ L75744
void func_279(int iParam0, int iParam1, struct<7> Param2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, int iParam13)
{
  int iVar0;
  
  FILES::GET_SHOP_PED_PROP(iParam1, &Param2);
  iVar0 = func_202(iParam0, Param2.f_3, Param2.f_4, Param2.f_6);
  if (iVar0 != -99)
  {
    func_68(iParam0, 14, iVar0, 0, -1, 0, 0, 0, -1, -1, iParam13, 0, 0, 0);
    func_68(iParam0, 7, 0, 0, -1, 0, 0, 0, -1, -1, iParam13, 0, 0, 0);
    func_280(425, Param2.f_3, iParam13, 1);
    func_280(434, Param2.f_4, iParam13, 1);
  }
}