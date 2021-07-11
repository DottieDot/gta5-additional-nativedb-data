// agency_heist3a.ysc @ L112869
void func_587(bool bParam0, bool bParam1)
{
  func_590(bParam0);
  func_589(bParam0);
  func_588(bParam0);
  if (bParam1)
  {
    PHYSICS::ROPE_LOAD_TEXTURES();
    if (bParam0)
    {
      while (!PHYSICS::ROPE_ARE_TEXTURES_LOADED())
      {
        SYSTEM::WAIT(0);
      }
    }
  }
}