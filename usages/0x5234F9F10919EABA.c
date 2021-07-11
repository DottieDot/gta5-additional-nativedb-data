// carsteal2.c @ L55246
int func_510(vector3 vParam0)
{
  int iVar0;
  vector3 vVar1;
  
  if (CAM::DOES_CAM_EXIST(CAM::GET_RENDERING_CAM()))
  {
    if (CAM::IS_CAM_RENDERING(CAM::GET_RENDERING_CAM()))
    {
      vVar1 = { CAM::GET_CAM_COORD(CAM::GET_RENDERING_CAM()) };
      iVar0 = 0;
      while (iVar0 < Local_67)
      {
        if (func_511(vVar1, vParam0, Local_67[iVar0 /*13*/][0 /*3*/], Local_67[iVar0 /*13*/][1 /*3*/], Local_67[iVar0 /*13*/][2 /*3*/], Local_67[iVar0 /*13*/][3 /*3*/]))
        {
          return 1;
        }
        iVar0++;
      }
    }
  }
  return 0;
}