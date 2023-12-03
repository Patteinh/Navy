/*
** EPITECH PROJECT, 2021
** my_putstr.c
** File description:
** display strings
*/

#include "my.h"

void my_putchar(char c)
{
    write(1, &c, 1);
}
