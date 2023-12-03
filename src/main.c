/*
** EPITECH PROJECT, 2021
** main
** File description:
** main
*/

#include "navy.h"

int main (int ac, char **av)
{
    if (check_help(ac, av))
        return (SUCCESS);
    return (set_navy(ac, av));
}
