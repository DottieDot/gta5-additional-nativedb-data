// am_imp_exp.ysc @ L8192
void func_189(int iParam0, int iParam1, int iParam2)
{
  var uVar0;
  var uVar1;
  var uVar2;
  var uVar3;
  
  HUD::GET_HUD_COLOUR(iParam2, &uVar0, &uVar1, &uVar2, &uVar3);
  if (iParam1 == 0)
  {
  }
  VEHICLE::TRACK_VEHICLE_VISIBILITY(iParam0);
  if (func_14(PLAYER::PLAYER_ID(), 1, 1))
  {
    if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
    {
      if (func_190(iParam0) == 0)
      {
        if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iParam0, 0))
        {
          if (VEHICLE::IS_VEHICLE_VISIBLE(iParam0))
          {
            GRAPHICS::ADD_ENTITY_ICON(iParam0, "MP_Arrow");
            GRAPHICS::SET_ENTITY_ICON_COLOR(iParam0, uVar0, uVar1, uVar2, 190);
            GRAPHICS::SET_ENTITY_ICON_VISIBILITY(iParam0, 1);
          }
        }
      }
    }
  }
}