// fmmc_launcher.c @ L446928
void func_6544(var uParam0)
{
  if (func_4162())
  {
    if (!func_103(40))
    {
      if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_990))
      {
        if (uParam0->f_991 != 0)
        {
          if (PED::IS_PEDHEADSHOT_VALID(uParam0->f_991))
          {
            if (PED::IS_PEDHEADSHOT_READY(uParam0->f_991))
            {
              func_3941(40);
              if (func_9946() == 34)
              {
                func_6629(uParam0, Global_4456448, func_4159(&Global_2445619, 0), 0);
              }
            }
          }
        }
        else
        {
          uParam0->f_991 = PED::REGISTER_PEDHEADSHOT(uParam0->f_990);
        }
      }
    }
  }
}