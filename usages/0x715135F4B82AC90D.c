// director_mode.c @ L4445
void func_21(int iParam0)
{
  int iVar0;
  
  if (iLocal_347 > 0 && iParam0)
  {
    bLocal_393 = true;
  }
  iLocal_347 = 0;
  iLocal_348 = 0;
  iLocal_352 = 0;
  iVar0 = 0;
  while (iVar0 <= 49)
  {
    if (ENTITY::DOES_ENTITY_EXIST(Local_346[iVar0 /*13*/].f_11))
    {
      NETWORK::REMOVE_ALL_STICKY_BOMBS_FROM_ENTITY(Local_346[iVar0 /*13*/].f_11, 0);
      OBJECT::DELETE_OBJECT(&(Local_346[iVar0 /*13*/].f_11));
      func_18(Local_346[iVar0 /*13*/].f_10);
    }
    Local_346[iVar0 /*13*/] = { 0f, 0f, 0f };
    Local_346[iVar0 /*13*/].f_3 = { 0f, 0f, 0f };
    Local_346[iVar0 /*13*/].f_9 = 0f;
    Local_346[iVar0 /*13*/].f_10 = 0;
    iVar0++;
  }
}