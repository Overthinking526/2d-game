#include <string>

#pragma once

extern int player_x;
extern int player_y;

extern int player_hp;
extern int player_damage;

extern int cheest_1;
extern int cheest_2;
extern int cheest_3;
extern int cheest_4;

extern int cheest_1_check;
extern int cheest_2_check;
extern int cheest_3_check;
extern int cheest_4_check;

extern int item_id;

extern int coin_x;
extern int coin_y;

extern int check;

extern char map[20][20];

void spawn_coin();
void show_menu();
void clear_map();
void show_player();
void show_map();
void player_move();
void show_menu();
void clear_map();
void show_map();
void show_player();
void show_inventory();
void show_press_button();