// fm_capture_creator.c @ L48072
void func_628(int iParam0, int iParam1, var uParam2)
{
  int iVar0;
  int iVar1;
  int iVar2;
  var uVar3;
  int iVar4;
  int iVar5;
  
  if (*uParam2 != 0)
  {
    GRAPHICS::DELETE_CHECKPOINT(*uParam2);
    *uParam2 = 0;
  }
  HUD::GET_HUD_COLOUR(iParam1, &iVar0, &iVar1, &iVar2, &uVar3);
  if (!func_2977(Global_4456448.f_79))
  {
    func_2724(iParam0, Global_4456448.f_79, iParam1, "FMMC_B_4", 1f, 0, 0, -1);
    iVar4 = func_629();
    if (iVar4 != -1)
    {
      HUD::SET_BLIP_SPRITE(*iParam0, iVar4);
      HUD::SET_BLIP_NAME_FROM_TEXT_FILE(*iParam0, "FMMC_B_4");
    }
    iVar5 = 51;
    *uParam2 = GRAPHICS::CREATE_CHECKPOINT(iVar5, Global_4456448.f_79, Global_4456448.f_79, 4f, iVar0, iVar1, iVar2, 255, 0);
    GRAPHICS::_0x615D3925E87A3B26(*uParam2);
  }
}