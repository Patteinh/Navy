/*
** EPITECH PROJECT, 2021
** display_map
** File description:
** display_map
*/

#include "navy.h"

static void display_part_one(int i)
{
    my_putnbr(i + 1);
    my_putchar('|');
}

static void display_part_two_usr(int i, int j, char **map_navy)
{
    my_putchar(map_navy[i][j]);
    my_putchar(' ');
}

static void display_part_two_ennemy(int i, int j, char **ennemy_map)
{
    my_putchar(ennemy_map[i][j]);
    my_putchar(' ');
}

void display_map_usr(void)
{
    for (int i = 0; i != 8; i++) {
        display_part_one(i);
        for (int j = 0; j != 8; j++)
            display_part_two_usr(i, j, navy->map_navy);
        my_putchar('\n');
    }
}

void display_map_ennemy(void)
{
    for (int i = 0; i != 8; i++) {
        display_part_one(i);
        for (int j = 0; j != 8; j++)
            display_part_two_ennemy(i, j, navy->ennemy_map);
        my_putchar('\n');
    }
}
