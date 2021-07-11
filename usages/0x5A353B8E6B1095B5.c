// mission_triggerer_b.c @ L111405
void func_667()
{
  func_38(&(Global_95196.f_9[0]));
  func_673(&uLocal_515, 3);
  func_38(&(Global_95196.f_9[1]));
  func_673(&uLocal_515, 4);
  TASK::USE_WAYPOINT_RECORDING_AS_ASSISTED_MOVEMENT_ROUTE("d1leadin", 0, 1f, 0.5f);
  PED::REMOVE_RELATIONSHIP_GROUP(Global_95196.f_42);
  func_668(145, 0, 0, 0, 0);
  func_668(146, 0, 0, 0, 0);
  if (iLocal_685)
  {
    func_663(7);
    iLocal_685 = 0;
  }
  func_206();
}