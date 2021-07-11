// fm_survival_controller.c @ L8850
void func_116(int iParam0, int iParam1)
{
  VEHICLE::SET_VEHICLE_DOORS_LOCKED(iParam0, 2);
  ENTITY::SET_ENTITY_MAX_HEALTH(iParam0, Global_4456448.f_192215.f_1192[iLocal_341 /*5*/][iParam1]);
  ENTITY::SET_ENTITY_HEALTH(iParam0, Global_4456448.f_192215.f_1192[iLocal_341 /*5*/][iParam1], 0);
  VEHICLE::SET_VEHICLE_BODY_HEALTH(iParam0, SYSTEM::TO_FLOAT(Global_4456448.f_192215.f_1192[iLocal_341 /*5*/][iParam1]));
  if (Global_4456448.f_192215.f_1298[iLocal_341 /*5*/][iParam1] != -1 && Global_4456448.f_192215.f_1298[iLocal_341 /*5*/][iParam1] != 47)
  {
    func_117(iParam0, func_123(Global_4456448.f_192215.f_1298[iLocal_341 /*5*/][iParam1]), -1, -1, -1, -1, -1082130432);
  }
  if (func_104(iParam0))
  {
    VEHICLE::_0x0205F5365292D2EB(iParam0, 20f);
  }
  else
  {
    VEHICLE::_0x0205F5365292D2EB(iParam0, 10f);
  }
}