// taxiservice.ysc @ L5996
void func_124()
{
  int iVar0;
  float fVar1;
  
  switch (iLocal_71)
  {
    case 0:
      iVar0 = joaat("SP0_DIST_AS_PASSENGER_TAXI");
      break;
    
    case 1:
      iVar0 = joaat("SP1_DIST_AS_PASSENGER_TAXI");
      break;
    
    case 2:
      iVar0 = joaat("SP2_DIST_AS_PASSENGER_TAXI");
      break;
    
    default:
      if (!func_40(14))
      {
      }
      break;
  }
  if (!func_40(14))
  {
    fVar1 = PATHFIND::CALCULATE_TRAVEL_DISTANCE_BETWEEN_POINTS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Global_110598);
    STATS::STAT_INCREMENT(iVar0, fVar1);
  }
}