#include <iostream>
#include <cstdlib>
#include <unistd.h>

#include "game.h"
#include "getch.h"

// Функция хотьбы игрока

void player_move()
{
    spawn_coin();

    char new_cordinate;

    char old_press = 'd';

    int quit_menu_helper = 1;

    while(quit_menu_helper)
    {
        system("clear");
        clear_map();
        map[coin_y][coin_x] = 'X';

        new_cordinate = _getch();

        if(new_cordinate == 'w')
        {
            map[player_y][player_x] = ' ';
            player_y -= 1;

            if(map[player_y][player_x] == '#')
            {
                std::cout << "Error 001";
                player_y += 1;
            }
        }
        else if(new_cordinate == 's')
        {
            map[player_y][player_x] = ' ';
            player_y += 1;

            if(map[player_y][player_x] == '#')
            {
                std::cout << "Error 001";
                player_y -= 1;
            }
        }
        else if(new_cordinate == 'a')
        {
            map[player_y][player_x] = ' ';
            player_x -= 1;

            if(map[player_y][player_x] == '#')
            {
                std::cout << "Error 001";
                player_x += 1;
            }
        }
        else if(new_cordinate == 'd')
        {
            map[player_y][player_x] = ' ';
            player_x += 1;

            if(map[player_y][player_x] == '#')
            {
                std::cout << "Error 001";
                player_x -= 1;
            }
        }
        else if(new_cordinate == 'q')
        {
            quit_menu_helper = 0;
            continue;
        }
        

        if(player_x == coin_x && player_y == coin_y)
        {
            map[player_y][player_x] = ' ';
            usleep(1000);
            map[player_y][player_x] = 'O';
            usleep(1000);
            map[player_y][player_x] = ' ';
            usleep(1000);
            check += 1;
            snake_length += 1;
            spawn_coin();

        }
        
        map[player_y][player_x] = 'O';
        show_menu();
        show_map();
        usleep(150000);
    }
}

// Функция которая рисует игрока на карте

void show_player()
{
    map[player_y][player_x] = 'O';
}