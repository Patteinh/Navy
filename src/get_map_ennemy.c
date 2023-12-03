/*
** EPITECH PROJECT, 2021
** get_map_ennemy.c
** File description:
** get_map_ennemy
*/

#include "navy.h"

static void fill_map_ennemy(void)
{
    for (int i = 0; i != 8; i++)
        for (int j = 0; j != 8; j++)
            navy->ennemy_map[i][j] = '.';
}

static int malloc_map_ennemy(void)
{
    navy->ennemy_map = malloc(sizeof(char *) * 8);
    if (navy->ennemy_map == NULL)
        return (84);
    for (int i = 0; i != 8; i++) {
        navy-> ennemy_map[i] = malloc(sizeof(char) * 8);
        if (navy->ennemy_map[i] == NULL)
            return (84);
    }
    return (0);
}

int get_map_ennemy(void)
{
    if (malloc_map_ennemy() == 84)
        return (84);
    fill_map_ennemy();
    return (0);
}
