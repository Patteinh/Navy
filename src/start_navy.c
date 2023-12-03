/*
** EPITECH PROJECT, 2021
** navy_start.c
** File description:
** navy_start
*/

#include "navy.h"
navy_t *navy;

static void free_navy(void)
{
    for(int i = 0; i != 8; i++)
        free(navy->map_navy[i]);
    free(navy->map_navy);
    for(int i = 0; i != 8; i++)
        free(navy->ennemy_map[i]);
    free(navy->ennemy_map);
    free(navy->buffer_attack);
    free(navy);
}

static void set_st_navy(void)
{
    navy->map_navy = NULL;
    navy->buffer = NULL;
    navy->buffer_attack = NULL;
    navy->size_boat = 0;
    navy->start_x = 0;
    navy->start_y = 0;
    navy->end_x = 0;
    navy->end_y = 0;
    navy->reponse = 0;
    navy->pid_1 = 0;
    navy->pid_2 = 0;
    navy->choice_reponse = 0;
}

static int start_navy(int ac, char **av)
{
    if (ac == 2)
        if (player_one(av))
            return (ERROR);
    if (ac == 3)
        if (player_two(av))
            return (ERROR);
    return (SUCCESS);
}

int set_navy(int ac, char **av)
{
    navy = malloc(sizeof(navy_t));

    if (ac < 2 || ac > 3)
        return (ERROR);
    set_st_navy();
    init_signal_connect();
    if (start_navy(ac, av)) {
        free_navy();
        return (ERROR);
    }
    free_navy();
    return (SUCCESS);
}
