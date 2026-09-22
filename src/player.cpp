#include <iostream>
#include <cstdlib>
#include <unistd.h>

#include "game.h"
#include "getch.h"
#include "items.h"

// Функция поднятия предмета

void pick_up_an_object()
{
    if(map[player_y][player_x] == '*')
    {
        if(cheest_1 == 0 || cheest_1_check == ROCK)
        {
            cheest_1++;
            cheest_1_check = ROCK;
            map[player_y][player_x] = ' ';
        }
        else if (cheest_2 == 0 || cheest_2_check == ROCK)
        {
            cheest_2++;
            cheest_2_check = ROCK;
            map[player_y][player_x] = ' ';
        }
        else if (cheest_3 == 0 || cheest_3_check == ROCK)
        {
            cheest_3++;
            cheest_3_check = ROCK;
            map[player_y][player_x] = ' ';
        }
        else if (cheest_4 == 0 || cheest_4_check == ROCK)
        {
            cheest_4++;
            cheest_4_check = ROCK;
            map[player_y][player_x] = ' ';
        }
        std::cout << "+ 1 Rock";
    }
    else if (map[player_y][player_x] == '&')
    {
        if(cheest_1 == 0 || cheest_1_check == WOOD)
        {
            cheest_1++;
            cheest_1_check = WOOD;
            map[player_y][player_x] = ' ';
        }
        else if (cheest_2 == 0 || cheest_2_check == WOOD)
        {
            cheest_2++;
            cheest_2_check = WOOD;
            map[player_y][player_x] = ' ';
        }
        else if (cheest_3 == 0 || cheest_3_check == WOOD)
        {
            cheest_3++;
            cheest_3_check = WOOD;
            map[player_y][player_x] = ' ';
        }
        else if (cheest_4 == 0 || cheest_4_check == WOOD)
        {
            cheest_4++;
            cheest_4_check = WOOD;
            map[player_y][player_x] = ' ';
        }
        std::cout << "+ 1 Wood";
    }
    
}

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
            else if (map[player_y][player_x] == '*')
            {
                pick_up_an_object();
                player_y += 1;
            }
            else if (map[player_y][player_x] == '&')
            {
                pick_up_an_object();
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
            else if (map[player_y][player_x] == '*')
            {
                pick_up_an_object();
                player_y -= 1;
            }
            else if (map[player_y][player_x] == '&')
            {
                pick_up_an_object();
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
            else if (map[player_y][player_x] == '*')
            {
                pick_up_an_object();
                player_x += 1;
            }
            else if (map[player_y][player_x] == '&')
            {
                pick_up_an_object();
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
            else if (map[player_y][player_x] == '*')
            {
                pick_up_an_object();
                player_x -= 1;
            }
            else if (map[player_y][player_x] == '&')
            {
                pick_up_an_object();
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