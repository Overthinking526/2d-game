#include <iostream>

#include "game.h"
#include "menu.h"

// Функция отрисовки меню

void show_menu()
{
    std::cout << "=======================================" << '\n';
    std::cout << "|                                     |" << '\n';
    std::cout << "|  "<< "coins" << "    "<< "player hp" << "                 |" << '\n';
    std::cout << "    "<< check <<"         "<< player_hp << "                    " << '\n';
    std::cout << "|                                     |" << '\n';
    std::cout << "|                                     |" << '\n';
    std::cout << "=======================================" << '\n';
}

void show_inventory()
{
    std::cout << "                inventory" << '\n';
    std::cout << "=========================================" << '\n';
    std::cout << "     "<< cheest_1 <<"    "<< " " <<"    "<< cheest_2 <<"    "<< " " <<"    "<< cheest_3 <<"    "<< " " <<"    "<< cheest_4 <<"    " << '\n';
    std::cout << "|         "<< "|" <<"         "<< "|" <<"         "<< "|" <<"         |" << '\n';
    std::cout << "|         "<< "|" <<"         "<< "|" <<"         "<< "|" <<"         |" << '\n';
    std::cout << "|         "<< "|" <<"         "<< "|" <<"         "<< "|" <<"         |" << '\n';
    std::cout << "|         "<< "|" <<"         "<< "|" <<"         "<< "|" <<"         |" << '\n';
    std::cout << "=========================================" << '\n';
}

void show_press_button(int line)
{
    switch(line)
    {
        case 0:
            std::cout << "              =========================";
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
            std::cout << "              |  e = interact         |";
            break;
        case 7:
            std::cout << "              =========================";
            break;
    }
}