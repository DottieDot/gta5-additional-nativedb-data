// cheat_controller.c @ L198
void func_3(int iParam0)
{
  switch (iLocal_46)
  {
    case 0:
      break;
    
    case 1:
      break;
    
    case 2:
      if (INTERIOR::IS_INTERIOR_SCENE())
      {
        func_21("CHEAT_VEHICLE_SPAWN_DENIED");
        iLocal_46 = 1;
      }
      else
      {
        func_20(iParam0);
      }
      break;
    
    case 4:
      func_4(iParam0);
      break;
    
    default:
      break;
  }
}