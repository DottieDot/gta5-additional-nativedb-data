// family_scene_f0.c @ L103888
void func_446(vector3 vParam0, vector3 vParam1, var uParam2)
{
  if (PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
  {
    if (MISC::HAS_BULLET_IMPACTED_IN_BOX(vParam0, vParam1, 1, 1))
    {
      *uParam2++;
      if (*uParam2 > 6)
      {
        Global_93722 = 3;
      }
    }
    else if ((FIRE::IS_EXPLOSION_IN_AREA(0, vParam0, vParam1) || FIRE::IS_EXPLOSION_IN_AREA(2, vParam0, vParam1)) || MISC::IS_PROJECTILE_TYPE_IN_AREA(vParam0, vParam1, joaat("WEAPON_GRENADELAUNCHER"), 1))
    {
      Global_93722 = 5;
    }
  }
}