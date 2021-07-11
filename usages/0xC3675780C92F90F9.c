// docks_setup.c @ L119969
void func_660(var uParam0)
{
  if (!iLocal_1855)
  {
    if (STREAMING::HAS_ANIM_DICT_LOADED("map_objects"))
    {
      if (ENTITY::IS_ENTITY_ATTACHED(*uParam0))
      {
        ENTITY::PLAY_ENTITY_ANIM(Local_2320.f_2, "Dock_crane_SLD_unload", "map_objects", 8f, false, true, 0, 0f, 0);
        ENTITY::DETACH_ENTITY(*uParam0, 1, false);
        OBJECT::SET_OBJECT_PHYSICS_PARAMS(*uParam0, -1f, -1f, -1f, -1f, -1f, -1f, -1f, -1f, -1082130432, -1082130432, -1082130432);
        AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "Detach_Container", *uParam0, "CRANE_SOUNDS", false, 0);
        iLocal_2325 = MISC::GET_GAME_TIMER();
        Local_2320.f_77 = 0;
      }
      else if (!Local_2320.f_77)
      {
        if (func_655(ENTITY::GET_ENTITY_COORDS(*uParam0, true), ENTITY::GET_ENTITY_COORDS(Local_2320.f_2, true)))
        {
          ENTITY::PLAY_ENTITY_ANIM(Local_2320.f_2, "Dock_crane_SLD_load", "map_objects", 8f, false, true, 0, 0f, 0);
          ENTITY::FREEZE_ENTITY_POSITION(*uParam0, false);
          ENTITY::ATTACH_ENTITY_TO_ENTITY_PHYSICALLY(*uParam0, Local_2320.f_2, -1, -1, vLocal_1915, vLocal_1916, vLocal_1917, -1f, iLocal_1849, iLocal_1850, iLocal_1851, iLocal_1852, 2);
          AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "Attach_Container", *uParam0, "CRANE_SOUNDS", false, 0);
          iLocal_2325 = MISC::GET_GAME_TIMER();
          Local_2320.f_77 = 1;
        }
      }
    }
  }
}