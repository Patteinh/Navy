/*
** EPITECH PROJECT, 2021
** my_atoi
** File description:
** my_atoi
*/

int my_atoi(char *str)
{
    int stock = 0;

    for (; *str;) {
        if (*str <= '9' && *str >= '0') {
            stock *= 10;
            stock += *str - '0';
        } else
            return (stock);
        str++;
    }
    return (stock);
}
