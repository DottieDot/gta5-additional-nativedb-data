// am_mp_property_int.ysc @ L272070
void func_3010()
{
  vector3 vVar0;
  
  vVar0 = { Global_3934119[iLocal_525 /*2012*/].f_146.f_47 };
  if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("am_mp_yacht")) <= 0)
  {
    if (iLocal_397 == -1)
    {
      iLocal_397 = WATER::_ADD_CURRENT_RISE((vVar0.x - 200f), (vVar0.y - 200f), (vVar0.x + 200f), (vVar0.y + 200f), 0.02f);
      WATER::_0x547237AA71AB44DE(0.02f);
    }
  }
  else if (!func_48(PLAYER::PLAYER_ID()))
  {
    if (iLocal_397 != -1)
    {
      WATER::_REMOVE_CURRENT_RISE(iLocal_397);
      WATER::_0x547237AA71AB44DE(1f);
      iLocal_397 = -1;
    }
  }
}