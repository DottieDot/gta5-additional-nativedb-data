// abigail2.c @ L45350
void func_448(int iParam0, int iParam1)
{
  int iVar0;
  
  iVar0 = 0;
  while (iVar0 < 9)
  {
    if (!ENTITY::DOES_ENTITY_EXIST(Global_96030[iVar0]))
    {
      Global_96030[iVar0] = iParam0;
      Global_96040[iVar0] = iParam1;
      Global_96050[iVar0] = ENTITY::GET_ENTITY_MODEL(iParam0);
      if (VEHICLE::IS_THIS_MODEL_A_CAR(Global_96050[iVar0]))
      {
        Global_96078[iParam1 /*3*/][0] = -1;
      }
      else
      {
        Global_96078[iParam1 /*3*/][1] = -1;
      }
      iVar0 = 9;
    }
    if (iVar0 == 8)
    {
    }
    iVar0++;
  }
}