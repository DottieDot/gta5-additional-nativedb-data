// bigwheel.ysc @ L1058
void func_24()
{
  int iVar0;
  vector3 vVar1;
  
  fLocal_164 = (fLocal_164 + (fLocal_165 * SYSTEM::TIMESTEP()));
  if (fLocal_164 >= 360f)
  {
    fLocal_164 = (fLocal_164 - 360f);
    iLocal_163++;
  }
  if (func_30(iLocal_161))
  {
    ENTITY::SET_ENTITY_COORDS(iLocal_161, vLocal_166, 1, false, 0, 1);
    ENTITY::SET_ENTITY_ROTATION(iLocal_161, (-fLocal_164 - (360f / 16f)), 0f, 0f, 2, 1);
    ENTITY::FREEZE_ENTITY_POSITION(iLocal_161, true);
  }
  if (AUDIO::IS_AUDIO_SCENE_ACTIVE("FAIRGROUND_RIDES_FERRIS_WHALE"))
  {
    if (func_30(PLAYER::PLAYER_PED_ID()))
    {
      vVar1 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
    }
    AUDIO::SET_AUDIO_SCENE_VARIABLE("FAIRGROUND_RIDES_FERRIS_WHALE", "HEIGHT", (vVar1.z - fLocal_168));
  }
  iVar0 = 0;
  while (iVar0 < 16)
  {
    func_25(&(Local_162[iVar0 /*7*/]));
    iVar0++;
  }
}