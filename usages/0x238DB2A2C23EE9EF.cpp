// agency_heist1.ysc @ L2082
int func_42()
{
  if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
  {
    return 0;
  }
  switch (func_23())
  {
    case 0:
      if (Global_111560.f_9080.f_99.f_58[65])
      {
        return 1;
      }
      break;
    
    case 1:
      if (Global_111560.f_9080.f_99.f_58[66])
      {
        return 1;
      }
      break;
    
    case 2:
      if (Global_111560.f_9080.f_99.f_58[65])
      {
        return 1;
      }
      break;
  }
  return 0;
}