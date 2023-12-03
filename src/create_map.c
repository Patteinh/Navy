/*
** EPITECH PROJECT, 2021
** create_map
** File description:
** create_map
*/

#include "navy.h"

void set_var(void)
{
    navy->size_boat = navy->buffer[0];
    navy->start_x = navy->buffer[2] - 'A';
    navy->start_y = navy->buffer[3] - '0' -1;
    navy->end_x = navy->buffer[5] - 'A';
    navy->end_y = navy->buffer[6] - '0' - 1;
}

void create_map_one(void)
{
    for (; navy->start_y != navy->end_y; navy->start_y++)
        navy->map_navy[navy->start_y][navy->start_x] = navy->size_boat;
    navy->map_navy[navy->start_y][navy->start_x] = navy->size_boat;
}

void create_map_two(void)
{
    for (; navy->start_x != navy->end_x; navy->start_x++)
        navy->map_navy[navy->start_y][navy->start_x] = navy->size_boat;
    navy->map_navy[navy->start_y][navy->start_x] = navy->size_boat;
}
