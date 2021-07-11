// taxiservice.ysc @ L5888
void func_118()
{
  float fVar0;
  int iVar1;
  int iVar2;
  
  iVar1 = 0;
  iVar2 = 0;
  if (iVar1 == 0)
  {
    if (iVar2 == 0)
    {
    }
  }
  fVar0 = func_121(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), Global_110598);
  if (bLocal_64)
  {
    iVar1 = SYSTEM::FLOOR(((fVar0 / 200f) / 60f));
    iVar2 = SYSTEM::ROUND(((fVar0 / 200f) - (60f * SYSTEM::TO_FLOAT(iVar1))));
  }
  else
  {
    iVar1 = SYSTEM::FLOOR(((fVar0 / 100f) / 60f));
    iVar2 = SYSTEM::ROUND(((fVar0 / 100f) - (60f * SYSTEM::TO_FLOAT(iVar1))));
  }
  CLOCK::ADD_TO_CLOCK_TIME(iVar1, iVar2, 0);
  func_119((SYSTEM::TO_FLOAT((iVar1 * 60 + iVar2)) / 60f));
}