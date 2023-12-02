/*
** EPITECH PROJECT, 2023
** do_op.c
** File description:
** doo
*/

#include "../include/my.h"
#include <stddef.h>
#include <unistd.h>

int static my_add(int a, int b, int *error)
{
    return (a + b);
}

int static my_sub(int a, int b, int *error)
{
    return (a - b);
}

int static my_div(int a, int b, int *error)
{
    if (b == 0) {
        my_putstr("Stop: division by zero\n");
        *error = 84;
        return (84);
    }
    return (a / b);
}

int static my_mul(int a, int b, int *error)
{
    return (a * b);
}

int static my_mod(int a, int b, int *error)
{
    if (b == 0) {
        my_putstr("Stop: modulo by zero\n");
        *error = 84;
        return (84);
    }
    return (a % b);
}

int main(int argc, char **argv)
{
    int error = 0;
    int temp = 0;
    char *operators[5] = {"+", "-", "/", "*", "%"};
    int (*functions[5])(int, int, int *error) =
        {&my_add, &my_sub, &my_div, &my_mul, &my_mod};

    if (argc < 4 || argc > 4)
        return (84);
    for (int i = 0; i < 5 ; i++) {
        if (operators[i][0] != argv[2][0])
            continue;
        temp = functions[i](my_getnbr(argv[1]), my_getnbr(argv[3]), &error);
        if (error == 84)
            return (error);
        my_put_nbr(temp);
        return (0);
    }
    my_put_nbr(0);
    return (84);
}
