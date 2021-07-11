// fm_bj_race_controler.c @ L281075
void func_3831(var uParam0, var uParam1)
{
  if (!func_364(uParam0))
  {
    return;
  }
  if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_5244))
  {
    WEAPON::SET_CURRENT_PED_VEHICLE_WEAPON(PLAYER::PLAYER_PED_ID(), func_704(ENTITY::GET_ENTITY_MODEL(uParam1->f_5244)));
    func_697(uParam1->f_5244, 1);
  }
}