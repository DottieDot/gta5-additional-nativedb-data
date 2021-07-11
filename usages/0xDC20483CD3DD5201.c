// barry3a.c @ L46050
void func_451()
{
  HUD::REQUEST_ADDITIONAL_TEXT("BARR3A", 0);
  Local_43.f_5 = joaat("DLOADER");
  Local_43 = { 1199.8f, -1259.22f, 34.23f };
  Local_43.f_3 = 174.7f;
  if (func_204(PLAYER::PLAYER_PED_ID()))
  {
    func_238(&uLocal_63, 1, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
  }
  iLocal_236 = 0;
  iLocal_247 = 0;
  iLocal_230 = 0;
  func_462();
  iLocal_237 = 0;
  iLocal_238 = 0;
  iLocal_60 = 0;
  func_460();
  func_459();
  iLocal_232 = 0;
  STREAMING::REQUEST_MODEL(iLocal_58);
  STREAMING::REQUEST_MODEL(iLocal_59);
  iLocal_57 = 1;
  iLocal_243 = 0;
  iLocal_246 = 0;
  sLocal_253 = "DEFAULT";
  func_452(49, 1, 0);
  iLocal_54[0] = PED::ADD_SCENARIO_BLOCKING_AREA(-1156.9f, -1274f, 0f, -1141.5f, -1239.6f, 8f, 0, 1, 1, 1);
  iLocal_54[1] = PED::ADD_SCENARIO_BLOCKING_AREA(-1177f, -1292f, 0f, -1160f, -1273.3f, 8f, 0, 1, 1, 1);
  PATHFIND::SET_GPS_DISABLED_ZONE(-1132.88f, -1262.01f, 0f, -1102.43f, -1196.58f, 15f);
  PED::SET_CREATE_RANDOM_COPS(false);
}