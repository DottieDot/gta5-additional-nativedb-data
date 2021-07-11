// controller_taxi.ysc @ L3112
void func_89()
{
  if (func_82(Global_111560.f_19092, 4))
  {
    func_90(&(Global_111560.f_19092), 4);
    VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(func_20(), false);
  }
  if (func_82(Global_111560.f_19092, 256))
  {
    func_90(&(Global_111560.f_19092), 256);
    func_4(&iLocal_104);
  }
  if (iLocal_96 != 0)
  {
    if (SCRIPT::IS_THREAD_ACTIVE(iLocal_96))
    {
      SCRIPT::TERMINATE_THREAD(iLocal_96);
      iLocal_96 = 0;
    }
  }
  if (HUD::GET_LENGTH_OF_LITERAL_STRING(&vLocal_97) != 0)
  {
    SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED(&vLocal_97);
  }
  if (HUD::DOES_BLIP_EXIST(iLocal_101))
  {
    HUD::REMOVE_BLIP(&iLocal_101);
  }
  SCRIPT::TERMINATE_THIS_THREAD();
}