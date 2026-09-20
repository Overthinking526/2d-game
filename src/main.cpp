#include <iostream>
#include <cstdlib>
#include <unistd.h>

#include "getch.h"

int player_x = 10;
int player_y = 10;

int snake_length = 1;

int food_x;
int food_y;

int check = 0;

void show_menu()
{
    std::cout << "=======================================" << '\n';
    std::cout << "|                                     |" << '\n';
    std::cout << "|  " << "coins" << "                              |" << '\n';
    std::cout << "|    "<< check <<"                                |" << '\n';
    std::cout << "|                                     |" << '\n';
    std::cout << "|                                     |" << '\n';
    std::cout << "=======================================" << '\n';
}

char map[20][20] =
{
    {'#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#'},
    {'#', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '#'},
    {'#', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '#'},
    {'#', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '#'},
    {'#', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '#'},
    {'#', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '#'},
    {'#', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '#'},
    {'#', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '#'},
    {'#', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '#'},
    {'#', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '#'},
    {'#', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '#'},
    {'#', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '#'},
    {'#', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '#'},
    {'#', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '#'},
    {'#', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '#'},
    {'#', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '#'},
    {'#', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '#'},
    {'#', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '#'},
    {'#', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '#'},
    {'#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#'}
};

void spawn_coin()
{
    food_y = rand() % 18 + 1;
    food_x = rand() % 18 + 1;

    map[food_y][food_x] = 'X';
}

void clear_map()
{
    map[20][20];
}

void show_player()
{
    map[player_y][player_x] = 'O';
}

void show_map()
{
    for(int y = 0; y < 20; y++)
    {
        std::cout << "          ";

        for(int x = 0; x < 20; x++)
        {
            std::cout << map[y][x];
        }

        std::cout << "\n";
    }
}

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
        map[food_y][food_x] = 'X';

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
        

        if(player_x == food_x && player_y == food_y)
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

int main()
{
    clear_map();

    show_player();

    player_move();

    return 0;
}