// drunk.ysc @ L5109
void func_171()
{
  int iVar0;
  
  bLocal_46 = false;
  if (Local_43.f_1 == PLAYER::PLAYER_PED_ID())
  {
    bLocal_46 = true;
    Global_42560 = 1;
    Global_42562++;
  }
  if (!ENTITY::IS_ENTITY_DEAD(Local_43.f_1, 0))
  {
    iVar0 = func_70(Local_43.f_1);
    switch (iVar0)
    {
      case 17:
        AUDIO::SET_AMBIENT_VOICE_NAME(Local_43.f_1, "AMANDA_DRUNK");
        break;
      
      case 19:
        AUDIO::SET_AMBIENT_VOICE_NAME(Local_43.f_1, "LAMAR_DRUNK");
        break;
      }
  }
}