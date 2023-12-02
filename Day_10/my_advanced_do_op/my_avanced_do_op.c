/*
** EPITECH PROJECT, 2023
** do_op.c
** File description:
** doo
*/

#include "../include/advanced_do_op.h"
#include "../include/my_opp.h"
#include "../include/my.h"

int my_usage(int a, int b, int *error)
{
    my_putstr("error: only [ ");
    for (int j = 0; OPERATORS_FUNCS[j].c[0] != '\0'; j++) {
        my_putstr(OPERATORS_FUNCS[j].c);
        my_putchar(' ');
    }
    my_putstr("] are supported\n");
    return (0);
}

int main(int argc, char **argv)
{
    int error = 0;
    int i = 0;

    if (argc < 4 || argc > 4)
        return (84);
    while (OPERATORS_FUNCS[i].c[0] != '\0') {
        if (my_strcmp(argv[2], OPERATORS_FUNCS[i].c) == 0) {
            OPERATORS_FUNCS[i].function(my_getnbr(argv[1]),
                                        my_getnbr(argv[3]), &error);
            return (error);
        }
        i++;
    }
    my_usage(0, 0, &error);
    return (84);
}
