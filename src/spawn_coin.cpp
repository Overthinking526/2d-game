#include <cstdlib>

#include "game.h"

void spawn_coin()
{
    coin_y = std::rand() % 18 + 1;
    coin_x = std::rand() % 18 + 1;

    map[coin_y][coin_x] = 'X';
}