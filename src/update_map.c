/*
** EPITECH PROJECT, 2022
** update_map
** File description:
** update_map
*/

#include "navy.h"

void map_update_ennemy(void)
{
    if (navy->attack == HIT &&
    navy->ennemy_map[navy->y_atk][navy->x_atk] != 'x') {
        navy->ennemy_map[navy->y_atk][navy->x_atk] = 'x';
        my_putchar(navy->save_buffer_attack[0]);
        my_putchar(navy->save_buffer_attack[1]);
        my_putstr(": hit\n");
    }
    else if (navy->attack == MISSED ||
    (navy->ennemy_map[navy->y_atk][navy->x_atk] ==
    'x' && navy->attack == HIT)) {
        navy->ennemy_map[navy->y_atk][navy->x_atk] = 'o';
        my_putchar(navy->save_buffer_attack[0]);
        my_putchar(navy->save_buffer_attack[1]);
        my_putstr(": missed\n");
    }
}

void map_update_two(void)
{
    if (navy->attack == HIT)
        navy->map_navy[navy->y_atk][navy->x_atk] = 'x';
    if (navy->attack == MISSED)
        navy->map_navy[navy->y_atk][navy->x_atk] = 'o';
}
