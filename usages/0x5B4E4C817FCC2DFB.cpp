// am_armwrestling.ysc @ L123114
int func_898()
{
  vector3 vVar0;
  float fVar1;
  int iVar2;
  
  fVar1 = 45f;
  iVar2 = 666;
  if (!CAM::DOES_CAM_EXIST(Global_2449755.f_2846.f_19))
  {
    Global_2449755.f_2846.f_22 = { CAM::GET_FINAL_RENDERED_CAM_COORD() };
    vVar0 = { CAM::GET_FINAL_RENDERED_CAM_ROT(2) };
    fVar1 = CAM::GET_FINAL_RENDERED_CAM_FOV();
    func_713(0, 0);
    GRAPHICS::ANIMPOSTFX_PLAY("MinigameTransitionIn", 0, 1);
    Global_2449755.f_2846.f_19 = CAM::CREATE_CAM_WITH_PARAMS("DEFAULT_SCRIPTED_CAMERA", Global_2449755.f_2846.f_22, vVar0, 65f, 0, 2);
    CAM::SET_CAM_FOV(Global_2449755.f_2846.f_19, fVar1);
    CAM::SET_CAM_ACTIVE(Global_2449755.f_2846.f_19, true);
    CAM::RENDER_SCRIPT_CAMS(true, false, iVar2, 1, 1, 0);
    if (Global_2449755.f_2846.f_26)
    {
      CAM::SET_CAM_PARAMS(Global_2449755.f_2846.f_19, Global_2449755.f_2846.f_22, vVar0, fVar1, 0, 1, 1, 2);
      CAM::SET_CAM_PARAMS(Global_2449755.f_2846.f_19, Global_2449755.f_2846.f_22 + Vector(3f, 0f, 0f), vVar0, fVar1, iVar2, 0, 0, 2);
    }
    NETWORK::NETWORK_SET_IN_FREE_CAM_MODE(1);
    Global_2449755.f_2846.f_41 = 1;
  }
  else
  {
    return 1;
  }
  return 0;
}