// ambient_solomon.c @ L4233
void func_67()
{
  func_75(PLAYER::PLAYER_PED_ID());
  if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("solomon1")) > 0)
  {
    func_1(30);
    func_66(65, 1);
    func_77();
  }
  if (func_68(59) == 1)
  {
    func_66(65, 1);
    func_1(30);
    func_77();
  }
  if (MISC::GET_MISSION_FLAG())
  {
    func_77();
  }
  if (func_70() != 0)
  {
    func_77();
  }
  if (!func_69(PLAYER::PLAYER_PED_ID(), vLocal_64, (fLocal_65 + 30f)))
  {
    func_77();
  }
  SYSTEM::WAIT(0);
  func_75(PLAYER::PLAYER_PED_ID());
}