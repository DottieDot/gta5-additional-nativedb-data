// fm_capture_creator.ysc @ L183722
void func_1484()
{
  if (STREAMING::_GET_USED_CREATOR_MODEL_MEMORY_PERCENTAGE() < 1f)
  {
    func_1485(SYSTEM::ROUND((STREAMING::_GET_USED_CREATOR_MODEL_MEMORY_PERCENTAGE() * 1000f)), 1000, "FMMC_M_MEM", 1, -1, 13, -1082130432, -1082130432, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 1, 0, 0, 1, -1, 0, -1);
  }
  else
  {
    func_1485(1, 1, "FMMC_M_MEM", 6, -1, 13, -1082130432, -1082130432, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 1, 0, 0, 1, -1, 0, -1);
  }
}