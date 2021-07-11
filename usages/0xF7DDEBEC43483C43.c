// casino_interior_seating.c @ L3532
void func_100(int iParam0)
{
  float fVar0;
  float fVar1;
  float fVar2;
  float fVar3;
  vector3 vVar4;
  vector3 vVar5;
  float fVar6;
  vector3 vVar7;
  
  fVar3 = ENTITY::GET_ENTITY_SPEED(PLAYER::PLAYER_PED_ID());
  vVar4 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
  if (fVar3 > 0f)
  {
    vVar5 = { ENTITY::GET_WORLD_POSITION_OF_ENTITY_BONE(PLAYER::PLAYER_PED_ID(), PED::GET_PED_BONE_INDEX(PLAYER::PLAYER_PED_ID(), 14201)) };
    fVar6 = (iParam0->f_19 - iParam0->f_15.f_2);
    fVar2 = func_103(0f, MISC::ABSF((iParam0->f_19 - vVar5.z)));
    fVar1 = (fVar2 / fVar6);
    fVar0 = func_102(1f, ((fVar1 + (fVar3 * 0.5f)) * 0.5f));
  }
  if (fVar3 > 0.1f && fVar0 > 0f)
  {
    vVar7 = { vVar4.x, vVar4.y, iParam0->f_19 };
    func_101(iParam0, &vVar7);
    GRAPHICS::SET_PARTICLE_FX_LOOPED_OFFSETS(iParam0->f_3, vVar7, 0f, 0f, 0f);
    GRAPHICS::SET_PARTICLE_FX_LOOPED_EVOLUTION(iParam0->f_3, "size", fVar0, 1);
  }
  else
  {
    func_89(iParam0);
  }
}