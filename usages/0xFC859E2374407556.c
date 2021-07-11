// exile2.c @ L135631
int func_935()
{
  int iVar0;
  
  if (WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar0, 1))
  {
    if (WEAPON::GET_WEAPONTYPE_GROUP(iVar0) == joaat("GROUP_SNIPER"))
    {
      if (CAM::IS_FIRST_PERSON_AIM_CAM_ACTIVE())
      {
        if (PAD::GET_ALLOW_MOVEMENT_WHILE_ZOOMED())
        {
          if (PAD::IS_CONTROL_PRESSED(0, 42) || PAD::IS_CONTROL_PRESSED(0, 43))
          {
            return 1;
          }
        }
        else if ((PAD::IS_CONTROL_PRESSED(0, 39) || PAD::IS_CONTROL_PRESSED(0, 40)) || PAD::IS_CONTROL_PRESSED(0, 41))
        {
          return 1;
        }
      }
    }
  }
  return 0;
}