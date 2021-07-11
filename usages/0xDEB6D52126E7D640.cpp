// fbi4_prep2.ysc @ L7466
void func_219(char* sParam0, int iParam1, int iParam2)
{
  struct<6> Var0;
  
  if (iLocal_56 != iParam1 && !HUD::IS_MESSAGE_BEING_DISPLAYED())
  {
    Var0 = { func_221() };
    if ((((!MISC::ARE_STRINGS_EQUAL(&Var0, sParam0) && !TASK::IS_PED_IN_WRITHE(Local_197)) && !PED::IS_PED_RAGDOLL(Local_197)) && !PED::IS_PED_BEING_STUNNED(Local_197, 0)) && !PED::IS_PED_BEING_STEALTH_KILLED(Local_197))
    {
      func_220(&uLocal_208, cLocal_207, sParam0, 7, iParam2, 0);
    }
  }
}