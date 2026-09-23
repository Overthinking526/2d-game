#include <iostream>

#include "game.h"

void momb_cordinate()
{
    time_x_cordinate = player_x;
    time_y_cordinate = player_y;
}

void bomb_boom()
{
    // верх
    if(time_y_cordinate - 2 >= 0 &&
       time_y_cordinate - 2 < 30 &&
       time_x_cordinate >= 0 &&
       time_x_cordinate < 40 &&
       map[time_y_cordinate - 2][time_x_cordinate] != '#')
        map[time_y_cordinate - 2][time_x_cordinate] = ' ';

    if(time_y_cordinate - 2 >= 0 &&
       time_y_cordinate - 2 < 30 &&
       time_x_cordinate - 1 >= 0 &&
       time_x_cordinate - 1 < 40 &&
       map[time_y_cordinate - 2][time_x_cordinate - 1] != '#')
        map[time_y_cordinate - 2][time_x_cordinate - 1] = ' ';

    if(time_y_cordinate - 2 >= 0 &&
       time_y_cordinate - 2 < 30 &&
       time_x_cordinate + 1 >= 0 &&
       time_x_cordinate + 1 < 40 &&
       map[time_y_cordinate - 2][time_x_cordinate + 1] != '#')
        map[time_y_cordinate - 2][time_x_cordinate + 1] = ' ';

    // верхняя середина
    if(time_y_cordinate - 1 >= 0 &&
       time_y_cordinate - 1 < 30 &&
       time_x_cordinate - 2 >= 0 &&
       time_x_cordinate - 2 < 40 &&
       map[time_y_cordinate - 1][time_x_cordinate - 2] != '#')
        map[time_y_cordinate - 1][time_x_cordinate - 2] = ' ';

    if(time_y_cordinate - 1 >= 0 &&
       time_y_cordinate - 1 < 30 &&
       time_x_cordinate - 1 >= 0 &&
       time_x_cordinate - 1 < 40 &&
       map[time_y_cordinate - 1][time_x_cordinate - 1] != '#')
        map[time_y_cordinate - 1][time_x_cordinate - 1] = ' ';

    if(time_y_cordinate - 1 >= 0 &&
       time_y_cordinate - 1 < 30 &&
       time_x_cordinate >= 0 &&
       time_x_cordinate < 40 &&
       map[time_y_cordinate - 1][time_x_cordinate] != '#')
        map[time_y_cordinate - 1][time_x_cordinate] = ' ';

    if(time_y_cordinate - 1 >= 0 &&
       time_y_cordinate - 1 < 30 &&
       time_x_cordinate + 1 >= 0 &&
       time_x_cordinate + 1 < 40 &&
       map[time_y_cordinate - 1][time_x_cordinate + 1] != '#')
        map[time_y_cordinate - 1][time_x_cordinate + 1] = ' ';

    if(time_y_cordinate - 1 >= 0 &&
       time_y_cordinate - 1 < 30 &&
       time_x_cordinate + 2 >= 0 &&
       time_x_cordinate + 2 < 40 &&
       map[time_y_cordinate - 1][time_x_cordinate + 2] != '#')
        map[time_y_cordinate - 1][time_x_cordinate + 2] = ' ';

    // центр
    if(time_y_cordinate >= 0 &&
       time_y_cordinate < 30 &&
       time_x_cordinate - 2 >= 0 &&
       time_x_cordinate - 2 < 40 &&
       map[time_y_cordinate][time_x_cordinate - 2] != '#')
        map[time_y_cordinate][time_x_cordinate - 2] = ' ';

    if(time_y_cordinate >= 0 &&
       time_y_cordinate < 30 &&
       time_x_cordinate - 1 >= 0 &&
       time_x_cordinate - 1 < 40 &&
       map[time_y_cordinate][time_x_cordinate - 1] != '#')
        map[time_y_cordinate][time_x_cordinate - 1] = ' ';

    if(time_y_cordinate >= 0 &&
       time_y_cordinate < 30 &&
       time_x_cordinate >= 0 &&
       time_x_cordinate < 40 &&
       map[time_y_cordinate][time_x_cordinate] != '#')
        map[time_y_cordinate][time_x_cordinate] = ' ';

    if(time_y_cordinate >= 0 &&
       time_y_cordinate < 30 &&
       time_x_cordinate + 1 >= 0 &&
       time_x_cordinate + 1 < 40 &&
       map[time_y_cordinate][time_x_cordinate + 1] != '#')
        map[time_y_cordinate][time_x_cordinate + 1] = ' ';

    if(time_y_cordinate >= 0 &&
       time_y_cordinate < 30 &&
       time_x_cordinate + 2 >= 0 &&
       time_x_cordinate + 2 < 40 &&
       map[time_y_cordinate][time_x_cordinate + 2] != '#')
        map[time_y_cordinate][time_x_cordinate + 2] = ' ';

    // нижняя середина
    if(time_y_cordinate + 1 >= 0 &&
       time_y_cordinate + 1 < 30 &&
       time_x_cordinate - 2 >= 0 &&
       time_x_cordinate - 2 < 40 &&
       map[time_y_cordinate + 1][time_x_cordinate - 2] != '#')
        map[time_y_cordinate + 1][time_x_cordinate - 2] = ' ';

    if(time_y_cordinate + 1 >= 0 &&
       time_y_cordinate + 1 < 30 &&
       time_x_cordinate - 1 >= 0 &&
       time_x_cordinate - 1 < 40 &&
       map[time_y_cordinate + 1][time_x_cordinate - 1] != '#')
        map[time_y_cordinate + 1][time_x_cordinate - 1] = ' ';

    if(time_y_cordinate + 1 >= 0 &&
       time_y_cordinate + 1 < 30 &&
       time_x_cordinate >= 0 &&
       time_x_cordinate < 40 &&
       map[time_y_cordinate + 1][time_x_cordinate] != '#')
        map[time_y_cordinate + 1][time_x_cordinate] = ' ';

    if(time_y_cordinate + 1 >= 0 &&
       time_y_cordinate + 1 < 30 &&
       time_x_cordinate + 1 >= 0 &&
       time_x_cordinate + 1 < 40 &&
       map[time_y_cordinate + 1][time_x_cordinate + 1] != '#')
        map[time_y_cordinate + 1][time_x_cordinate + 1] = ' ';

    if(time_y_cordinate + 1 >= 0 &&
       time_y_cordinate + 1 < 30 &&
       time_x_cordinate + 2 >= 0 &&
       time_x_cordinate + 2 < 40 &&
       map[time_y_cordinate + 1][time_x_cordinate + 2] != '#')
        map[time_y_cordinate + 1][time_x_cordinate + 2] = ' ';

    // низ
    if(time_y_cordinate + 2 >= 0 &&
       time_y_cordinate + 2 < 30 &&
       time_x_cordinate >= 0 &&
       time_x_cordinate < 40 &&
       map[time_y_cordinate + 2][time_x_cordinate] != '#')
        map[time_y_cordinate + 2][time_x_cordinate] = ' ';

    if(time_y_cordinate + 2 >= 0 &&
       time_y_cordinate + 2 < 30 &&
       time_x_cordinate - 1 >= 0 &&
       time_x_cordinate - 1 < 40 &&
       map[time_y_cordinate + 2][time_x_cordinate - 1] != '#')
        map[time_y_cordinate + 2][time_x_cordinate - 1] = ' ';

    if(time_y_cordinate + 2 >= 0 &&
       time_y_cordinate + 2 < 30 &&
       time_x_cordinate + 1 >= 0 &&
       time_x_cordinate + 1 < 40 &&
       map[time_y_cordinate + 2][time_x_cordinate + 1] != '#')
        map[time_y_cordinate + 2][time_x_cordinate + 1] = ' ';
}

void momb_func()
{
    momb_cordinate();

    if(old_press == 'w')
        {
            time_y_cordinate -= 1;
            map[time_y_cordinate][time_x_cordinate] = 'e';
        }
        else if (old_press == 's')
        {
            time_y_cordinate += 1;
            map[time_y_cordinate][time_x_cordinate] = 'e';
        }
        else if (old_press == 'a')
        {
            time_x_cordinate -= 1;
            map[time_y_cordinate][time_x_cordinate] = 'e';
        }
        else if (old_press == 'd')
        {
            time_x_cordinate += 1;
            map[time_y_cordinate][time_x_cordinate] = 'e';
        }

        bomb_boom();
        std::cout << " BOOM!";
}