/*
** EPITECH PROJECT, 2021
** help
** File description:
** help
*/

#include "navy.h"

static int help(void)
{
    my_putstr("USAGE\n");
    my_putstr("     ./navy [first_player_pid] navy_positions\n");
    my_putstr("DESCRIPTION\n");
    my_putstr("     first_player_pid: only for the ");
    my_putstr("2nd player. pid of the first player.\n");
    my_putstr("     navy_positions: file representing ");
    my_putstr("the positions of the ships.\n");
    return (1);
}

int check_help(int ac, char **av)
{
    if (ac == 2 && !my_strcmp(av[1], "-h"))
        return (help());
    return (0);
}
