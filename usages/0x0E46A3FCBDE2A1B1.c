// golf.c @ L113834
void func_786(var uParam0, var uParam1)
{
  if (!bLocal_523)
  {
    if (func_473(uParam1) != 4)
    {
      CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
      CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
    }
    func_794(uParam1, ENTITY::GET_ENTITY_COORDS(func_1199(uParam1), true));
    func_793(uParam1, SYSTEM::VDIST(func_1196(uParam1), func_532(uParam0, func_524(uParam1))));
  }
  else
  {
    ENTITY::SET_ENTITY_COORDS(func_1199(uParam1), func_1196(uParam1) + Vector(0.05f, 0f, 0f), 1, false, 0, 1);
    func_791(uParam1);
    func_789(uParam1);
  }
  ENTITY::SET_ENTITY_MAX_SPEED(func_1199(uParam1), 150f);
  func_1156(func_1199(uParam1), 1);
  func_1190(uParam1, 2);
  func_787(uParam1, 0f);
}