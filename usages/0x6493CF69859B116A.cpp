// fm_bj_race_controler.ysc @ L488798
void func_8016(var uParam0, var uParam1)
{
  int iVar0;
  
  if (func_4313(uParam1) == 3)
  {
    if (func_288(uParam0, 0) || func_238(uParam0))
    {
      if (func_361())
      {
        if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
        {
          iVar0 = ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0));
          if (((VEHICLE::IS_THIS_MODEL_A_HELI(iVar0) || VEHICLE::IS_THIS_MODEL_A_PLANE(iVar0)) || iVar0 == joaat("submersible")) || iVar0 == joaat("submersible2"))
          {
            return;
          }
        }
      }
      CAM::_USE_STUNT_CAMERA_THIS_FRAME();
      if (func_8017((uParam1[NETWORK::PARTICIPANT_ID_TO_INT() /*203*/])->f_135, (uParam1[NETWORK::PARTICIPANT_ID_TO_INT() /*203*/])->f_2))
      {
        CAM::_0x425A920FDB9A0DDA("FOLLOW_VEHICLE_STUNT_CAMERA");
      }
    }
  }
}