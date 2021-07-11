// finalec1.c @ L115572
void func_679()
{
  if (!ENTITY::DOES_ENTITY_EXIST(iLocal_235[0]))
  {
    iLocal_235[0] = OBJECT::CREATE_OBJECT(func_219(10), 1078.86f, -2043.43f, 31.31f, true, true, false);
    ENTITY::SET_ENTITY_HEADING(iLocal_235[0], 89f);
    OBJECT::SET_OBJECT_TARGETTABLE(iLocal_235[0], 1);
  }
  if (!ENTITY::DOES_ENTITY_EXIST(iLocal_236))
  {
    iLocal_236 = OBJECT::CREATE_OBJECT(func_219(12), 1077.147f, -1969.319f, 30.0447f, true, true, false);
    ENTITY::SET_ENTITY_HEADING(iLocal_236, 47f);
    ENTITY::FREEZE_ENTITY_POSITION(iLocal_236, true);
  }
  if (!ENTITY::DOES_ENTITY_EXIST(iLocal_238[0]))
  {
    iLocal_238[0] = OBJECT::CREATE_OBJECT(func_219(12), 1083.129f, -2056.599f, 30.0244f, true, true, false);
    ENTITY::SET_ENTITY_HEADING(iLocal_238[0], 12f);
    ENTITY::FREEZE_ENTITY_POSITION(iLocal_238[0], true);
  }
  if (!ENTITY::DOES_ENTITY_EXIST(iLocal_238[1]))
  {
    iLocal_238[1] = OBJECT::CREATE_OBJECT(func_219(12), 1084.631f, -2058.26f, 30.0244f, true, true, false);
    ENTITY::SET_ENTITY_HEADING(iLocal_238[1], 319f);
    ENTITY::FREEZE_ENTITY_POSITION(iLocal_238[1], true);
  }
}