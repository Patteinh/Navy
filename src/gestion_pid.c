/*
** EPITECH PROJECT, 2021
** gestion_pid
** File description:
** gestion_pid
*/

#include "navy.h"

int gestion_of_pid_two(char **av)
{
    if (kill(my_atoi(av[1]), SIGUSR1))
        return (84);
    while (navy->reponse == 0);
    return (0);
}

int gestion_of_pid_one(void)
{
    while (navy->reponse == 0);
    if (kill(navy->pid_2, SIGUSR1))
        return (84);
    return (0);
}
