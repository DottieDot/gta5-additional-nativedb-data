// freemode.c @ L853762
void func_12307(int iParam0, int iParam1)
{
  if ((func_12399(iParam0) || func_12398(iParam0)) || func_12397(iParam0))
  {
    if (HUD::IS_MP_GAMER_TAG_MOVIE_ACTIVE())
    {
      if (!HUD::_IS_VALID_MP_GAMER_TAG_MOVIE(iParam1))
      {
        if (func_12390(iParam0, iParam1))
        {
          func_12379(iParam0, iParam1);
          func_12378(iParam0);
          func_12377(iParam0);
          func_12376(iParam0);
          func_12309(iParam1, iParam0);
        }
      }
    }
  }
  if (Global_262145.f_14591 == 0)
  {
    func_12308(iParam1);
  }
}