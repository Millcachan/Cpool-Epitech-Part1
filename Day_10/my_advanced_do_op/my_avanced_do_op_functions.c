/*
** EPITECH PROJECT, 2023
** my_avanced_do_op.c
** File description:
** avanceddoop
*/

#include "../include/my.h"

int my_add(int a, int b, int *error)
{
    my_put_nbr(a + b);
    my_putchar('\n');
    return (0);
}

int my_sub(int a, int b, int *error)
{
    my_put_nbr(a - b);
    my_putchar('\n');
    return (0);
}

int my_div(int a, int b, int *error)
{
    if (b == 0) {
        my_putstr("Stop: division by zero\n");
        *error = 84;
        return (84);
    }
    my_put_nbr(a / b);
    my_putchar('\n');
    return (0);
}

int my_mul(int a, int b, int *error)
{
    my_put_nbr(a * b);
    my_putchar('\n');
    return (0);
}

int my_mod(int a, int b, int *error)
{
    if (b == 0) {
        my_putstr("Stop: modulo by zero\n");
        *error = 84;
        return (84);
    }
    my_put_nbr(a % b);
    my_putchar('\n');
    return (0);
}
