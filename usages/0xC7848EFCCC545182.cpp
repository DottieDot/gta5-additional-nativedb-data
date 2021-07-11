// am_mp_property_int.ysc @ L499837
void func_7251()
{
  vector3 vVar0;
  vector3 vVar1;
  vector3 vVar2;
  vector3 vVar3;
  
  func_7246();
  if (ENTITY::DOES_ENTITY_EXIST(Local_5484.f_11))
  {
    MISC::GET_MODEL_DIMENSIONS(ENTITY::GET_ENTITY_MODEL(Local_5484.f_11), &vVar1, &vVar2);
    vVar0 = { 0f, ((vVar2.y - vVar1.y) * -0.5f), ((vVar2.z - vVar1.z) * 0.5f) };
    vVar0 = { vVar0 + Local_5484.f_22 };
    CAM::ATTACH_CAM_TO_ENTITY(Local_5484.f_80[0], Local_5484.f_11, vVar0, 1);
    Local_5484.f_19[0] = 1;
    vVar3 = { 0f, 0f, 0f };
    vVar3 = { vVar3 + Local_5484.f_25 };
    CAM::POINT_CAM_AT_ENTITY(Local_5484.f_80[0], Local_5484.f_11, vVar3, 1);
    CAM::SHAKE_CAM(Local_5484.f_80[0], "HAND_SHAKE", 0.25f);
    CAM::SET_CAM_ACTIVE(Local_5484.f_80[0], true);
    CAM::SET_CAM_NEAR_CLIP(Local_5484.f_80[0], 0.01f);
    CAM::RENDER_SCRIPT_CAMS(true, false, 3000, 1, 0, 0);
  }
}