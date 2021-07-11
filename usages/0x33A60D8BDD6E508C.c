// net_apartment_activity.c @ L85367
void func_484(var uParam0)
{
  switch (uParam0->f_1930)
  {
    case 167:
    case 179:
      if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_14.f_1605[0 /*48*/].f_17, 0))
      {
        PED::_SET_PED_CAN_PLAY_INJURED_ANIMS(uParam0->f_14.f_1605[0 /*48*/].f_17, 1);
      }
      break;
  }
}