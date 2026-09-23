#include <iostream>
#include <string>

#include "game.h"
#include "getch.h"

int player_x = 10;
int player_y = 10;

int player_hp = 100;
int player_damage = 5;

int cheest_1 = 0;
int cheest_2 = 0;
int cheest_3 = 0;
int cheest_4 = 0;

std::string cheest_1_string = "";
std::string cheest_2_string = "";
std::string cheest_3_string = "";
std::string cheest_4_string = "";

int cheest_1_check = 0;
int cheest_2_check = 0;
int cheest_3_check = 0;
int cheest_4_check = 0;

int item_id = 0;

int coin_x;
int coin_y;

int check = 0;

// Точька входа

int main()
{
    clear_map();

    show_player();

    player_move();

    return 0;
}
