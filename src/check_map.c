/*
** EPITECH PROJECT, 2022
** check_map
** File description:
** check_map
*/

#include "navy.h"

static int good_size(void)
{
    if (navy->buffer[2] == navy->buffer[5])
        if ((navy->buffer[6] - navy->buffer[3]) != navy->check_size)
            return (84);
    if (navy->buffer[2] != navy->buffer[5])
        if ((navy->buffer[5] - navy->buffer[2]) != navy->check_size)
            return (84);
    navy->check_size++;
    return (0);
}

static int in_map(void)
{
    if (navy->buffer[2] < 'A' || navy->buffer[2] > 'H')
        return (84);
    if (navy->buffer[5] < 'A' || navy->buffer[5] > 'H')
        return (84);
    if (navy->buffer[3] < '1' || navy->buffer[3] > '8')
        return (84);
    if (navy->buffer[6] < '1' || navy->buffer[6] > '8')
        return (84);
    return (0);
}

int check_map(void)
{
    if (good_size())
        return (84);
    if (in_map())
        return (84);
    return (0);
}
