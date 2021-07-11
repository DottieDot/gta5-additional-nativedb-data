// assassin_construction.ysc @ L18681
void func_384()
{
  if (!OBJECT::DOES_PICKUP_EXIST(iLocal_1421))
  {
    iLocal_1171 = 0;
    MISC::SET_BIT(&iLocal_1171, 3);
    MISC::SET_BIT(&iLocal_1171, 4);
    iLocal_1421 = OBJECT::CREATE_PICKUP(joaat("PICKUP_PARACHUTE"), -140.6149f, -945.9811f, 268.1331f, iLocal_1171, 1, 1, 0);
    if (!OBJECT::DOES_PICKUP_EXIST(iLocal_1422))
    {
      iLocal_1422 = OBJECT::CREATE_PICKUP_ROTATE(joaat("PICKUP_PARACHUTE"), -149.709f, -966.41f, 269.23f, 87f, 22f, 90f, 0, -1, 2, 1, 0);
    }
  }
}