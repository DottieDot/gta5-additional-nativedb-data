// re_seaplane.ysc @ L4610
void func_100(int iParam0)
{
  func_58(iParam0, 3);
  if (!func_121(4))
  {
    func_68(4);
  }
  if (!func_121(2))
  {
    func_68(2);
  }
  Local_47[iParam0 /*6*/].f_1 = func_60(Local_47[iParam0 /*6*/], 1, 145);
  PED::SET_PED_SEEING_RANGE(Local_47[iParam0 /*6*/], 200f);
  if (PED::IS_PED_IN_ANY_VEHICLE(Local_47[iParam0 /*6*/], 0))
  {
    if (func_88(Local_47[iParam0 /*6*/], 0) != -1)
    {
      HUD::SET_BLIP_ALPHA(Local_47[iParam0 /*6*/].f_1, 0);
      HUD::SET_BLIP_HIDDEN_ON_LEGEND(Local_47[iParam0 /*6*/].f_1, 1);
    }
    else
    {
      TASK::CLEAR_PED_TASKS(Local_47[iParam0 /*6*/]);
      PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_47[iParam0 /*6*/], true);
    }
  }
}