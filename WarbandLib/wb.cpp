#include "wb.h"

#include <cassert>

using namespace wb;

void wb::check_types()
{
	assert_size<action>(308, 308);
	assert_size<action_set>(8, 8);
	//assert_size<agent_ai>(21864, 21864);
	assert_size<agent_ai>(21856, 21856);
	//assert_size<agent>(25136, 25008);
	assert_size<agent>(25088, 24960);
	assert_size<agent_blow>(132, 132);
	assert_size<animation>(316, 316);
	assert_size<attack>(160, 160);
	//assert_size<basic_game>(31480, 32192);
	assert_size<basic_game>(31520, 32232);
	assert_size<bone>(268, 268);
	assert_size<config_manager>(348, -1);
	assert_size<conversation_manager>(319676, 319676);
	assert_size<core_game>(4624, 4624);
	assert_size<face_generator>(2800, 2800);
	assert_size<faction>(3236, 3236);
	assert_size<fading_out_entity>(48, 48);
	assert_size<flora_kind>(168, 168);
	assert_size<flora_kind_instance>(188, 152);
	//assert_size<game>(104672, 104656);
	assert_size<game>(104672, 104664);
	assert_size<game_key_manager>(832, 832);
	assert_size<game_screen>(160, -1);
	assert_size<game_string>(288, 288);
	assert_size<ground_spec>(176, 176);
	assert_size<info_page>(2808, 2808);
	//assert_size<input_manager>(3224, 3176);
	assert_size<input_manager>(3232, 3160);
	assert_size<item>(8, 8);
	assert_size<item_kind>(3128, 3064);
	assert_size<item_modifier>(296, 296);
	assert_size<language_manager>(171700, 171700);
	assert_size<map_event>(280, 280);
	assert_size<map_icon>(328, 328);
	assert_size<map_track>(92, 92);
	assert_size<menu>(608, -1);
	assert_size<menu_item>(744, -1);
	assert_size<mesh>(332, 328);
	assert_size<mesh_manager>(8, 8);
	assert_size<meta_mission>(720, 720);
	assert_size<missile>(8456, 8456);
	assert_size<mission>(354960, 354664);
	assert_size<mission_division>(4204, 4204);
	assert_size<mission_entry_point>(304, 304);
	assert_size<mission_grid>(60, 60);
	assert_size<mission_group>(20, 20);
	assert_size<mission_object>(664, 664);
	assert_size<mission_team>(52, 52);
	assert_size<mission_template>(472, 472);
	assert_size<mission_template_group>(132, 132);
	//assert_size<module_settings>(524, 524);
	assert_size<module_settings>(660, 660);
	assert_size<music_track>(160, -1);
	assert_size<music_manager>(4248, -1);
	assert_size<note_manager>(2376, 2376);
	assert_size<operation>(152, 152);
	assert_size<operation_manager>(156, 156);
	assert_size<particle_system>(452, -1);
	assert_size<particle_system_manager>(52, -1);
	//assert_size<party>(23840, 23824);
	assert_size<party>(23848, 23832);
	assert_size<party_stack>(32, 32);
	assert_size<party_template>(432, 432);
	assert_size<party_template_stack>(16, 16);
	assert_size<post_effect>(200, -1);
	assert_size<presentation>(164, -1);
	assert_size<presentation_container>(56, -1);
	assert_size<presentation_manager>(36, -1);
	assert_size<quest>(3292, 3292);
	assert_size<registry_manager>(4, 4);
	assert_size<scene_prop>(240, 240);
	assert_size<script>(308, 308);
	//assert_size<script_manager>(224, 224);
	assert_size<script_manager>(232, 232);
	assert_size<sentence>(756, 756);
	assert_size<simple_trigger>(176, 176);
	assert_size<simple_trigger_manager>(12, 12);
	assert_size<site>(14512, 14512);
	assert_size<site_visitor_entry>(100, 100);
	assert_size<skeleton>(160, 160);
	assert_size<skeleton_manager>(16, 16);
	assert_size<skill>(452, 452);
	assert_size<skin>(764, 292);
	assert_size<skybox>(348, 348);
	assert_size<slot_manager>(16, 16);
	//assert_size<sound_manager>(1048, 1048);
	assert_size<sound_manager>(1048, 1120);
	assert_size<sound>(408, -1);
	assert_size<sound_sample>(20, -1);
	assert_size<string_manager>(16, 16);
	assert_size<tableau>(1248, -1);
	assert_size<tableau_material>(360, -1);
	assert_size<tableau_manager>(56, -1);
	assert_size<terrain_generator>(16723100, 16583048);
	assert_size<trigger>(376, 376);
	assert_size<trigger_manager>(12, 12);
	assert_size<troop>(4040, 4040);

	assert_size<mbnet_host>(4124, 4124);
	assert_size<mbnet_peer>(61472, 61472);
	assert_size<multiplayer_data>(16519456, 16519520, 16519464);
	assert_size<multiplayer_event>(552, 552);
	assert_size<multiplayer_profile>(256, 256);
	assert_size<multiplayer_server>(792, 792);
	assert_size<network_buffer>(1536, 1536);
	assert_size<network_client>(344, -1);
	//assert_size<network_manager>(16072, 16040);
	assert_size<network_manager>(3768, 3736);
	assert_size<network_player>(66064, 66064);
	//assert_size<network_server>(12416, 12728);
	assert_size<network_server>(104, 416);

	assert_size<game_window>(316, -1);
	assert_size<initial_window>(424, -1);
	assert_size<presentation_window>(376, -1);
	assert_size<yes_no_window>(1116, -1);
	assert_size<banner_selection_window>(376, -1);
	assert_size<game_log_window>(364, -1);
	assert_size<inventory_window>(3044, -1);
	assert_size<map_window>(1064, -1);
	assert_size<notes_window>(456, -1);
	assert_size<graphics_options_window>(596, -1);
	//assert_size<tactical_window>(1392, -1);
	assert_size<tactical_window>(1384, -1);
	assert_size<face_gen_window>(1480, -1);
	
	assert_size<steam_manager>(-1, -1, 120);
	assert_size<steam_achievement>(-1, -1, 172);
	assert_size<steam_achievement_manager>(-1, -1, 14012);
}
