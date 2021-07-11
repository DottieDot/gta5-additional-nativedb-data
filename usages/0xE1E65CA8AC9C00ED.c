// am_mp_casino_apartment.c @ L310450
void func_4783(var uParam0, char* sParam1, bool bParam2, bool bParam3, float fParam4, float fParam5)
{
  char cVar0[64];
  
  uParam0->f_3 = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(uParam0->f_38, uParam0->f_41, 2, bParam2, bParam3, 1065353216, 0, 1065353216);
  NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), uParam0->f_3, &(uParam0->f_5), sParam1, fParam4, fParam5, 5, 0, 1148846080, 0);
  NETWORK::NETWORK_START_SYNCHRONISED_SCENE(uParam0->f_3);
  StringCopy(&cVar0, "", 64);
  StringCopy(&cVar0, sParam1, 64);
  StringConCat(&cVar0, "_Facial", 64);
  PED::PLAY_FACIAL_ANIM(PLAYER::PLAYER_PED_ID(), &cVar0, &(uParam0->f_5));
  StringCopy(&(uParam0->f_21), sParam1, 24);
}