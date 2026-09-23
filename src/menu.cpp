#include <iostream>
#include <string>

#include "game.h"
#include "menu.h"

// Функция отрисовки меню

void show_menu()
{
    std::cout << "          ========================================" << '\n';
    std::cout << "          |                                      |" << '\n';
    std::cout << "          |  "<< "coins" << "    "<< "player hp" << "                  |" << '\n';
    std::cout << "               "<< check <<"        "<< player_hp << "                      " << '\n';
    std::cout << "          |                                      |" << '\n';
    std::cout << "          |                                      |" << '\n';
    std::cout << "          ========================================" << '\n';
    std::cout << "                                                  " << '\n';
}

// Функция отрисовки инвенатря

void show_inventory()
{
    std::cout  << "                 " << "          inventory" << '\n';
    std::cout  << "                 " << "============================" << '\n';

    std::cout  << "                 " << cheest_1_string << "          " << cheest_1 << '\n';
    std::cout  << "                 " << cheest_2_string << "          " << cheest_2 << '\n';
    std::cout  << "                 " << cheest_3_string << "          " << cheest_3 << '\n';
    std::cout  << "                 " << cheest_4_string << "          " << cheest_4 << '\n';

    std::cout  << "                 " << "============================" << '\n';
}

// Функция отрисовки меню подсказки

void show_press_button(int line)
{
    switch(line)
    {
        case 0:
            std::cout << "              =========control=========";
            break;
        case 1:
            std::cout << "              |  q = exit game        |";
            break;
        case 2:
            std::cout << "              |  w = up               |";
            break;
        case 3:
            std::cout << "              |  a = left             |";
            break;
        case 4:
            std::cout << "              |  s = down             |";
            break;
        case 5:
            std::cout << "              |  d = right            |";
            break;
        case 6:
            std::cout << "              |  e = bomb             |";
            break;
        case 7:
            std::cout << "              =========================";
            break;   
        case 8:
            std::cout << "                                       ";
            break;
        case 9:
            std::cout << "              ==========items==========";
            break;
        case 10:
            std::cout << "              |  * = Rock             |";
            break;
        case 11:
            std::cout << "              |  & = Coal             |";
            break;
        case 12:
            std::cout << "              |  $ = Diamond          |";
            break;
        case 13:
            std::cout << "              =========================";
            break;
    }
}