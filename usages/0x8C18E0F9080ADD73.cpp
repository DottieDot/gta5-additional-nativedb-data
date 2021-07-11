// agency_heist3a.ysc @ L135369
void func_948()
{
  vLocal_2154 = { 155.209f, -765.206f, 257.205f };
  vLocal_2155 = { 0f, 0f, -110f };
  iLocal_2122 = PED::CREATE_SYNCHRONIZED_SCENE(vLocal_2154, vLocal_2155, 2);
  ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(iLocal_2201, iLocal_2122, "explode_doc_door", "missheist_agency3amcs_2", 1000f, -1000f, 4, 1148846080);
}