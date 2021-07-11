// act_cinema.c @ L106700
void func_763(var uParam0, var uParam1)
{
  int iVar0;
  vector3 vVar1;
  float fVar2;
  
  if (Global_2405071.f_2252 > 0)
  {
    iVar0 = 0;
    while (iVar0 < Global_2405071.f_2252)
    {
      if (func_764(Global_2405071.f_2253[iVar0 /*4*/], uParam0))
      {
        fVar2 = Global_2405071.f_2253[iVar0 /*4*/].f_3;
        if (SYSTEM::VMAG(*uParam1) > 0.01f)
        {
          vVar1 = { *uParam1 - Global_2405071.f_2253[iVar0 /*4*/] };
          fVar2 = MISC::GET_HEADING_FROM_VECTOR_2D(vVar1.x, vVar1.y);
        }
        func_724(Global_2405071.f_2253[iVar0 /*4*/], fVar2, uParam0, uParam1, 0, -1);
        Global_2405071.f_2481++;
      }
      iVar0++;
    }
  }
  if (uParam0->f_5 && Global_2405071.f_2878)
  {
    func_718(&(Global_2405071.f_2481.f_6[0 /*10*/]), &(Global_2405071.f_2481.f_6[1 /*10*/]), &(Global_2405071.f_2481.f_6[2 /*10*/]));
  }
}