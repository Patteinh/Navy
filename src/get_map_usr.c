/*
** EPITECH PROJECT, 2021
** set_map
** File description:
** set_map
*/

#include "navy.h"

static void set_var_create_map_boat(void)
{
    set_var();
    if (navy->start_y != navy->end_y)
        create_map_one();
    if (navy->start_x != navy->end_x)
        create_map_two();
}

static void fill_map_usr(void)
{
    for (int i = 0; i != 8; i++)
        for (int j = 0; j != 8; j++)
            navy->map_navy[i][j] = '.';
}

static int malloc_map_usr(void)
{
    navy->map_navy = malloc(sizeof(char *) * 8);
    if (navy->map_navy == NULL)
        return (84);
    for (int i = 0; i != 8; i++) {
        navy-> map_navy[i] = malloc(sizeof(char) * 8);
        if (navy->map_navy[i] == NULL)
            return (84);
    }
    return (0);
}

static int set_map_usr(void)
{
    int nb_boats = 0;
    navy->check_size = 1;

    if (malloc_map_usr() == 84)
        return (84);
    fill_map_usr();
    while (getline(&navy->buffer, &navy->test, navy->path) != -1) {
        if (check_map())
            return (84);
        set_var_create_map_boat();
        nb_boats++;
    }
    if (nb_boats != 4)
        return (84);
    free(navy->buffer);
    return (0);
}

int get_map_usr(char *filepath)
{
    navy->path = fopen(filepath, "r");

    if (navy->path == NULL)
        return (ERROR);
    if (set_map_usr() == 84)
        return (ERROR);
    fclose(navy->path);
    return (0);
}
