#include <iostream>
#include <cstdlib>
#include <ctime>

#include "game.h"
#include "menu.h"

// Размер карты
const int MAP_WIDTH = 40;
const int MAP_HEIGHT = 30;

// Карта мира
char map[MAP_HEIGHT][MAP_WIDTH];

// Генерация карты
void generate_map()
{
    for(int y = 0; y < MAP_HEIGHT; y++)
    {
        for(int x = 0; x < MAP_WIDTH; x++)
        {
            // Стены по краям карты
            if(y == 0 || y == MAP_HEIGHT - 1 ||
               x == 0 || x == MAP_WIDTH - 1)
            {
                map[y][x] = '#';
            }
            else
            {
                map[y][x] = '*';
            }
        }
    }

    // Стартовая комната вокруг игрока
    for(int y = player_y - 3; y <= player_y + 3; y++)
    {
        for(int x = player_x - 3; x <= player_x + 3; x++)
        {
            if(y > 0 && y < MAP_HEIGHT - 1 &&
                x > 0 && x < MAP_WIDTH - 1)
            {
                map[y][x] = ' ';
            }
        }
    }

    // Случайные угли
    for(int i = 0; i < 30; i++)
    {
        int x = rand() % (MAP_WIDTH - 2) + 1;
        int y = rand() % (MAP_HEIGHT - 2) + 1;

        if(map[y][x] == '*')
        {
            map[y][x] = '&';
        }
    }

    // Случайные алмазы
    for(int i = 0; i < 15; i++)
    {
        int x = rand() % (MAP_WIDTH - 2) + 1;
        int y = rand() % (MAP_HEIGHT - 2) + 1;

        if(map[y][x] == '*')
        {
            map[y][x] = '$';
        }
    }
}

// Функция очистки карты
void clear_map()
{
    for(int y = 0; y < MAP_HEIGHT; y++)
    {
        for(int x = 0; x < MAP_WIDTH; x++)
        {
            map[y][x] = ' ';
        }
    }
}

// Функция отрисовки карты
void show_map()
{
    for(int y = 0; y < MAP_HEIGHT; y++)
    {
        std::cout << "          ";

        for(int x = 0; x < MAP_WIDTH; x++)
        {
            std::cout << map[y][x];
        }

        if(y >= 5 && y <= 12)
        {
            show_press_button(y - 5);
        }

        std::cout << '\n';
    }

    show_inventory();
}