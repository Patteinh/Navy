/*
** EPITECH PROJECT, 2022
** handle
** File description:
** handle
*/

#include "navy.h"

void handle_signal_winlose(int signal, siginfo_t *info, void *context)
{
    (void)info;
    (void)context;
    if (signal == SIGUSR1)
        navy->check = 1;
    if (signal == SIGUSR2)
        navy->check = 2;
}

void handle_attack_status(int signal, siginfo_t *info, void *context)
{
    (void)info;
    (void)context;
    if (signal == SIGUSR1)
        navy->attack += 1;
    if (signal == SIGUSR2)
        navy->attack += 2;
}

void handle_signal_attack(int signal, siginfo_t *info, void *context)
{
    navy->pid_2 = info->si_pid;

    (void)context;
    if (signal == SIGUSR1 && navy->choice_reponse == 0)
        navy->x_atk++;
    else if (signal == SIGUSR2 && navy->choice_reponse == 0)
        navy->choice_reponse = 1;
    else if (signal == SIGUSR1 && navy->choice_reponse == 1)
        navy->y_atk++;
    else if (signal == SIGUSR2 && navy->choice_reponse == 1)
        navy->reponse = 1;
}

void handle_signal_connect(int signal, siginfo_t *info, void *context)
{
    navy->pid_2 = info->si_pid;
    (void)context;
    if (signal == SIGUSR1)
        navy->reponse = 1;
}
