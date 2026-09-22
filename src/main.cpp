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
