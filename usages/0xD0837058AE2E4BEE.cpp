// agency_heist3b.ysc @ L121294
void func_763(int iParam0, int iParam1)
{
  if (!MISC::IS_BIT_SET(*iParam0, 29))
  {
    GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER(iLocal_66, "SET_BACKGROUND", SYSTEM::TO_FLOAT(iParam1), -1082130432, -1082130432, -1082130432, -1082130432);
    if (GRAPHICS::GET_IS_WIDESCREEN())
    {
      GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER_AND_STRING(iLocal_66, "ADD_PROGRAM", SYSTEM::TO_FLOAT(7), SYSTEM::TO_FLOAT(4), -1f, -1f, -1f, "MyComputer", 0, 0, 0, 0);
    }
    else
    {
      GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER_AND_STRING(iLocal_66, "ADD_PROGRAM", SYSTEM::TO_FLOAT(8), SYSTEM::TO_FLOAT(4), -1f, -1f, -1f, "MyComputer", 0, 0, 0, 0);
    }
    GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_66, "SET_LABELS");
    func_760("H_ICON_1");
    if (iParam1 == 0)
    {
      func_760("H_ICON_2a");
    }
    else
    {
      func_760("H_ICON_2");
    }
    func_760("H_ICON_3");
    func_760("H_ICON_4");
    func_760("H_ICON_5");
    func_760("H_ICON_6");
    GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
    MISC::SET_BIT(iParam0, 29);
  }
}