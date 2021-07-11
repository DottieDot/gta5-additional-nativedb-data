// fm_capture_creator.ysc @ L53437
int func_660(var uParam0, int iParam1)
{
  int iVar0;
  
  iVar0 = 0;
  while (iVar0 <= (iParam1 - 1))
  {
    if (GRAPHICS::IS_DECAL_ALIVE((*uParam0)[iVar0]))
    {
    }
    else
    {
      return iVar0;
    }
    iVar0++;
  }
  return -1;
}