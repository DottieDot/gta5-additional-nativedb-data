// fanatic3.ysc @ L48158
void func_525()
{
  if (func_524(Local_54.f_28[0]))
  {
    iLocal_106 = Local_54.f_28[0];
    PED::SET_PED_FLEE_ATTRIBUTES(iLocal_106, 2, true);
    PED::ADD_RELATIONSHIP_GROUP("Buddy", &iLocal_151);
    PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_106, iLocal_151);
    PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_151, 1862763509);
    PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, 1862763509, iLocal_151);
    PED::SET_DRIVER_RACING_MODIFIER(iLocal_106, 0.5f);
  }
  else
  {
    STREAMING::REQUEST_MODEL(joaat("ig_maryann"));
    while (!STREAMING::HAS_MODEL_LOADED(joaat("ig_maryann")))
    {
      SYSTEM::WAIT(0);
    }
    iLocal_106 = PED::CREATE_PED(26, joaat("ig_maryann"), 809.66f, 1279.76f, 360.49f, 122.53f, 1, true);
    PED::SET_PED_FLEE_ATTRIBUTES(iLocal_106, 2, true);
    PED::ADD_RELATIONSHIP_GROUP("Buddy", &iLocal_151);
    PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_106, iLocal_151);
    PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_151, 1862763509);
    PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, 1862763509, iLocal_151);
    PED::SET_DRIVER_RACING_MODIFIER(iLocal_106, 0.5f);
  }
  iLocal_56 = 0;
}