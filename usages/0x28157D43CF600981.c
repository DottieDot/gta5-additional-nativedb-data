// act_cinema.c @ L1198
void func_1()
{
  if (Local_289[iLocal_268 /*2*/].f_1 == 1)
  {
    iLocal_269 = 1;
    if (!Local_288.f_34)
    {
      if (!func_2(Local_249.f_22, 0f, 0f, 0f, 0))
      {
        PED::SET_SCENARIO_PEDS_SPAWN_IN_SPHERE_AREA(Local_249.f_22, 15f, 5);
        Local_288.f_34 = 1;
      }
      else
      {
        Local_288.f_34 = 1;
      }
    }
  }
  iLocal_268++;
  if (iLocal_268 >= 32)
  {
    iLocal_268 = 0;
    if (Local_288.f_34 == 1)
    {
      if (!iLocal_269)
      {
        Local_288.f_34 = 0;
      }
    }
    iLocal_269 = 0;
  }
}