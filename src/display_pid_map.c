/*
** EPITECH PROJECT, 2021
** gestion_display
** File description:
** gestion_display
*/

#include <stdlib.h>
#include "navy.h"

void display_pid_two(void)
{
    my_putstr("my_pid: ");
    my_putnbr(navy->pid_1);
}

void display_pid_one(void)
{
    my_putstr("my_pid: ");
    my_putnbr(navy->pid_1);
    my_putstr("\nwaiting for enemy connection...\n\n");
}

void display_map_navy(void)
{
    my_putstr("my positions:\n");
    my_putstr(" |A B C D E F G H\n-+---------------\n");
    display_map_usr();
    my_putstr("\nenemy's positions:\n");
    my_putstr(" |A B C D E F G H\n-+---------------\n");
    display_map_ennemy();
}
