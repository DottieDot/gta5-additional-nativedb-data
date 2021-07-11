// gb_delivery.c @ L132731
void func_1230(var uParam0)
{
  vector3 vVar0;
  float fVar1;
  
  func_1227(uParam0);
  if (func_1241(uParam0))
  {
    vVar0 = { func_1237(uParam0, 0) };
    fVar1 = func_1233(uParam0);
    ENTITY::SET_ENTITY_COORDS_NO_OFFSET(uParam0->f_10.f_553[0 /*12*/], vVar0, 0, 0, 1);
    ENTITY::SET_ENTITY_HEADING(uParam0->f_10.f_553[0 /*12*/], fVar1);
    ENTITY::SET_ENTITY_HEADING(uParam0->f_10.f_580[0], fVar1);
    ENTITY::SET_ENTITY_HEADING(uParam0->f_8, fVar1);
    VEHICLE::SET_VEHICLE_ENGINE_ON(uParam0->f_10.f_553[0 /*12*/], true, true, 0);
    VEHICLE::SET_HELI_BLADES_FULL_SPEED(uParam0->f_10.f_553[0 /*12*/]);
    VEHICLE::SET_HELI_TURBULENCE_SCALAR(uParam0->f_10.f_553[0 /*12*/], 0f);
    ENTITY::SET_ENTITY_COMPLETELY_DISABLE_COLLISION(uParam0->f_8, false, 0);
    ENTITY::SET_ENTITY_COMPLETELY_DISABLE_COLLISION(uParam0->f_10.f_553[0 /*12*/], false, 0);
    ENTITY::SET_ENTITY_COMPLETELY_DISABLE_COLLISION(uParam0->f_10.f_580[0], false, 0);
    ENTITY::SET_ENTITY_COLLISION(uParam0->f_8, false, 0);
    TASK::TASK_PLAY_ANIM(uParam0->f_10.f_587[0], "anim@amb@waving@male", "air_wave", 8f, -8f, -1, 9, 0, 0, 0, 0);
    VEHICLE::CREATE_PICK_UP_ROPE_FOR_CARGOBOB(uParam0->f_10.f_553[0 /*12*/], 0);
    VEHICLE::_SET_CARGOBOB_HOOK_POSITION(uParam0->f_10.f_553[0 /*12*/], 3f, 3f, 1);
    func_1231(1, &(uParam0->f_10.f_553[0 /*12*/]), &(uParam0->f_10.f_553[1 /*12*/]));
    ENTITY::SET_ENTITY_VISIBLE(uParam0->f_10.f_553[1 /*12*/], false, 0);
  }
}