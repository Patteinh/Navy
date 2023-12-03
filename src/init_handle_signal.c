/*
** EPITECH PROJECT, 2021
** init_handle_signal
** File description:
** init_handle_signal
*/

#include "navy.h"

int init_signal_attack(void)
{
    struct sigaction signal;

    sigemptyset(&signal.sa_mask);
    signal.sa_sigaction = handle_signal_attack;
    signal.sa_flags = SA_SIGINFO;
    if ((sigaction(SIGUSR1, &signal, NULL)) == -1)
        return (ERROR);
    if ((sigaction(SIGUSR2, &signal, NULL)) == -1)
        return (ERROR);
    return (SUCCESS);
}

int init_signal_connect(void)
{
    struct sigaction signal;

    sigemptyset(&signal.sa_mask);
    signal.sa_sigaction = handle_signal_connect;
    signal.sa_flags = SA_SIGINFO;
    if ((sigaction(SIGUSR1, &signal, NULL)) == -1)
        return (ERROR);
    if ((sigaction(SIGUSR2, &signal, NULL)) == -1)
        return (ERROR);
    return (SUCCESS);
}

int init_attack_status(void)
{
    struct sigaction signal;

    sigemptyset(&signal.sa_mask);
    signal.sa_sigaction = handle_attack_status;
    signal.sa_flags = SA_SIGINFO;
    if (sigaction(SIGUSR1, &signal, NULL) == -1)
        return (ERROR);
    if (sigaction(SIGUSR2, &signal, NULL) == -1)
        return (ERROR);
    while (navy->attack == 0)
        usleep(100);
    return (SUCCESS);
}

int init_signal_winlose(void)
{
    struct sigaction signal;

    sigemptyset(&signal.sa_mask);
    signal.sa_sigaction = handle_signal_winlose;
    signal.sa_flags = SA_SIGINFO;
    if ((sigaction(SIGUSR1, &signal, NULL)) == -1)
        return (ERROR);
    if ((sigaction(SIGUSR2, &signal, NULL)) == -1)
        return (ERROR);
    return (SUCCESS);
}
