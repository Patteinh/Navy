/*
** EPITECH PROJECT, 2021
** my_putstr.c
** File description:
** display strings
*/

#include "my.h"

int my_strlen(char const *str)
{
    int size = 0;

    while (str[size] != '\0') {
        size++;
    }
    return (size);
}
