// armenian2.ysc @ L57501
int func_456(int iParam0, vector3 vParam1, bool bParam2, float fParam3)
{
  var uVar0;
  float fVar1;
  float fVar2;
  int iVar3;
  
  if (OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(vParam1, 5f, iParam0, 0))
  {
    if (fParam3 != -2f)
    {
      OBJECT::SET_STATE_OF_CLOSEST_DOOR_OF_TYPE(iParam0, vParam1, bParam2, fParam3, 0);
      OBJECT::GET_STATE_OF_CLOSEST_DOOR_OF_TYPE(iParam0, vParam1, &iVar3, &fVar2);
      if (iVar3 == bParam2 && fVar2 == fParam3)
      {
        return 1;
      }
    }
    else
    {
      OBJECT::GET_STATE_OF_CLOSEST_DOOR_OF_TYPE(iParam0, vParam1, &uVar0, &fVar1);
      OBJECT::SET_STATE_OF_CLOSEST_DOOR_OF_TYPE(iParam0, vParam1, bParam2, fVar1, 0);
      return 1;
    }
  }
  return 0;
}