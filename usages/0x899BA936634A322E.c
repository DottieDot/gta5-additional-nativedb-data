// agency_heist3a.c @ L132965
void func_923()
{
  switch (iLocal_2048)
  {
    case 0:
      if (OBJECT::DOES_RAYFIRE_MAP_OBJECT_EXIST(uLocal_2484))
      {
        if (OBJECT::GET_STATE_OF_RAYFIRE_MAP_OBJECT(uLocal_2484) == 10)
        {
          iLocal_2048++;
        }
      }
      break;
    
    case 1:
      func_924("agency3a_michael_5");
      if (bLocal_1923)
      {
        iLocal_2048++;
      }
      break;
    
    case 2:
      func_924("agency3a_michael_6");
      break;
  }
}