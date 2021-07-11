// appemail.ysc @ L4538
void func_65()
{
  float fVar0;
  
  fVar0 = func_66(vLocal_48, vLocal_47, -90f, 0f, 90f, Global_19446, 350f, 0);
  if (Global_8160 == 0)
  {
    MOBILE::SET_MOBILE_PHONE_SCALE((500f + (75f * (1f - fVar0))));
  }
  if (fVar0 >= 1f)
  {
    Global_21838 = 0;
    func_1(0);
    func_4();
    iLocal_18 = 0;
  }
}