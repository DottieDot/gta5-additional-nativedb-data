// abigail1.ysc @ L39758
void func_329()
{
  if (STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
  {
    STREAMING::NEW_LOAD_SCENE_STOP();
  }
  func_289();
  func_330(&Local_82, 0, 0, 0);
  SCRIPT::TERMINATE_THIS_THREAD();
}