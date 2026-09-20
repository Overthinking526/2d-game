#include <iostream>

#include "map.h"
#include "game.h"
#include "getch.h"

int player_x = 10;
int player_y = 10;

int snake_length = 1;

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
