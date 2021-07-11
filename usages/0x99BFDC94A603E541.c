// am_armwrestling.c @ L119173
void func_803(var uParam0, var uParam1, var uParam2, bool bParam3, float fParam4, float fParam5)
{
  int iVar0;
  int iVar1;
  vector3 vVar2;
  float fVar3;
  
  vVar2 = { func_984(uParam1, fParam4 > fParam5, func_815()) };
  fVar3 = func_805(uParam1);
  if (fParam4 < fParam5)
  {
    fVar3 = func_1012((fVar3 + 180f), 0f, 360f);
  }
  iVar0 = OBJECT::CREATE_OBJECT_NO_OFFSET(joaat("proair_hoc_puck"), vVar2, false, false, false);
  ENTITY::SET_ENTITY_HEADING(iVar0, fVar3);
  ENTITY::SET_ENTITY_VISIBLE(iVar0, false, 0);
  ENTITY::FREEZE_ENTITY_POSITION(iVar0, true);
  iVar1 = NETWORK::OBJ_TO_NET(iVar0);
  func_804(uParam0[iLocal_318 /*21*/], iVar0, iVar1);
  if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
  {
    ENTITY::ATTACH_ENTITY_TO_ENTITY(PLAYER::PLAYER_PED_ID(), iVar0, -1, 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
    ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), fVar3);
    WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_UNARMED"), true);
    TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
  }
  if (bParam3)
  {
    func_972(uParam2, 0, 1, 0, 3, 5000);
    CAM::RENDER_SCRIPT_CAMS(true, false, 3000, 1, 0, 0);
  }
}