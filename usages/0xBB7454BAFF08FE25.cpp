// am_casino_peds.ysc @ L286318
int func_3437(int iParam0, int iParam1)
{
  int iVar0;
  vector3 vVar1;
  float fVar2;
  
  func_3470(iParam0);
  if (!ENTITY::DOES_ENTITY_EXIST(iParam1->f_101) && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
  {
    iVar0 = PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID());
    func_1243(&iVar0, &(iParam1->f_101), 12);
    func_3466(iParam0, &(iParam1->f_101));
  }
  func_3441(iParam0, Global_1590289, &(iParam1->f_166[3]), &(iParam1->f_166[0]), &(iParam1->f_166[1]), &(iParam1->f_166[2]), &(iParam1->f_166[4]));
  if (ENTITY::DOES_ENTITY_EXIST(iParam1->f_166[3]))
  {
    OBJECT::DELETE_OBJECT(&(iParam1->f_166[3]));
  }
  vVar1 = { func_3440(iParam0) };
  STREAMING::SET_FOCUS_POS_AND_VEL(vVar1, 0f, 0f, 0f);
  fVar2 = 2f;
  func_3438(iParam0, &(iParam1->f_166[1]), &(iParam1->f_166[2]), &fVar2);
  func_1050(iParam1, 0);
  iParam1->f_178 = 0;
  return 1;
}