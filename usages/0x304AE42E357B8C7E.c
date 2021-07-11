// fanatic1.c @ L38240
void func_325()
{
  if (func_313(iLocal_344))
  {
    switch (iLocal_347)
    {
      case 0:
        if (func_326())
        {
          if (!func_440(iLocal_344))
          {
            iLocal_344 = PED::CREATE_PED(26, joaat("a_c_rottweiler"), vLocal_345, fLocal_346, 1, true);
            PED::SET_PED_CAN_RAGDOLL(iLocal_344, 1);
          }
          STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("a_c_rottweiler"));
          func_39("Loaded and created dog - progressing");
          iLocal_347 = 1;
        }
        break;
      
      case 1:
        if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
        {
          if (iLocal_351 == 109)
          {
            TASK::TASK_FOLLOW_TO_OFFSET_OF_ENTITY(iLocal_344, PLAYER::PLAYER_PED_ID(), -2f, 2f, 0f, 2.5f, -1, 0.2f, 1);
            iLocal_347 = 2;
          }
        }
        break;
      }
  }
}