// am_casino_peds.c @ L266852
void func_3037(int iParam0)
{
  int iVar0;
  int iVar1;
  
  if (iParam0 == 97 || iParam0 == 91)
  {
    iVar0 = MISC::GET_HASH_KEY("proc_stones_01");
    iVar1 = iVar0;
    INTERIOR::ENABLE_EXTERIOR_CULL_MODEL_THIS_FRAME(iVar1);
    iVar0 = MISC::GET_HASH_KEY("proc_stones_02");
    iVar1 = iVar0;
    INTERIOR::ENABLE_EXTERIOR_CULL_MODEL_THIS_FRAME(iVar1);
    iVar0 = MISC::GET_HASH_KEY("proc_stones_03");
    iVar1 = iVar0;
    INTERIOR::ENABLE_EXTERIOR_CULL_MODEL_THIS_FRAME(iVar1);
    iVar0 = MISC::GET_HASH_KEY("proc_stones_04");
    iVar1 = iVar0;
    INTERIOR::ENABLE_EXTERIOR_CULL_MODEL_THIS_FRAME(iVar1);
    iVar0 = MISC::GET_HASH_KEY("proc_stones_05");
    iVar1 = iVar0;
    INTERIOR::ENABLE_EXTERIOR_CULL_MODEL_THIS_FRAME(iVar1);
  }
}