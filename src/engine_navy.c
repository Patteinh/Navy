/*
** EPITECH PROJECT, 2022
** engine_navy
** File description:
** engine_navy
*/

#include "navy.h"

int attack(void)
{
    if (begin_attack())
        return (84);
    init_attack_status();
    usleep(100);
    map_update_ennemy();
    free(navy->save_buffer_attack);
    init_signal_winlose();
    return (0);
}

static void display_hit_or_missed(void)
{
    my_putchar(navy->x_atk + 'A');
    my_putchar(navy->y_atk + '0' + 1);
    if (navy->attack == MISSED)
        my_putstr(": missed\n");
    if (navy->attack == HIT)
        my_putstr(": hit\n");
}

void receive_attack(void)
{
    init_signal_attack();
    navy->reponse = 0;
    navy->choice_reponse = 0;
    while (navy->reponse == 0)
        usleep(200);
    navy->attack = check_attack();
    display_hit_or_missed();
    usleep(1000);
    send_attack_status();
    map_update_two();
    usleep(1000);
    navy->x_atk = 0;
    navy->y_atk = 0;
    send_signal_winlose(navy->map_navy);
}

int check_win(void)
{
    while (navy->check == 0);
    if (navy->check == 2) {
        my_putstr("\nI won\n\n");
        return (1);
    }
    return (0);
}

void my_reset(void)
{
    navy->check = 0;
    navy->attack = 0;
    navy->x_atk = 0;
    navy->y_atk = 0;
}
