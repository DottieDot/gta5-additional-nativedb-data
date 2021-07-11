// gunclub_shop.ysc @ L10058
void func_84(var uParam0, int iParam1)
{
  int iVar0;
  
  if (!func_173(*iParam1))
  {
    if ((func_88(&Local_255, *iParam1, joaat("gun_root"), 0) != 0 && ENTITY::GET_ENTITY_MODEL(*uParam0) == WEAPON::GET_WEAPON_COMPONENT_TYPE_MODEL(func_88(&Local_255, *iParam1, joaat("gun_root"), 0))) || (func_88(&Local_255, *iParam1, joaat("gun_root"), 1) != 0 && ENTITY::GET_ENTITY_MODEL(*uParam0) == WEAPON::GET_WEAPON_COMPONENT_TYPE_MODEL(func_88(&Local_255, *iParam1, joaat("gun_root"), 1))))
    {
      while (func_178(&Local_255, *iParam1, iVar0, 0))
      {
        if (Local_255.f_4 != joaat("gun_root"))
        {
          if (WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), *iParam1, 0))
          {
            if (WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(PLAYER::PLAYER_PED_ID(), *iParam1, Local_255))
            {
              if (WEAPON::HAS_WEAPON_GOT_WEAPON_COMPONENT(*uParam0, Local_255))
              {
                WEAPON::REMOVE_WEAPON_COMPONENT_FROM_WEAPON_OBJECT(*uParam0, Local_255);
                func_87(*uParam0, Local_255);
              }
              WEAPON::GIVE_WEAPON_COMPONENT_TO_WEAPON_OBJECT(*uParam0, Local_255);
              func_85(*uParam0, Local_255);
            }
          }
        }
        iVar0++;
      }
    }
  }
}