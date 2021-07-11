// fbi4.c @ L134503
int func_929(float fParam0)
{
  switch (iLocal_554)
  {
    case 0:
      uLocal_702 = OBJECT::GET_RAYFIRE_MAP_OBJECT(890.3647f, -2367.289f, 28.10582f, 10f, "DES_Smash2");
      if (OBJECT::DOES_RAYFIRE_MAP_OBJECT_EXIST(uLocal_702))
      {
        OBJECT::SET_STATE_OF_RAYFIRE_MAP_OBJECT(uLocal_702, 4);
        iLocal_554++;
      }
      break;
    
    case 1:
      if (OBJECT::GET_STATE_OF_RAYFIRE_MAP_OBJECT(uLocal_702) == 5)
      {
        if (fParam0 > 1100f)
        {
          OBJECT::SET_STATE_OF_RAYFIRE_MAP_OBJECT(uLocal_702, 6);
          iLocal_554++;
          return 1;
        }
      }
      break;
    
    case 2:
      break;
    
    case 22:
      break;
  }
  return 0;
}