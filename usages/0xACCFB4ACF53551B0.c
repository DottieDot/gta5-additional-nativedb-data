// agency_heist3b.c @ L129419
int func_876(var uParam0, vector3 vParam1, float fParam2, int iParam3)
{
  if (func_41(vParam1) || fParam2 <= 0f)
  {
    return 0;
  }
  if (uParam0->f_868)
  {
    if (func_98(uParam0->f_868.f_4, vParam1, 0) && uParam0->f_868.f_10 == fParam2)
    {
      uParam0->f_868.f_2 = 0;
      if (!uParam0->f_868.f_1)
      {
        uParam0->f_982 = 1;
        return 1;
      }
      else
      {
        return 1;
      }
    }
  }
  STREAMING::NEW_LOAD_SCENE_START_SPHERE(vParam1, fParam2, iParam3);
  uParam0->f_868 = 1;
  uParam0->f_868.f_3 = MISC::GET_GAME_TIMER();
  uParam0->f_868.f_4 = { vParam1 };
  uParam0->f_868.f_7 = { 0f, 0f, 0f };
  uParam0->f_868.f_10 = fParam2;
  uParam0->f_982 = 1;
  return 1;
}