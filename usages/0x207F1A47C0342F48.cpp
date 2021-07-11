// golf.ysc @ L121321
void func_1031(var uParam0, var uParam1)
{
  float fVar0;
  char* sVar1;
  bool bVar2;
  char cVar3[32];
  char cVar4[32];
  
  sVar1 = func_997(uParam0, uParam1, &fVar0, 0, 0, 0, 0);
  bVar2 = !func_454(sVar1);
  StringCopy(&cVar3, func_835(uParam1, uParam0, 0, 1), 32);
  cVar4 = { cVar3 };
  StringConCat(&cVar3, "shuffle", 32);
  StringConCat(&cVar4, "shuffle", 32);
  if (bVar2)
  {
    StringConCat(&cVar4, sVar1, 32);
  }
  if (ENTITY::IS_ENTITY_PLAYING_ANIM(func_1345(uParam0), func_939(1), &cVar4, 3))
  {
    if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(func_1345(uParam0), func_939(1), &cVar4) < 0.9f)
    {
      if (bVar2)
      {
        TASK::SET_ANIM_WEIGHT(PLAYER::PLAYER_PED_ID(), (1f - fVar0), 0, 0, 0);
        TASK::SET_ANIM_WEIGHT(PLAYER::PLAYER_PED_ID(), fVar0, 0, 1, 0);
      }
    }
    return;
  }
  func_990(func_1345(uParam0), &cVar3, &cVar4, bVar2, fVar0, 1f, 10, 0f, 0.125f, 0.125f, 1);
}