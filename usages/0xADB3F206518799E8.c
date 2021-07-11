// friends_controller.c @ L34614
void func_281(var uParam0, var uParam1, bool bParam2)
{
  if (bParam2)
  {
    if (uParam1->f_8 == 0 && uParam1->f_1 != Global_94433)
    {
      uParam1->f_6 = PED::GET_PED_RELATIONSHIP_GROUP_DEFAULT_HASH(uParam1->f_2);
      uParam1->f_7 = PED::GET_PED_RELATIONSHIP_GROUP_DEFAULT_HASH(uParam1->f_2);
      PED::SET_PED_RELATIONSHIP_GROUP_DEFAULT_HASH(uParam1->f_2, uParam0->f_57);
      PED::SET_PED_RELATIONSHIP_GROUP_HASH(uParam1->f_2, uParam0->f_57);
      uParam1->f_8 = 1;
    }
  }
  else if (uParam1->f_8 == 1)
  {
    if (uParam1->f_1 == Global_94433)
    {
    }
    else
    {
      if (func_252(uParam1->f_2, 780511057))
      {
        TASK::CLEAR_PED_TASKS(uParam1->f_2);
      }
      PED::SET_PED_RELATIONSHIP_GROUP_HASH(uParam1->f_2, uParam1->f_6);
      PED::SET_PED_RELATIONSHIP_GROUP_DEFAULT_HASH(uParam1->f_2, uParam1->f_7);
    }
    uParam1->f_8 = 0;
  }
}