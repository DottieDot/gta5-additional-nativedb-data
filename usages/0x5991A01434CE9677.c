// fm_bj_race_controler.c @ L275790
int func_3657(var uParam0, var uParam1)
{
  if (func_291(uParam1->f_570))
  {
    if (func_3658(uParam1->f_570, uParam1->f_571))
    {
      if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_5244))
      {
        if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_5244, 0))
        {
          if (VEHICLE::IS_THIS_MODEL_A_PLANE(ENTITY::GET_ENTITY_MODEL(uParam0->f_5244)))
          {
            if (!VEHICLE::_ARE_PLANE_WINGS_INTACT(uParam0->f_5244))
            {
              return 1;
            }
          }
        }
      }
    }
  }
  return 0;
}