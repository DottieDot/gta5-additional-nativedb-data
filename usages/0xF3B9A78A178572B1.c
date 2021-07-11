// finale_heist_prepa.c @ L4162
void func_127(int iParam0)
{
  if (Local_289[iParam0 /*22*/].f_20 != 7)
  {
    if (func_377(Local_289[iParam0 /*22*/]))
    {
      if (func_78(Local_289[iParam0 /*22*/], 242628503) || PED::IS_PED_RUNNING_MOBILE_PHONE_TASK(Local_289[iParam0 /*22*/]))
      {
        TASK::CLEAR_PED_TASKS(Local_289[iParam0 /*22*/]);
      }
      else if (func_78(Local_289[iParam0 /*22*/], -1098463898) || func_78(Local_289[iParam0 /*22*/], 993674639))
      {
        PED::_0xF1C03A5352243A30(Local_289[iParam0 /*22*/]);
      }
      PED::SET_PED_AS_COP(Local_289[iParam0 /*22*/], 1);
      TASK::TASK_ARREST_PED(Local_289[iParam0 /*22*/], PLAYER::PLAYER_PED_ID());
      WEAPON::GIVE_WEAPON_TO_PED(Local_289[iParam0 /*22*/], joaat("WEAPON_PISTOL"), -1, false, true);
      ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(Local_289[iParam0 /*22*/]);
      PLAYER::_0xBC9490CA15AEA8FB(PLAYER::PLAYER_ID());
      func_128(iParam0);
      Local_289[iParam0 /*22*/].f_18 = 3;
      Local_289[iParam0 /*22*/].f_20 = 7;
    }
  }
}