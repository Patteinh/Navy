/*
** EPITECH PROJECT, 2021
** attack
** File description:
** attack
*/

#include "navy.h"

static void send_signal_attack(void)
{
    for (int i = 0; i != navy->x_atk; i++) {
        kill(navy->pid_2, SIGUSR1);
        usleep(1000);
    }
    kill(navy->pid_2, SIGUSR2);
    usleep(1000);
    for (int i = 0; i != navy->y_atk; i++) {
        kill(navy->pid_2, SIGUSR1);
        usleep(1000);
    }
    kill(navy->pid_2, SIGUSR2);
}

static void check_attack_one(void)
{
    if (my_strlen(navy->buffer_attack) != 3) {
        free(navy->buffer_attack);
        my_putstr("\nwrong position\n");
        check_pos_attack();
    }
}

static void check_attack_two(void)
{
    if (navy->buffer_attack[0] < 'A' || navy->buffer_attack[0] > 'H'
    || navy->buffer_attack[1] < '1' || navy->buffer_attack[1] > '8') {
        free(navy->buffer_attack);
        my_putstr("\nwrong position\n");
        check_pos_attack();
    }
}

int check_pos_attack(void)
{
    long unsigned size = 3;

    while (1) {
        my_putstr("\nattack: ");
        if (getline(&navy->buffer_attack, &size, stdin) == -1)
            return (ERROR);
        check_attack_one();
        check_attack_two();
        navy->save_buffer_attack = my_strdup(navy->buffer_attack);
        break;
    }
    return (SUCCESS);
}

int begin_attack(void)
{
    if (check_pos_attack() == 84)
        return (ERROR);
    navy->x_atk = navy->buffer_attack[0] - 'A';
    navy->y_atk = navy->buffer_attack[1] - '0' - 1;
    send_signal_attack();
    return (SUCCESS);
}
