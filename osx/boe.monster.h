
#include "pict.hpp"

//cMonster return_monster_template(m_num_t store);
//short difficulty_adjust();
short out_enc_lev_tot(short which);
void create_wand_monst();
void place_outd_wand_monst(location where,cOutdoors::cWandering group,short forced);
location get_monst_head(short m_num);
short get_monst_picnum(m_num_t monst);
ePicType get_monst_pictype(m_num_t monst);
void get_monst_dims(m_num_t monst,short *width, short *height);
void set_up_monst(short mode,m_num_t m_num);
void do_monsters();
bool monst_hate_spot(short which_m,location *good_loc);
short monst_pick_target(short which_m);
short monst_pick_target_monst(cCreature *which_m);
short monst_pick_target_pc(short m_num,cCreature *which_m);
short select_active_pc();
short closest_pc(location where);
short closest_monst(location where,short mode);
short switch_target_to_adjacent(short which_m,short orig_target);
bool rand_move(char i);
bool seek_party(short i,location l1,location l2);
bool flee_party(short i,location l1,location l2);
bool try_move(short i,location start,short x,short y);
bool combat_move_monster(short which,location destination);
location find_clear_spot(location from_where,short mode);
short pc_there(location where);
location random_shift(location start);
bool outdoor_move_monster(short num,location dest);
bool town_move_monster(short num,location dest);
bool monster_placid(short m_num);
void monst_inflict_fields(short which_monst);
bool monst_check_special_terrain(location where_check,short mode,short which_monst);
void forced_place_monster(m_num_t which,location where);
void magic_adjust(cCreature *which_m,short *how_much);
void poison_monst(cCreature *which_m,short how_much);
void acid_monst(cCreature *which_m,short how_much);
void slow_monst(cCreature *which_m,short how_much);
void curse_monst(cCreature *which_m,short how_much);
void web_monst(cCreature *which_m,short how_much);
void scare_monst(cCreature *which_m,short how_much);
void disease_monst(cCreature *which_m,short how_much);
void dumbfound_monst(cCreature *which_m,short how_much);
void charm_monst(cCreature *which_m,short penalty,eStatus which_status,short amount);
void record_monst(cCreature *which_m);
short place_monster(m_num_t which,location where);
bool summon_monster(m_num_t which,location where,short duration,short given_attitude);
void activate_monsters(short code,short attitude);
short get_encumberance(short pc_num);
m_num_t get_summon_monster(short summon_class);
