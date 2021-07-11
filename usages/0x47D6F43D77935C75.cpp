// agency_heist1.ysc @ L117407
void func_690()
{
  if (CAM::DOES_CAM_EXIST(iLocal_168))
  {
    CAM::SET_CAM_ACTIVE(iLocal_168, false);
    CAM::DESTROY_CAM(iLocal_168, 0);
  }
  if (CAM::DOES_CAM_EXIST(Local_129))
  {
    CAM::SET_CAM_ACTIVE(Local_129, false);
    CAM::DESTROY_CAM(Local_129, 0);
    ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), true, 0);
  }
  if (!ENTITY::IS_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID()))
  {
    ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), true, 0);
  }
  CAM::RENDER_SCRIPT_CAMS(false, false, 3000, 1, 0, 0);
}