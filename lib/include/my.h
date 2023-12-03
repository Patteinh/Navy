/*
** EPITECH PROJECT, 2021
** my.h
** File description:
** my.h
*/

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdarg.h>

#ifndef _MY_H_
    #define _MY_H_

void my_putchar(const char c);
void my_putstr(const char *str);
int  my_strlen(const char *str);
int  my_putnbr(int nb);
int  my_atoi(const char *str);
int  my_strcmp(const char *s1, const char *s2);
void my_free_array(char **array);
char *my_strdup(const char *src);
char *my_strcpy(char *dest, const char *src);

static const int SUCCESS = 0;
static const int FAILURE = 1;
static const int ERROR = 84;

#endif
