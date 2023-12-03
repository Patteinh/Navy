/*
** EPITECH PROJECT, 2022
** send_info
** File description:
** send_info
*/

#include "navy.h"

void send_attack_status(void)
{
    if (navy->attack == HIT)
        kill(navy->pid_2, SIGUSR1);
    if (navy->attack == MISSED)
        kill(navy->pid_2, SIGUSR2);
}

void send_signal_winlose(char **map)
{
    if (check_win_lose(map) == STOPGAME)
        kill(navy->pid_2, SIGUSR2);
    else
        kill(navy->pid_2, SIGUSR1);
}
