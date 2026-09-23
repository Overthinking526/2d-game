#include <iostream>
#include <cstdlib>
#include <unistd.h>

#include "game.h"
#include "getch.h"
#include "items.h"

// Функция поднятия предмета

void pick_up_an_object()
{

    //------------------------------------------------ROCK

    if(map[player_y][player_x] == '*')
    {
        if(cheest_1 == 0 || cheest_1_check == ROCK)
        {
            cheest_1++;
            cheest_1_check = ROCK;
            map[player_y][player_x] = ' ';
            cheest_1_string = "Rock";
        }
        else if (cheest_2 == 0 || cheest_2_check == ROCK)
        {
            cheest_2++;
            cheest_2_check = ROCK;
            map[player_y][player_x] = ' ';
            cheest_2_string = "Rock";
        }
        else if (cheest_3 == 0 || cheest_3_check == ROCK)
        {
            cheest_3++;
            cheest_3_check = ROCK;
            map[player_y][player_x] = ' ';
            cheest_3_string = "Rock";
        }
        else if (cheest_4 == 0 || cheest_4_check == ROCK)
        {
            cheest_4++;
            cheest_4_check = ROCK;
            map[player_y][player_x] = ' ';
            cheest_4_string = "Rock";
        }
        std::cout << "+ 1 Rock";
    }

    //------------------------------------------------COAL

    else if (map[player_y][player_x] == '&')
    {
        if(cheest_1 == 0 || cheest_1_check == COAL)
        {
            cheest_1++;
            cheest_1_check = COAL;
            map[player_y][player_x] = ' ';
            cheest_1_string = "Coal";
        }
        else if (cheest_2 == 0 || cheest_2_check == COAL)
        {
            cheest_2++;
            cheest_2_check = COAL;
            map[player_y][player_x] = ' ';
            cheest_2_string = "Coal";
        }
        else if (cheest_3 == 0 || cheest_3_check == COAL)
        {
            cheest_3++;
            cheest_3_check = COAL;
            map[player_y][player_x] = ' ';
            cheest_3_string = "Coal";
        }
        else if (cheest_4 == 0 || cheest_4_check == COAL)
        {
            cheest_4++;
            cheest_4_check = COAL;
            map[player_y][player_x] = ' ';
            cheest_4_string = "Coal";
        }
        std::cout << "+ 1 Coal";
    }


    else if (map[player_y][player_x] == '$')
    {
        if(cheest_1 == 0 || cheest_1_check == DIAMOND)
        {
            cheest_1++;
            cheest_1_check = DIAMOND;
            map[player_y][player_x] = ' ';
            cheest_1_string = "Diam";
        }
        else if (cheest_2 == 0 || cheest_2_check == DIAMOND)
        {
            cheest_2++;
            cheest_2_check = DIAMOND;
            map[player_y][player_x] = ' ';
            cheest_2_string = "Diam";
        }
        else if (cheest_3 == 0 || cheest_3_check == DIAMOND)
        {
            cheest_3++;
            cheest_3_check = DIAMOND;
            map[player_y][player_x] = ' ';
            cheest_3_string = "Diam";
        }
        else if (cheest_4 == 0 || cheest_4_check == DIAMOND)
        {
            cheest_4++;
            cheest_4_check = DIAMOND;
            map[player_y][player_x] = ' ';
            cheest_4_string = "Diam";
        }
        std::cout << "+ 1 Diamond";
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

        //------------------------------------------------W

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
            else if (map[player_y][player_x] == '$')
            {
                pick_up_an_object();
                player_y += 1;
            }
            
        }

        //------------------------------------------------S

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
            else if (map[player_y][player_x] == '$')
            {
                pick_up_an_object();
                player_y -= 1;
            }
        }

        //------------------------------------------------A

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
            else if (map[player_y][player_x] == '$')
            {
                pick_up_an_object();
                player_x += 1;
            }
        }

        //------------------------------------------------D
        
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
            else if (map[player_y][player_x] == '$')
            {
                pick_up_an_object();
                player_x -= 1;
            }
        }

        //------------------------------------------------Q

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