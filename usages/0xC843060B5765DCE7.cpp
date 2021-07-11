// am_rollercoaster.ysc @ L3131
float func_53()
{
  int iVar0;
  float fVar1;
  float fVar2;
  float fVar3;
  
  iVar0 = func_52(Local_1413.f_4);
  fVar1 = (Local_1417[Local_1413.f_4 /*5*/].f_2 - Local_1417[iVar0 /*5*/].f_2);
  fVar2 = (Local_1417[iVar0 /*5*/].f_3 - Local_1417[Local_1413.f_4 /*5*/].f_3);
  if (fVar2 < 0f)
  {
    fVar2 = (fVar2 + Local_1417[224 /*5*/].f_3);
  }
  fVar3 = MISC::ASIN((fVar1 / fVar2));
  return (10f * SYSTEM::SIN(fVar3));
}