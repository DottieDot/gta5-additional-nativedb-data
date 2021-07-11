// fmmc_launcher.c @ L573520
void func_9256(char* sParam0)
{
  int iVar0;
  int iVar1;
  
  if (MISC::ARE_STRINGS_EQUAL(sParam0, "HS3F_SUB_CEL"))
  {
    iVar0 = CUTSCENE::GET_ENTITY_INDEX_OF_CUTSCENE_ENTITY("brucie", 0);
    if (ENTITY::DOES_ENTITY_EXIST(iVar0))
    {
      if (ENTITY::HAS_ANIM_EVENT_FIRED(iVar0, MISC::GET_HASH_KEY("brucie_shot")))
      {
        iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0);
        if (!PED::IS_PED_INJURED(iVar1))
        {
          PED::APPLY_PED_BLOOD_BY_ZONE(iVar1, 4, 0.8f, 0.7f, "ShotgunLargeMonolithic");
        }
      }
    }
  }
}