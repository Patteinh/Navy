/*
** EPITECH PROJECT, 2022
** check_info
** File description:
** check_info
*/

#include "navy.h"

int check_win_lose(char **map)
{
    for (int i = 0; i != 8; i++)
        for (int j = 0; j != 8; j++)
            if (map[i][j] > '0' && map[i][j] < '9')
                return (CONTINUE);
    return (STOPGAME);
}

int check_attack(void)
{
    if (navy->map_navy[navy->y_atk][navy->x_atk] != '.' &&
    navy->map_navy[navy->y_atk][navy->x_atk] != 'o')
        return (HIT);
    if (navy->map_navy[navy->y_atk][navy->x_atk] == '.' ||
    navy->map_navy[navy->y_atk][navy->x_atk] == 'o')
        return (MISSED);
    return (0);
}
