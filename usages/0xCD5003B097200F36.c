// re_muggings.c @ L2381
void func_40()
{
  if (!OBJECT::DOES_PICKUP_EXIST(iLocal_151))
  {
    if (PED::IS_PED_INJURED(iLocal_61))
    {
      vLocal_146 = { PED::GET_DEAD_PED_PICKUP_COORDS(iLocal_61, 1067030938, 1069547520) };
    }
    else
    {
      vLocal_146 = { OBJECT::GET_SAFE_PICKUP_COORDS(ENTITY::GET_ENTITY_COORDS(iLocal_61, true), 1.2f, 1.5f) };
    }
    iLocal_151 = OBJECT::CREATE_PICKUP(joaat("PICKUP_MONEY_WALLET"), vLocal_146, iLocal_120, iLocal_152, 1, iLocal_77);
    iLocal_65 = func_156(iLocal_151);
    func_37(&uLocal_336, 0, 0);
    bLocal_58 = true;
  }
}