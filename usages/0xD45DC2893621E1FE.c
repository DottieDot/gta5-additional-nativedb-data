// am_ammo_drop.c @ L3466
int func_115()
{
  float fVar0;
  
  fVar0 = ENTITY::GET_ENTITY_PITCH(NETWORK::NET_TO_OBJ(Local_60.f_5));
  if (fVar0 > 10f || fVar0 < -10f)
  {
    return 1;
  }
  fVar0 = ENTITY::GET_ENTITY_ROLL(NETWORK::NET_TO_OBJ(Local_60.f_5));
  if (fVar0 > 10f || fVar0 < -10f)
  {
    return 1;
  }
  return 0;
}