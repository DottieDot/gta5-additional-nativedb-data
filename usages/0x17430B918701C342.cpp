// fm_race_creator.ysc @ L388856
void func_5552()
{
  var uVar0;
  var uVar1;
  var uVar2;
  var uVar3;
  int iVar4;
  int iVar5;
  
  HUD::GET_HUD_COLOUR(1, &uVar0, &uVar1, &uVar2, &uVar3);
  HUD::_THEFEED_SET_ANIMPOSTFX_COLOR(uVar0, uVar1, uVar2, uVar3);
  iVar4 = 1;
  HUD::_THEFEED_SET_ANIMPOSTFX_COUNT(iVar4);
  iVar5 = 0;
  if (Global_111560.f_14046[Global_19486 /*20*/].f_10 == 1)
  {
    iVar5 = 1;
  }
  HUD::_THEFEED_SET_ANIMPOSTFX_SOUND(iVar5);
}