// am_casino_peds.c @ L90718
void func_754(int iParam0)
{
  if (func_15(iParam0->f_217[func_769() /*71*/]))
  {
    if (ENTITY::HAS_ANIM_EVENT_FIRED(iParam0->f_217[func_769() /*71*/], MISC::GET_HASH_KEY("Pick_Up_Deck")))
    {
      if (!ENTITY::IS_ENTITY_ATTACHED_TO_ANY_PED(iParam0->f_9214))
      {
        ENTITY::FREEZE_ENTITY_POSITION(iParam0->f_9214, false);
        ENTITY::ATTACH_ENTITY_TO_ENTITY(iParam0->f_9214, iParam0->f_217[func_769() /*71*/], PED::GET_PED_BONE_INDEX(iParam0->f_217[func_769() /*71*/], 60309), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 1, 2, 1);
      }
    }
    else if (ENTITY::HAS_ANIM_EVENT_FIRED(iParam0->f_217[func_769() /*71*/], MISC::GET_HASH_KEY("Put_Down_Deck")))
    {
      if (ENTITY::IS_ENTITY_ATTACHED_TO_ANY_PED(iParam0->f_9214))
      {
        ENTITY::DETACH_ENTITY(iParam0->f_9214, 1, true);
        ENTITY::FREEZE_ENTITY_POSITION(iParam0->f_9214, true);
        ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iParam0->f_9214, func_759(Global_2508843), 0, 0, 1);
        ENTITY::SET_ENTITY_ROTATION(iParam0->f_9214, func_755(Global_2508843), 2, 1);
      }
    }
  }
}

Vector3 func_755(int iParam0)
{
  vector3 vVar0;
  
  vVar0 = { PED::GET_ANIM_INITIAL_OFFSET_ROTATION(func_758(), "deck_pick_up_deck", func_757(iParam0), 0f, 0f, func_756(iParam0), 0.01f, 2) };
  return vVar0;
}