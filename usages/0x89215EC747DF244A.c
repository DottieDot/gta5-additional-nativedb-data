// paparazzo3a.c @ L40098
int func_345()
{
  if (iLocal_242 < 20)
  {
    if (func_346(Local_316))
    {
      if (ENTITY::IS_ENTITY_ON_SCREEN(Local_316) && CAM::IS_SPHERE_VISIBLE(ENTITY::GET_ENTITY_COORDS(Local_316, true), 1f))
      {
        if (!ENTITY::IS_ENTITY_OCCLUDED(Local_316))
        {
          if (CAM::GET_FOCUS_PED_ON_SCREEN(100f, 31086, 0.42f, 0.26f, 0.01f, 50f, 0.2f, 31086, 24818) == Local_316 || CAM::GET_FOCUS_PED_ON_SCREEN(100f, 31086, 0.42f, 0.26f, 0.01f, 50f, 0.2f, 31086, 24818) == Local_315[0 /*9*/])
          {
            if (!func_238(Local_316, PLAYER::PLAYER_PED_ID(), 50f, 1))
            {
              iLocal_266 = 1;
            }
            else
            {
              iLocal_243++;
            }
          }
        }
      }
    }
    iLocal_242++;
  }
  if (iLocal_243 > 5)
  {
    return 1;
  }
  return 0;
}