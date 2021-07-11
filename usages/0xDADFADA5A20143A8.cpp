// fm_mission_controller.ysc @ L321501
int func_4407(char* sParam0)
{
  int iVar0;
  bool bVar1;
  
  SCRIPT::SCRIPT_THREAD_ITERATOR_RESET();
  while (!bVar1)
  {
    iVar0 = SCRIPT::SCRIPT_THREAD_ITERATOR_GET_NEXT_THREAD_ID();
    if (MISC::ARE_STRINGS_EQUAL(SCRIPT::_GET_NAME_OF_THREAD(iVar0), sParam0))
    {
      bVar1 = true;
    }
  }
  return iVar0;
}