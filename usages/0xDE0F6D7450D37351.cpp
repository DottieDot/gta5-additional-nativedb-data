// mission_triggerer_d.ysc @ L11184
int func_231()
{
  if (!func_211())
  {
    CAM::STOP_GAMEPLAY_HINT(1);
    return 1;
  }
  else if ((MISC::IS_BULLET_IN_BOX(-1027.135f, -550.491f, 30.06013f, -1035.072f, -534.8494f, 40.7644f, 0) || MISC::IS_PROJECTILE_IN_AREA(-1025.526f, -545.9699f, 30.06013f, -1042.389f, -538.6453f, 40.7644f, 0)) || FIRE::IS_EXPLOSION_IN_SPHERE(-1, -1032.861f, -543.8926f, 34.29076f, 26f))
  {
    CAM::STOP_GAMEPLAY_HINT(1);
    return 1;
  }
  return 0;
}