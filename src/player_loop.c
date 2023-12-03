/*
** EPITECH PROJECT, 2021
** player_loop
** File description:
** player_loop
*/

#include "navy.h"

static int navy_one(void)
{
    display_map_navy();
    my_reset();
    if (attack())
        return (84);
    if (check_win())
        return (1);
    free(navy->buffer_attack);
    navy->buffer_attack = NULL;
    my_putstr("\nwaiting for enemy's attack...\n");
    my_reset();
    receive_attack();
    if (check_win_lose(navy->map_navy) == STOPGAME) {
        my_putstr("\nennemy_won\n\n");
        return (1);
    }
    return (0);
}

static int navy_two(void)
{
    display_map_navy();
    my_reset();
    my_putstr("\nwaiting for enemy's attack...\n");
    receive_attack();
    if (check_win_lose(navy->map_navy) == STOPGAME) {
        my_putstr("\nennemy_won\n\n");
        return (1);
    }
    my_reset();
    if (attack())
        return (84);
    if (check_win())
        return (1);
    return (0);
}

int player_one(char **av)
{
    if (get_map_usr(av[1]))
        return (84);
    navy->pid_1 = getpid();
    display_pid_one();
    if (gestion_of_pid_one())
        return (84);
    my_putstr("enemy connected\n\n");
    get_map_ennemy();
    while (navy_one() != 1);
    return (0);
}

int player_two(char **av)
{
    if (get_map_usr(av[2]))
        return (84);
    navy->pid_1 = getpid();
    display_pid_two();
    if (gestion_of_pid_two(av))
        return (84);
    my_putstr("\nsuccessfully connected\n\n");
    get_map_ennemy();
    while (navy_two() != 1);
    return (0);
}
