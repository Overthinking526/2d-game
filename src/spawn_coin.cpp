#include <cstdlib>

#include "game.h"

// Функция спавнит в рандомном месте карты койн

void spawn_coin()
{
    coin_y = std::rand() % 18 + 1;
    coin_x = std::rand() % 18 + 1;

    map[coin_y][coin_x] = 'X';
}